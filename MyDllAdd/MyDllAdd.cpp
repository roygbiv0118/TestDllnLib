// MyDllAdd.cpp : Defines the entry point for the console application.
//
#include "MyDllAdd.h"

#include "MyDllSub.h"
#include "MyLibSub.h"

int DllAdd(int a, int b)
{
	int Res = 0;
	return Res = DllSub(1,3)+LibSub(2,5) + a + b;
}


