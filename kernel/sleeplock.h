// Long-term locks for processes
#include "spinlock.h"

#ifndef SLEEPLOCK_H
#define SLEEPLOCK_H

struct sleeplock {
  int locked;       // Is the lock held?
  struct spinlock lk; // spinlock protecting this sleep lock
  
  // For debugging:
  char *name;        // Name of lock.
  int pid;           // Process holding lock
};

#endif
