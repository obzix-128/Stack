#ifndef DEBUGONMODE_H
#define DEBUGONMODE_H

#include "../include/Main.h"

#ifdef _DEBUG_HASH_DJB
ErrorNumber calculateHash(StackInf* my_stack);
#endif // _DEBUG_HASH_DJB
#ifdef _DEBUG_CHICK_CHIRICK
ErrorNumber StackChickChiric(StackInf* my_stack);
#endif // _DEBUG_CHICK_CHIRICK

#endif // DEBUGONMODE_H
