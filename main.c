#include <stdio.h>
#include "my_alloc.h"

int main()
{
	int* d = my_alloc(sizeof(int) * 2);
	int* u = my_alloc(sizeof(int) * 1);
	int* p = my_alloc(sizeof(int) * 3);
	int* a = my_alloc(sizeof(int) * 7);
	 
	my_free(p); 
	my_free(a);  
	my_free(d); 

	detect_leaks();

	return 0;
}