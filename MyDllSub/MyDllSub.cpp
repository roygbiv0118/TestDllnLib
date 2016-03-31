// MyDllSub.cpp : Defines the entry point for the console application.
//

#include "MyDllSub.h"

int DLLSUB_API DllSub(int a, int b)
{
	int Res = 0;
	return Res = 20 - a - b;
}