#include<unistd.h>
#include<stdio.h>
#include<sys/types.h>
#include<signal.h>
int main(int argc,char** argv)
{
	pid_t fpid;
	int cnt = 0;
	fpid = fork();
	if(fpid < 0)
		printf("Error in fork!");
	else if(!fpid)
	{
		printf("Child Process 1 Processing!\n");
//		sleep(1000);
	}
	else
	{
		int temp = fpid;
		printf("Parent Process Processing!Son is %d\n",temp);
		pid_t nfpid = fork();
		if(fpid < 0)
                printf("Error in fork!");
        	else if(!fpid)
        	{
                	printf("Child Process 2 Processing!");
                //	sleep(1000);
	      	}
		else
		{
			kill(temp,SIGKILL);
			printf("Son Process 1 killed\n");
			kill(fpid,SIGKILL);
			printf("Son Process 2 killed\n");
		}
	}
	printf("End of Father Process!\n");
	return 0;
}
