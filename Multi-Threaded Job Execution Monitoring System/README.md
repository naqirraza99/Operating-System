# Multi-Threaded Job Execution Monitoring System

This C program demonstrates a simple **multi-threaded job execution system** where multiple threads perform jobs concurrently. The program uses **mutex synchronization** to ensure that the shared counter (`job_counter`) is updated safely, and the job execution is logged in a thread-safe manner.

## Table of Contents

- [Description](#description)
- [Features](#features)
- [Requirements](#requirements)
- [Usage](#usage)
- [Code Structure](#code-structure)
- [Example Output](#example-output)
- [License](#license)

## Description

This program creates two threads, each executing a job. The **job counter** is shared between threads, and mutex synchronization ensures that the counter is incremented and accessed safely by each thread. The job execution and completion for each thread are logged with the thread ID and job number. A sleep function is used to simulate job execution time.

### Key Concepts:
- **Mutex Locking**: Ensures safe access to the shared resource (`job_counter`).
- **Thread Creation and Synchronization**: Two threads are created, and the main thread waits for their completion using `pthread_join()`.
- **Thread-Safe Logging**: Mutex ensures that the log messages are printed correctly without race conditions.

## Features

- Safe multi-threaded execution using mutex for synchronization.
- Each thread performs a job, increments the shared counter, and logs its job start and completion.
- Simple structure with easy-to-understand thread management and synchronization.

## Requirements

- **C Compiler** (GCC recommended)
- **POSIX Threads** library (`pthread.h`)
- Linux or Unix-based operating system

## Usage

### Compilation

To compile the program, use the following command:

**gcc job_monitoring.c -o job_monitoring**


### Execution

To execute the program, use the following command:

**./job_monitoring**

## License

This project is licensed under the MIT License - see the LICENSE file for details.


### How to Use:
1. **Clone the repository**: You can clone this repository to your local machine using Git:
   ```bash
   git clone https://github.com/naqiraza99/job-monitoring-system.git



