#include "defs.h"
#include "condvar.h"
#include "sleeplock.h"

#define SIZE 20

// typedef struct cond_var cond_t;

typedef struct {
   int x;
   int full;
   struct sleeplock lock;
   struct cond_t inserted;
   struct cond_t deleted;
} buffer_elem;

buffer_elem buffer[SIZE];
int tail, head;

struct sleeplock lock_delete;
struct sleeplock lock_insert;
struct sleeplock lock_print;


// pthread_mutex_t lock_delete = PTHREAD_MUTEX_INITIALIZER;
// pthread_mutex_t lock_insert = PTHREAD_MUTEX_INITIALIZER;
// pthread_mutex_t lock_print = PTHREAD_MUTEX_INITIALIZER;
