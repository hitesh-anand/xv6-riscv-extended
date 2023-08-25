#include "defs.h"
#include "condvar.h"
#include "sleeplock.h"

#define BARRIER_ARR_SIZE 10

typedef struct {
    struct sleeplock lock;
    int isFree;
    int count;
    struct cond_t cv;
} barrier_elem;

int barrierInitialized = 0;
barrier_elem barrier_array[BARRIER_ARR_SIZE];