#ifndef VERIFICATOR_H
#define VERIFICATOR_H
#include "../include/Main.h"

ErrorNumber StackVerificator(StackInf* my_stack);

#define STACK_VERIFICATOR if(StackVerificator(my_stack)) return CHECK_FOUND_ERROR;

#endif // VERIFICATOR_H
