# 42 Piscine

A collection of C exercises completed during the 42 Piscine, an intensive introduction to programming at 42 Porto.

The exercises cover the fundamentals of C, starting with basic functions and progressing through pointers, string manipulation, recursion, and dynamic memory allocation.

## Exercises

| Module | Topics |
| --- | --- |
| C00 | Basic functions, characters, and output |
| C01 | Pointers, arrays, and integer manipulation |
| C02 | String manipulation and character validation |
| C03 | String comparison, concatenation, and searching |
| C04 | String length, output, and conversions |
| C05 | Recursion and mathematical functions |
| C06 | Command-line arguments |
| C07 | Dynamic memory allocation and arrays |

Each module contains individual exercises organized into separate directories.

## Getting Started

### Requirements

- GCC or Clang
- A Unix-like environment

Clone the repository and enter the project:

```bash
git clone git@github.com:Daviddm03/Piscine-42.git
cd Piscine-42
```

Most exercises implement individual functions rather than complete programs, so a small `main.c` can be used to test them.

For example:

```bash
cd Piscine/C00/ex01
```

Create a temporary `main.c`:

```c
void ft_print_alphabet(void);

int main(void)
{
    ft_print_alphabet();
    return (0);
}
```

Compile and run:

```bash
cc -Wall -Wextra -Werror ft_print_alphabet.c main.c -o test
./test
```

## What I Learned

The Piscine was my introduction to programming in C.

I worked with pointers, arrays, strings, memory allocation, and recursion while learning to debug programs and solve problems without relying heavily on standard library functions.

It also introduced me to 42's peer-to-peer learning approach, where discussing solutions and reviewing other students' code are part of the process.

## Tech

C · GCC/Clang · UNIX
