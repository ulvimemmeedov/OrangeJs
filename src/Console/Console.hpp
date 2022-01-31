#include "../App.hpp"
#ifndef CONSOLE
#define CONSOLE

class Console : public Lemon {

	public:	
        static void Write(const FunctionCallbackInfo<Value> &args);
        static void WriteLine(const FunctionCallbackInfo<Value> &args);		
};
#endif
