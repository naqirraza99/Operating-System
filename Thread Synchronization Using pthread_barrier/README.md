# Thread Synchronization Using pthread_barrier

This program demonstrates the use of **pthread barrier** to synchronize multiple threads in C. It creates multiple threads, and all threads wait at a barrier before continuing execution, ensuring that they proceed together at specific synchronization points.

## Table of Contents

- [Description](#description)
- [Features](#features)
- [Requirements](#requirements)
- [Usage](#usage)
- [Code Structure](#code-structure)
- [Example Output](#example-output)
- [License](#license)

## Description

This C program creates a specified number of threads (`NUM_THREADS`), and each thread prints a message 10 times while synchronizing with other threads at a **pthread barrier**. The barrier ensures that all threads synchronize and proceed together at each iteration.

Once all threads have reached the barrier, they continue their execution. The program uses the `pthread_create()` function to create threads and the `pthread_join()` function to wait for all threads to finish. The `pthread_barrier_wait()` function is used to synchronize the threads at the barrier.

## Features

- Demonstrates thread creation and synchronization using `pthread` in C.
- Uses `pthread_barrier` to ensure threads synchronize at specific points.
- Error handling for thread creation and synchronization failures.
- Waits for all threads to complete before exiting.

## Requirements

- **C Compiler** (GCC recommended)
- **POSIX Threads** library (`pthread.h`)
- Linux or Unix-based operating system

## Usage

### Compilation

To compile the program, use the following command:

gcc labtask1.c -o labtask1
exit
 
![image](https://github.com/user-attachments/assets/dc108d63-b54f-468c-a43a-b5d235de6808)

### Execution

Run the program: After compilation, run the program:

./labtask1

![image](https://github.com/user-attachments/assets/f384980e-94e6-4ab0-a79b-75e5776ebd6a)

## License
This project is licensed under the MIT License - see the LICENSE file for details.

### How to Use:
1. **Clone the repository**: You can clone this repository to your local machine using Git:
   ```bash
   git clone https://github.com/yourusername/your-repository.git




