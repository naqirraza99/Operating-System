
#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>

#define TOTAL_SEATS 100		//initial number of available seats are 100

// -------------Requirement 1:Implement the Conference Regsitration System Structure-------------------------
typedef struct {
    int available_seats;         // Total number of available seats
    int registered_students;     // Number of registered students
    pthread_mutex_t mutex;       // Mutex for synchronization
    pthread_cond_t condition;    // Condition variable
} ConferenceRegistrationSystem;

// --------------Requirement 2: Write an Initialize Function-------------------------- 
void initialize(ConferenceRegistrationSystem *system) {
    system->available_seats = TOTAL_SEATS;
    system->registered_students = 0;
    pthread_mutex_init(&system->mutex, NULL);		//set up mutex for synchronization
    pthread_cond_init(&system->condition, NULL);	//set up Condition Variable for synchronization
}

//------------------------Requirement 3: Implement the register_seat Function----------------

void* register_seat(void *arg) {
    ConferenceRegistrationSystem *system = (ConferenceRegistrationSystem *)arg;

    pthread_mutex_lock(&system->mutex);

   
    while (system->available_seats <= 0) {		 // Check Seats Availability
        printf("Sorry for Incovinience!No Seats Available Right Now!. Kindly Wait!\n");
        pthread_cond_wait(&system->condition, &system->mutex);
    }

    // Reservation of the seat
    system->available_seats--;
    system->registered_students++;
    printf("Congratulations! Your Seat is Registered! Updated Remaining seats are: %d\n", system->available_seats);

    pthread_mutex_unlock(&system->mutex);
    return NULL;
}
//----------------Requirement 5: Implement the Cancel_Registration Function---------------------
void* cancel_registration(void *arg) {		//Cancel_Registration_Function
    ConferenceRegistrationSystem *system = (ConferenceRegistrationSystem *)arg;

    pthread_mutex_lock(&system->mutex);

    // Release a reserved seats
    system->available_seats++;
    printf("Sorry! Your Registration is Canceled. The Available seats are: %d\n", system->available_seats);

    // Notify Waiting Threads
    pthread_cond_signal(&system->condition);

    pthread_mutex_unlock(&system->mutex);
    return NULL;
}
//--------------------Requirement 4: Simulate the Registration Process---------------------
int main() {
    ConferenceRegistrationSystem system;
    initialize(&system);						//initialize the Conference Registration System

    pthread_t threads[10];

    // Create threads for seat registration
    for (int i = 0; i < 5; i++) {
        pthread_create(&threads[i], NULL, register_seat, (void*)&system);
    }

// --------------Requirement 6: Modify the register_seat_function to Handle Canceled Registrations---------------------
    for (int i = 5; i < 10; i++) {
        pthread_create(&threads[i], NULL, cancel_registration, (void*)&system);
    }
    // Waiting for the threads to finish their execution 
    for (int i = 0; i < 10; i++) {
        pthread_join(threads[i], NULL);
    }

    //----------------------- Requirement 7: Clean Up Resources------------------------
    pthread_mutex_destroy(&system.mutex);		//destroys the mutex for free up space
    pthread_cond_destroy(&system.condition);		//destroys the condition variable for free up space
      printf("The Total Number of Students Registered in Annual GIKI University Conference  are: %d\n", system.registered_students);
    return 0;
}
//Concurrency: The logic behing concurrency Management is that the usage of Mutex ensures that only one thread changes at a time not simultaneously i.e available_seats and registered_students 
//Synchronization: We use condition variable in our code to tell the threads wait for the currently available seats and maintain efficiently.

//Error Handling: We use error handling because it ensures that the  threads do not access the invalid resources and cause the race conditions.



