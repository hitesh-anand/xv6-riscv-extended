#include "sleeplock.h"
#include "condvar.h"

#ifndef SEMAPHORE_H
#define SEMAPHORE_H

struct semaphore{
    int value;
    struct sleeplock lock;
    struct cond_t cv;
};

#endif