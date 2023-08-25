# xv6-riscv-extended
This repository contains our assignment submissions for the course CS330A : Operating Systems offered during Fall 2022 at IIT Kanpur.

## Assignment-1

### Added new system calls
* `getppid()` : returns the pid of the parent process of the currently running process
* `yield()` : currently running process gives up the CPU for one scheduling round
* `getpa(void* va)` :  given a virtual address, returns the corresponding physical address
* `forkf(int f)` : similar to `fork()`, however takes a function address as input, and executes this function before performing the usual operations of `fork()`
* `waitpid(int pid, uint64 ptr)` : waits for the child with given pid to end
* `ps()` : prints information like : start time, end time (if ended), execution time, memory allocated, etc. for the currently running process
* `pinfo()`

## Assignment-2

### Implemented Scheduling Algorithms

* Non-Preemptive First Come First Serve
* Non-Preemptive Shortest Job First
* Preemptive Round Robin
* Preemptive UNIX-based Scheduling

## Assignment-3

### Added functions to enhance synchronization

* Implemented Condition variables
* Implemented Semaphores
