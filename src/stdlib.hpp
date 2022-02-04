#include "../main.hpp"
#ifndef STDLIB
#define STDLIB
#include "math.h"
#include "stdlib.h"
using namespace v8;
using namespace std;

namespace Stdlib
{

    static void Random(const FunctionCallbackInfo<Value> &args)
    {
        args.GetReturnValue().Set( rand() % 10 +1);
    }
    
}
#endif
