#include <stdio.h>
#include "my_alloc.h"

int main()
{
	int* x = my_alloc(sizeof(int) * 4);
	int* y = my_alloc(sizeof(int) * 8);
	 
	//my_free(x); 
	my_free(y); 

	detect_leaks();

	return 0;
}