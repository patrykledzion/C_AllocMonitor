#include <stdio.h>
#include "my_alloc.h"

#undef ALLOC_MONITOR_ON

int func()
{
	int* a = malloc(sizeof(char) * 2137);
	return 0;
}

int main()
{
	set_alloc_monitor(0); 

	int* d = malloc(sizeof(int) * 2);
	int* u = malloc(sizeof(int) * 1);
	int* p = malloc(sizeof(int) * 3);
	int* a = malloc(sizeof(int) * 7);
	 
	free(p); 
	free(a);  
	free(d); 

	detect_leaks();

	return 0;
}