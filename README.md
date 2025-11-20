# Libft
![Status](https://img.shields.io/badge/status-finished-success)
![Language](https://img.shields.io/badge/language-C-blue)
## A library with standard C functions
This project is the first step of the 42 curriculum.
It aims to implement your own standard C library and improve your knowledge of basic C (data types, memory).
This library will be reused during the 42 cursus.

## Function
| Category | Examples |
|----------|----------|
| Memory |`memset`, `memcpy`, `bzero`, `calloc`|
| Strings |`strlen`, `strdup`, `strjoin`, `substr`|
| Char | `isalpha`, `isdigit`, `toupper`|
| Convert |`atoi`, `itoa`|
| Linked list |`lstnew`, `lstadd_back`, `lstsize`|

## Installation
Bash
```
# Clone depot
git clone https://github.com/yannallo/libft.git

# Enter directory
cd libft

# Build library
make
```

## Usage
At this point you should have a libft.a (Archive containing all the object file).
You will need to include "libft.h" and link during compiling.
e.g:

Bash
```
gcc -I./ main.c -Llibft -lft
```
main.c
```
#include "libft.h"
#include <stdio.h>

int main(void)
{
  char  *s = ft_strdup("A simple string !!");

  printf("%s\n", s);
  free(s);
  return 0;
}
```
