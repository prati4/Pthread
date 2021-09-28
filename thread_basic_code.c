#include <stdio.h>
#include <pthread.h>//pthread
#include <unistd.h> // sleep

void* my_thread(void *ptr)
{    
     printf("\n Entered in pthread");
     
    
}

int main(void)
{
    pthread_t tid;
    int ret;

    ret = pthread_create(&tid,NULL,&my_thread,NULL); // return 0 if success else return error value
    if (ret !=0) 
    {
            printf("ERORR; return code from pthread_create() is %d\n", ret);
            return -1;
    }

    printf("\n\n Main function...");
    printf("\n PID:: %d\n", getpid());
    sleep(10);
    return 0;
}
