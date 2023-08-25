#include "types.h"
#include "param.h"
#include "memlayout.h"
#include "riscv.h"
#include "spinlock.h"
#include "proc.h"
#include "defs.h"
#include "procstat.h"
#include "condvar.h"
#include "sleeplock.h"


void cond_wait (struct cond_t *cv, struct sleeplock *lock)
{
    // while(lock->locked)
    condsleep(cv, lock);
}

void cond_signal (struct cond_t *cv)
{
    wakeupone(cv);
}

void cond_broadcast (struct cond_t *cv)
{
    wakeup(cv);
}