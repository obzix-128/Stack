#ifndef PUSHANDPOP_H
#define PUSHANDPOP_H

#include "../include/Main.h"

#include <stdlib.h>

ErrorNumber StackPush(StackInf* myStack, StackElem_t element_value);
ErrorNumber StackPop (StackInf* myStack, StackElem_t* element_value);

ErrorNumber StackMemory(StackInf* myStack);

#endif // PUSHANDPOP_H
