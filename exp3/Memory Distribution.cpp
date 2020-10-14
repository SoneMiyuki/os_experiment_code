#include<cstdio>
#include<queue>
using namespace std;

const int max_process = 10000;
const int max_memory = 100;
const int qlength = 100000;
const int max_exist_time = 100;

queue<int>processQ;
int memory_last_edit_time[max_memory+20];
bool memory_empty[max_memory+20];
int exist_time[max_memory+20];
void init()
{
	memset(exist_time,0,sizeof(exist_time));
	for(int i=0;i<max_memory+20;i++)
	{
		memory_last_edit_time[i] = -1;
		memory_empty = false;
		
	}
	while(!processQ.empty())
	{
		processQ.pop();
	}
	for(int i=0;i<qlength;i++)
	{
		int temp = rand((unsigned)time(NULL))%maxprocess;
		processQ.push(temp);
	}
	return ;
}
void processon()
{
	while(!processQ.empty())
	{
		int temp = processQ.front();
		int process_time = rand()%exist_time+1;//1 at least
		int idx = find_place_OPT();
		if(idx == -1);//not found
		else
		{
			memery_empty[i] = false;
			memery_exist_time[idx] = process_time;	
		} 
                for(int i=0;i<max_memory;i++)//lifecycle--
                if(!memory_empty[i]))
                {
			memory_exist_time[i]--;
                        if(memory_exist_time[i]==0)
                        {
                                memory_empty[i] = true;
                     	}
    		}
	}
}
int find_place_OPT()
{
	return -1;
}
int find_place_FIFO()
{
	return -1;
}
int find_place_LRU()
{

}

int main()
{
	init();	
		

	return 0;
}
