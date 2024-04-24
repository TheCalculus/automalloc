#ifndef AALLOC_H
#define AALLOC_H

#include <stdlib.h>

extern void*  ptrs[512];
extern size_t position;

void a_malloc(void** ptr, size_t size);
void a_calloc(void** ptr, size_t nmemb, size_t size);
void a_realloc(void** ptr, size_t size);
void a_manrec(void** ptr);
void a_freeall();

#endif
