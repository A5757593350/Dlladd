

#include "pch.h"

#define EXPORT_DLL _declspec(dllexport) 

extern "C" EXPORT_DLL int add(int a, int b); // ¼´ int add(int a,int b)
