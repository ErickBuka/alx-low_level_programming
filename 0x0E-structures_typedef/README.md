# C - Structures, typedef
dog.h:
Define a new type struct dog with the following elements:

  - name, type = char *
  - age, type = float
  - owner, type = char *

### 1-init_dog.c 
Write a function that initialize a variable of type struct dog

### 2-print_dog.c 
Write a function that prints a struct dog

    Prototype: void print_dog(struct dog *d);
    Format: see example bellow
    You are allowed to use the standard library
    If an element of d is NULL, print (nil) instead of this element. (if name is NULL, print Name: (nil))
    If d is NULL print nothing.


### 4-new_dog.c: Write a function that creates a new dog.
### 5-free_dog.c: Write a function that frees dogs.
