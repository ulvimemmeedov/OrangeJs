#include "../App.hpp"
#ifndef CONSOLE
#define CONSOLE
using namespace v8;

namespace Console 
{
        static void WriteLine(const FunctionCallbackInfo<Value> &args);	
}
#endif
