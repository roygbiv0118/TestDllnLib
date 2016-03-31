#pragma once 
#ifdef MYDLLADD_EXPORTS
#define DLLADD_API _declspec(dllexport)
#else
#define DLLADD_API _declspec(dllimport)
#endif // DLL_BUILD

int DLLADD_API DllAdd(int a, int b);