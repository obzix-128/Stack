#include "../include/Main.h"
#include "../include/CtorAndDtor.h"
#include "../include/PushAndPop.h"
#include "../include/Dump.h"


int main(void)
{
    StackInf myStack = {};
    ErrorNumber check_error = NO_ERROR;

    check_error = StackCtor(&myStack);
    if(check_error != NO_ERROR)
    {
        return check_error;
    }

    check_error = StackPush(&myStack, 65);
    if(check_error != NO_ERROR)
    {
        #ifdef _DEBUG_CHICK_CHIRICK
        free(myStack.full_data);
        #else
        free(myStack.data);
        #endif // _DEBUG_CHICK_CHIRICK
        return check_error;
    }

    StackElem_t elem_pop = 0;

    check_error = StackPop(&myStack, &elem_pop);
    if(check_error != NO_ERROR)
    {
        #ifdef _DEBUG_CHICK_CHIRICK
        free(myStack.full_data);
        #else
        free(myStack.data);
        #endif // _DEBUG_CHICK_CHIRICK
        return check_error;
    }

    StackDump(&myStack);

    check_error = StackDtor(&myStack);
    if(check_error != NO_ERROR)
    {
        return check_error;
    }

    return 0;
}
