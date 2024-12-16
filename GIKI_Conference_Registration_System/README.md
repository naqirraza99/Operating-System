# GIKI University Conference Registration System

## Overview

The **GIKI University Conference Registration System** is a multi-threaded application written in C that simulates the process of seat reservations and cancellations for a conference. The system uses **POSIX threads (pthread)** for concurrency management, ensuring proper synchronization with **mutexes** and **condition variables** to avoid race conditions.

The application allows multiple threads to attempt registering for seats and canceling their registrations in a concurrent environment.

## Features

- **Seat Registration**: Students can register for available seats concurrently.
- **Seat Cancellation**: Students can cancel their registration, freeing up a seat for others.
- **Concurrency Management**: Uses mutexes to ensure that only one thread modifies shared resources at a time, preventing race conditions.
- **Synchronization**: Uses condition variables to manage threads waiting for available seats.

## System Requirements

- **Compiler**: GCC or any C compiler that supports POSIX threads.
- **Operating System**: Any Unix-based OS (Linux, macOS) or Windows with POSIX support (e.g., Cygwin).
- **Libraries**: 
  - `pthread.h` (POSIX threads library)

## Code Structure

1. **ConferenceRegistrationSystem Structure**: 
   - Holds the state of the conference (available seats, registered students, a mutex, and a condition variable).

2. **initialize**: 
   - Initializes the conference system with the total number of available seats and sets up mutex and condition variable.

3. **register_seat**: 
   - Handles the seat registration process. Each thread calls this function to attempt a seat reservation. Threads wait if no seats are available.

4. **cancel_registration**: 
   - Simulates seat cancellation by releasing a reserved seat and notifying waiting threads.

5. **Main function**:
   - Creates 10 threads in total: 5 for seat registration and 5 for cancellations, simulating a real-world registration process.
  
  ## Synchronization Explanation

- **Mutex**: A mutex (`pthread_mutex_t`) is used to lock the critical section where the available seats and registered students are modified. This ensures that only one thread can update these values at a time.

- **Condition Variable**: A condition variable (`pthread_cond_t`) is used to make threads wait when no seats are available. Threads are notified when a seat becomes available, and they can attempt registration again.

## Error Handling

- **Thread Safety**: Mutexes prevent race conditions by ensuring that only one thread can modify shared resources at any time.
- **Condition Variable Usage**: Threads that find no available seats will wait, avoiding unnecessary busy-waiting and race conditions.

## Conclusion

This system demonstrates how to manage concurrency in a seat registration scenario using **POSIX threads**. By using **mutexes** for thread safety and **condition variables** for synchronization, the program ensures smooth handling of seat reservations and cancellations even in a multi-threaded environment.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## Contact

If you have any questions or suggestions, feel free to reach out:

- **Author**: Syed Muhammad Naqi Raza
- **Email**: [naqirazarizvi8@gmail.com](mailto:naqirazarizvi8@gmail.com)


  
### Key Sections Explained:

- **Overview**: Brief description of the project.
- **Features**: A summary of the system's features and functionalities.
- **System Requirements**: Tools and libraries needed to compile and run the program.
- **Code Structure**: Explanation of the main components and functions in the code.
- **Compilation and Execution**: Instructions for compiling and running the program.
- **Example Output**: A sample output that users might see when they run the program.
- **Synchronization Explanation**: How mutexes and condition variables are used to handle concurrency and synchronization.
- **Error Handling**: A brief note on how error handling is managed in the code.
- **Conclusion**: Summarizes the usage of POSIX threads and the importance of synchronization.
- **License**: An optional section for licensing (if applicable).
- **Contact**: Optional contact information for the author or maintainer.

You can copy and paste this `README.md` content into your GitHub repository to explain the functionality of the project clearly.


![image](https://github.com/user-attachments/assets/4f34af7b-3156-4f38-a886-40fabf3b7ff9)


## Compilation and Execution

### Compilation

To compile the program, use the following command:

```bash
gcc -o conference_registration conference_registration.c -pthread
./conference_registration

