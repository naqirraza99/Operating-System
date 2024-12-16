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

## Compilation and Execution

### Compilation

To compile the program, use the following command:

```bash
gcc -o conference_registration conference_registration.c -pthread
./conference_registration

![image](https://github.com/user-attachments/assets/4f34af7b-3156-4f38-a886-40fabf3b7ff9)

