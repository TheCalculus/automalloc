#include <stdlib.h>

void*  ptrs[512];
size_t position = 0;

void a_malloc(void** ptr, size_t size) {
    if (size < 0) return;
    *ptr = malloc(size);
    ptrs[position++] = *ptr;
}

void a_calloc(void** ptr, size_t nmemb, size_t size) {
    if (nmemb < 0 || size < 0) return;
    *ptr = calloc(nmemb, size);
    ptrs[position++] = *ptr;
}

void a_manrec(void** ptr) {
    // manually add an already allocated pointer to be free'd at the end (eg. strdup)
    ptrs[position++] = *ptr;
}

void a_freeall() {
    for (int i = 0; i < position; i++) {
        if (ptrs[i] == NULL) continue;
        free(ptrs[i]);
    }
}
