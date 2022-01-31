#include "./App.hpp"
#include "./Console/Console.hpp"
#include "./Stdlib/Stdlib.hpp"
using namespace v8;
using namespace Console;
using namespace Stdlib;
void App::Start(int argc, char *argv[])
{

	for (int i = 1; i < argc; ++i)
	{

		const char *filename = argv[i];
		
		Local<Context> context = this->CreateLocalContext();

		Context::Scope contextscope(context);
		this->CreateGlobalObject("console")
			.SetPropertyMethod("log", Log)
			.Register();
		this->CreateGlobalObject("std")
			.SetPropertyMethod("rand",Random)
			.Register();
		this->RunJsFromFile(filename);
	}
}
