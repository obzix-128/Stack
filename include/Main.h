#ifndef MAIN_H
#define MAIN_H

#include <string.h>
#include <stdint.h>
#include <stdio.h>

#ifdef _DEBUG_
#define _DEBUG_CHICK_CHIRICK
#define _DEBUG_HASH_DJB
#endif // _DEBUG_

#ifdef _DEBUG_HASH_DJB
#define _CHECK_HASH_DJB do \
                        { \
                        int64_t check_hash_djb = my_stack->hash_djb; \
                        check_error = calculateHash(my_stack); \
                        if(check_error != NO_ERROR) \
                        { \
                            return check_error; \
                        } \
                        if(check_hash_djb != my_stack->hash_djb) \
                        { \
                            return HASH_ERROR; \
                        } \
                        } while(0);
#else
#define _CHECK_HASH_DJB
#endif // _DEBUG_HASH_DJB

#ifdef _DEBUG_CHICK_CHIRICK
#define SIZE_CHICK_CHIRICK 8
#define BAD_BEDA 195935962
#else
#define SIZE_CHICK_CHIRICK 0
#endif // _DEBUG_CHICK_CHIRICK

typedef int StackElem_t;

struct StackInf{
    #ifdef _DEBUG_CHICK_CHIRICK
    char chick_chirick_one[SIZE_CHICK_CHIRICK];
    StackElem_t* full_data;
    #endif // _DEBUG_CHICK_CHIRICK

    StackElem_t* data;
    int size;
    int capacity;

    #ifdef _DEBUG_HASH_DJB
    int64_t hash_djb;
    #endif // _DEBUG_HASH_DJB
    #ifdef _DEBUG_CHICK_CHIRICK
    char chick_chirick_two[SIZE_CHICK_CHIRICK];
    #endif // _DEBUG_CHICK_CHIRICK
};

enum ErrorNumber{
    NO_ERROR = 0,
    CALLOC_ERROR = 1,
    CHECK_FOUND_ERROR = 2,
    OPEN_ERROR = 3,
    HASH_ERROR = 4,
    POP_ERROR = 5,
    NULL_ADDRESS_ERROR = 6
};

const int MIN_STACK_SIZE = 16;//TODO: глобальные константы снести?

#endif // MAIN_H
