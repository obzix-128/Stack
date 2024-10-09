#ifndef VERIFICATOR_H
#define VERIFICATOR_H
#include "../include/Main.h"

#include <stdbool.h>

bool StackVerificator(StackInf* myStack);

#define STACK_VERIFICATOR if(StackVerificator(myStack)) return CHECK_FOUND_ERROR;

#endif // VERIFICATOR_H
