#ifndef PUSHANDPOP_H
#define PUSHANDPOP_H

#include "../include/Main.h"

#include <stdlib.h>

ErrorNumber StackPush(StackInf* my_stack, StackElem_t element_value);
ErrorNumber StackPop (StackInf* my_stack, StackElem_t* element_value);

ErrorNumber StackMemory(StackInf* my_stack);

#endif // PUSHANDPOP_H
