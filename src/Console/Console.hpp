#include "../App.hpp"
#ifndef CONSOLE
#define CONSOLE

class Console : public Lemon {

	public:	
        static void WriteLine(const FunctionCallbackInfo<Value> &args);		
};
#endif
