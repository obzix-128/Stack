#ifndef DEBUGONMODE_H
#define DEBUGONMODE_H

#include "../include/Main.h"

#ifdef _DEBUG_HASH_DJB
ErrorNumber calculateHash(StackInf* myStack);
#endif // _DEBUG_HASH_DJB
#ifdef _DEBUG_CHICK_CHIRICK
ErrorNumber StackChickChiric(StackInf* myStack);
#endif // _DEBUG_CHICK_CHIRICK

#endif // DEBUGONMODE_H
