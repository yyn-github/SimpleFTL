#include <map>
#include <list>
#include <assert.h>
#include <iostream>
#include <string>

using namespace std;

#define SAFEDEL(p)		{if ((p)) {delete (p); (p) = NULL;}}
#define SAFEDELARRAY(p)		{if ((p)) {delete [](p); (p) = NULL;}}
#define SEC_SIZE 512

typedef uint32_t LPA_T;
typedef uint32_t PPA_T ;
typedef unsigned char BYTE;
typedef uint32_t LHA_T;

// typedef uint32_t U32T;
// typedef uint64_t ;