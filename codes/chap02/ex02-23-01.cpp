// 例02-23-01：ex02-23-01.cpp
#if defined _WIN32
#include <windows.h>
...
#elif defined __APPLE__
...
#else
#include <unistd.h>
...
#endif
