#pragma once 
#include <stdio.h>
#include <stdlib.h>

struct _alloc_monitor_t {
	void* ptr;
	size_t size;
	const char* file;
	const char* function;
	int line; 
	struct _alloc_monitor_t* next;
};

void* _alloc_monitor_my_alloc_debug(size_t size, const char* file, const char* function, int line);
void _alloc_monitor_my_free_debug(void* ptr);
void _alloc_monitor_showMem();

#define my_alloc(size)	\
	_alloc_monitor_my_alloc_debug(size, __FILE__, __func__, __LINE__);

#define my_free(ptr)	\
	_alloc_monitor_my_free_debug(ptr);

#define detect_leaks()	\
	_alloc_monitor_showMem();


