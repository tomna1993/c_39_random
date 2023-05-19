# c_39_random

## DESCRIPTION

This program illustrates how to generate random numbers in C.

The function to generate rundom numbers are `srand()` and `rand()` from `stdlib.h` library.

`rand()` returns a pseudo-random integer value between ​`0`​ and `RAND_MAX` (`0` and `RAND_MAX` included).

`srand()` seeds the pseudo-random number generator used by `rand()`. If `rand()` is used before any calls to `srand()`, `rand()` behaves as if it was seeded with `srand(1)`. Each time `rand()` is seeded with `srand()`, it must produce the same sequence of values. `rand()` is not guaranteed to be thread-safe.

There are no guarantees as to the quality of the random sequence produced. In the past, some implementations of `rand()` have had serious shortcomings in the randomness, distribution and period of the sequence produced (in one well-known example, the low-order bit simply alternated between 1 and 0 between calls). `rand()` is not recommended for serious random-number generation needs, like cryptography.

## INSTALL LIBRARIES

The source code uses the cs50 library what you can download [HERE](https://github.com/cs50/libcs50).

To install the cs50 library follow the steps:

1. Open git bash terminal and change the current working directory to `src`:  
   > cd ./libsc50/src

2. Compile the cs50.c source into .o with:
   > gcc -c cs50.c -o cs50.o

3. Make the library archive:  
   > ar rcs libcs50.a cs50.o

4. Copy the `libcs50.a` file into your compiler's `lib` directory

5. Copy the `cs50.h` file into your compiler's `include` directory

## COMPILE AND RUN THE CODE

The code is written in C, the compiler used to generate the exe is: `gcc Rev10, Built by MSYS2 project 12.2.0`

Run the below code in terminal (git bash) to compile the source:

> gcc commandLineArgument.c -lcs50 -o ./build/commandLineArgument

To run the executable run the below code in terminal (git bash):

> ./build/commandLineArgument.exe
