#pragma once 
#ifdef MYDLLSUB_EXPORTS
#define DLLSUB_API _declspec(dllexport)
#else
#define DLLSUB_API _declspec(dllimport)
#endif // DLL_BUILD

int DLLSUB_API DllSub(int a, int b);