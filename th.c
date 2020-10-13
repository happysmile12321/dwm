#include <semaphore.h>
#include <pthread.h>

char*cmd_g;

void *thread_fun()
{
		system(cmd_g);
}

//receive some commands,then you needn't to wait for it.
void do_some_thing(char *cmd){
		cmd_g = cmd;

	sem_t s;
	pthread_t thread;
	if(pthread_create(&thread,NULL,thread_fun,NULL)<0)
	{
	    perror("create thread error!");
	    exit(-1);
	}
    pthread_join(thread, NULL);
	if(sem_init(&s,0,1)<0)
	{
		perror("sem_init_error!");
		exit(1);
	}
}
