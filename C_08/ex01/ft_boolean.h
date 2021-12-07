#ifndef BOOLEAN_H
#define BOOLEAN_H

#include <unistd.h>

typedef int t_bool;

#define FALSE 1
#define TRUE 0
#define SUCCESS 0
#define EVEN_MSG "I have an even number of arguments.\n"
#define ODD_MSG "I have an odd number of arguments.\n"
#define EVEN(number) (number % 2 == 0)

#endif