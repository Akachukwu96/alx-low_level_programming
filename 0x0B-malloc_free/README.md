## 0x0B. C - malloc, free

## Tasks

0. Write a function that creates an array of chars, and initializes it with
a specific char with Prototype: char *create_array(unsigned int size, char c).

1. Write a function that returns a pointer to a newly allocated space in
memory, which contains a copy of the string given as a parameter with
Prototype: char *_strdup(char *str).

2. Write a function that concatenates two strings with
Prototype: char *str_concat(char *s1, char *s2).

3. Write a function that returns a pointer to a 2 dimensional array of
integers with Prototype: int **alloc_grid(int width, int height).

4. Write a function that frees a 2 dimensional grid previously created by
alloc_grid function with Prototype: void free_grid(int **grid, int height).


### Technologies
* Files are compiled on Ubuntu 20.04 LTS using gcc, using the options
-Wall -Werror -Wextra -pedantic -std=gnu89.
* Files are wriiten using Betty documentation style.
