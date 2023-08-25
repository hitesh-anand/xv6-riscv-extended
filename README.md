# xv6-riscv-extended
This repository contains our assignment submissions for the course CS330A : Operating Systems offered during Fall 2022 at IIT Kanpur.

xv6 is a re-implementation of Dennis Ritchie's and Ken Thompson's Unix
Version 6 (v6).  xv6 loosely follows the structure and style of v6,
but is implemented for a modern RISC-V multiprocessor using ANSI C.

The original implementation has 21 system calls. During the course of
these assignments, we added more system calls (enlisted below), new 
scheduling algorithms, and mechanisms to enhance synchronization, namely
, condition variables and semaphores.

## Assignment-1

### Added new system calls
* `getppid()` : returns the pid of the parent process of the currently running process
* `yield()` : currently running process gives up the CPU for one scheduling round
* `getpa(void* va)` :  given a virtual address, returns the corresponding physical address
* `forkf(int f)` : similar to `fork()`, however takes a function address as input, and executes this function before performing the usual operations of `fork()`
* `waitpid(int pid, uint64 ptr)` : waits for the child with given pid to end
* `ps()` : prints information like : start time, end time (if ended), execution time, memory allocated, etc. for the currently running process
* `pinfo()`

Implementation details along with test results are mentioned in `Report_1.pdf`

## Assignment-2

### Implemented Scheduling Algorithms

* Non-Preemptive First Come First Serve
* Non-Preemptive Shortest Job First
* Preemptive Round Robin
* Preemptive UNIX-based Scheduling

Implementation details along with test results are mentioned in `Report_2.pdf`

## Assignment-3

### Added functions to enhance synchronization

* Implemented Condition variables
* Implemented Semaphores

Implementation details along with test results are mentioned in `Report_3.pdf`

## Teammates

* Hitesh Anand
* Arnav Gupta
* Mandar Wayal
* Kushagra Sharma
