# Breakdown of the Code

- Dynamic allocation of variables.
- Using `calloc` function to allocate space for the array.  
    -> The allocated space is a contiguous blocks of code, each one initialized to 0.
- Resizing the array using the `realloc` function.
- Using pointers arithmetic for the array traversal.
- Verifying the success of the allocation each time and exiting in case of failure.
- De-allocating the memory.
