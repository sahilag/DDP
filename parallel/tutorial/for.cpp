#include <time.h> 
#include <iostream>
#include <omp.h>
#include <stdio.h>

using namespace std;


int main(){

	clock_t init = clock();
	time_t ti = time(NULL);
	int tid;
	omp_set_num_threads(8);
	cout<<omp_get_max_threads()<<endl;
	cout<<omp_get_thread_limit()<<endl;
	
	#pragma omp parallel num_threads(4)
	{
	#pragma omp for 
  	
  	for(int x=0; x < 100000; x++){	
		for(int y=0; y < 20000; y++){
			//tid = omp_get_thread_num();
	  		//printf("Hello World from thread = %d\n", tid);
	  	}
	}
	}	
	cout<< clock() - init <<endl;
	cout<< time(NULL) - ti<< endl;
	return 0;
}
