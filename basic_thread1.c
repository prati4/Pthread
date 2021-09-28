#include<stdio.h>
#include<pthread.h>
#include<unistd.h>
void *my_thread(void *ptr)
{
	
	printf("\n enter in thread");
	for(int i=1;i<=100;i++)
	printf(" val is %d",i);
	//pthread_exit(NULL);
}
int main()
{
	pthread_t tid;
	int ret;
	ret = pthread_create(&tid,NULL,&my_thread,NULL);
	if(ret != 0)
	{
		printf("\n thread is not created");
		return -1;
	}
	printf("\n in main function");
	//sleep(10);
	pthread_join(tid,NULL);
	//pthread_exit(NULL);
	return 0;
}

