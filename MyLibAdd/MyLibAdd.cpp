#include "MyLibAdd.h"
#include "MyDllSub.h"
#include "MyLibSub.h"

int LibAdd(int a, int b)
{
	int Res = 0;
	return Res =  DllSub(1, 2) + LibSub(3, 4) + a + b;
}