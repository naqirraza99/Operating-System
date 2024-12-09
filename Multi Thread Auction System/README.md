# Multi-Threaded Auction System

This is a multi-threaded auction system written in C where multiple bidders place bids on a single auction item. The program uses **mutex synchronization** to ensure thread safety while updating the highest bid. Each bidder thread attempts to place a bid, and the program ensures that the highest bid is maintained correctly in a concurrent environment.

## Table of Contents

- [Description](#description)
- [Features](#features)
- [Requirements](#requirements)
- [Usage](#usage)
- [Code Structure](#code-structure)
- [Example Output](#example-output)
- [License](#license)

## Description

This program simulates an auction system where multiple threads (representing bidders) attempt to place bids on a shared auction item. The bid with the highest value is kept as the winning bid. The program uses **mutex locks** to prevent race conditions and ensure that only one thread can update the shared `highest_bid` at a time.

### Key Concepts:
- **Mutex Synchronization**: Ensures thread safety for shared variables (`highest_bid`).
- **Threads**: Multiple threads (bidders) are created to simulate bidding.
- **Random Bidding**: Each bidder generates a random bid amount between 0 and 999.

## Features

- Supports multiple bidders (threads) bidding on a single auction item.
- Mutexes are used to ensure that the shared `highest_bid` is updated safely in a concurrent environment.
- Each thread attempts to place a bid, and if the bid is higher than the current highest, the bid is updated.
- Logs the progress of each bidder's attempt to place a bid.

## Requirements

- C Compiler (e.g., GCC)
- POSIX Threads (`pthread.h`)
- Linux or Unix-based operating system (or any OS that supports POSIX threads)

## Usage

### Compilation

To compile the program, use the following command:


gcc auction_system.c -o auction_system


### Execution

To run the program, use the following command:

./ auction_system

## License

This project is licensed under the MIT License - see the LICENSE file for details.

### Key Sections in the `README.md`:
- **Description**: An overview of what the program does.
- **Features**: The main features of the program (multi-threading, mutex synchronization, etc.).
- **Requirements**: What you need to run the program (compiler, threading support, etc.).
- **Usage**: How to compile and run the program, including example commands.
- **Code Structure**: Explanation of the program structure and important functions.
- **License**: Optional, if you want to include a license for the project.

This `README.md` will be a good reference for anyone who wants to understand, compile, and run your program. It provides clear instructions on how to interact with the code, and the example output helps users understand the expected results.

