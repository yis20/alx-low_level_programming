#ALX SWE - 0x0C-more_malloc_free


Recreating standard library functions and continuing to use malloc

Description of Files

* TASKS
. 0-malloc_checked.c

Allocates memory with checks. Returns 98 if it fails
C function that returns a pointer to a newly-allocated space in memory using malloc.

. 1-string_nconcat.c

Concatenates two strings up to the first n bytes of s2
C function that returns a pointer to a newly-allocated space in memory containing the concatenation of two strings.
The returned pointer contains s1 followed by the first n bytes of s2, null-terminated.
If n is greater than or equal to the length of s2, the entire string s2 is used.
If NULL is passed, the function treats the parameter as an empty string.
If the function fails - returns NULL.

. 2-calloc.c

Allocates memory and initializes it with c
C function that returns a pointer to a newly-allocated space in memory for an array, using malloc.
Allocates memory for an array of nmemb elements of size bytes each.
The memory is set to zero.
If nmemb = 0, size = 0, or the function fail - returns NULL.

. 3-array_range.c

Creates an array of integers that contains all values from min up to max.
 function that returns a pointer to a newly-allocated space in memory containing an array of integers.
The array contains all the values from parameters min to max, inclusive, ordered from min to max.
If min > max or the function fails - returns NULL.

. 100-realloc.c

allocates a memory block with malloc and free

. 101-mul.c

Multiplies two positive numbers. Can use more than 5 functions.
