#define SEM_SIZE 10

int buffer_sem[SEM_SIZE];

struct semaphore empty;
struct semaphore full;
struct semaphore pro;
struct semaphore con;

int nextp, nextc;