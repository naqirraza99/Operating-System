#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>  // For sleep function

// Shared counter and mutex for synchronization
int job_counter = 0;
pthread_mutex_t counter_mutex;

// Function for thread job execution
void* job_function(void* arg) {
  int thread_id = *(int*)arg;

  // Lock mutex to safely update and log the job start
  pthread_mutex_lock(&counter_mutex);
  job_counter++;
  int job_number = job_counter;
  printf("Thread %d: Job %d started.\n", thread_id, job_number);
  pthread_mutex_unlock(&counter_mutex);

  // Simulate job execution
  sleep(1);

  // Lock mutex to safely log the job completion
  pthread_mutex_lock(&counter_mutex);
  printf("Thread %d: Job %d completed.\n", thread_id, job_number);
  pthread_mutex_unlock(&counter_mutex);

  return NULL;
}

int main() {
  // Initialize mutex
  if (pthread_mutex_init(&counter_mutex, NULL) != 0) {
    perror("Mutex initialization failed");
    return EXIT_FAILURE;
  }

  // Thread identifiers
  pthread_t threads[2];
  int thread_ids[2] = {1, 2};

  // Create threads
  for (int i = 0; i < 2; i++) {
    if (pthread_create(&threads[i], NULL, job_function, &thread_ids[i]) != 0) {
      perror("Thread creation failed");
      return EXIT_FAILURE;
    }
  }

  // Wait for threads to finish
  for (int i = 0; i < 2; i++) {
    pthread_join(threads[i], NULL);
  }

  // Destroy mutex
  pthread_mutex_destroy(&counter_mutex);

  printf("All jobs completed.\n");
  return 0;
}
