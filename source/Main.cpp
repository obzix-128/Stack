#include "../include/Main.h"
#include "../include/CtorAndDtor.h"
#include "../include/PushAndPop.h"
#include "../include/Dump.h"


int main(void)
{
    StackInf my_stack = {};
    ErrorNumber check_error = NO_ERROR;

    check_error = StackCtor(&my_stack);
    if(check_error != NO_ERROR)
    {
        return check_error;
    }

    check_error = StackPush(&my_stack, 65);
    if(check_error != NO_ERROR)
    {
        #ifdef _DEBUG_CHICK_CHIRICK
        free(my_stack.full_data);
        #else
        free(my_stack.data);
        #endif // _DEBUG_CHICK_CHIRICK
        return check_error;
    }

    StackElem_t elem_pop = 0;

    check_error = StackPop(&my_stack, &elem_pop);
    if(check_error != NO_ERROR)
    {
        #ifdef _DEBUG_CHICK_CHIRICK
        free(my_stack.full_data);
        #else
        free(my_stack.data);
        #endif // _DEBUG_CHICK_CHIRICK
        return check_error;
    }

    StackDump(&my_stack);

    check_error = StackDtor(&my_stack);
    if(check_error != NO_ERROR)
    {
        return check_error;
    }

    return 0;
}
