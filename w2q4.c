#include <stdio.h>
#include <omp.h>
int main(){
	int tid;
	omp_set_num_threads(6);
	#pragma omp parallel
	{
		tid=omp_get_thread_num();
		printf("%d Thread: Hello World\n",tid);
	}
}
