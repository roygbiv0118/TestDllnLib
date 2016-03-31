// testDllLib.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "MyDllAdd.h"
#include "MyLibAdd.h"

#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int res1 = DllAdd(1, 2);

	int res2 = LibAdd(1, 2);

	cout << "res1 = " << res1 << "\n";
	cout << "res2 = " << res2 << "\n";
	system("pause");
	return 0;
}

