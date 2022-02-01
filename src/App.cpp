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
<<<<<<< HEAD
		
		Local<Context> context = this->CreateLocalContext();
	
		Context::Scope contextscope(context);
		this->CreateGlobalObject("console")
			.SetPropertyMethod("writeLine", Log)
			.Register();
=======

		Local<Context> context = this->CreateLocalContext();

		Context::Scope contextscope(context);
		this->CreateGlobalObject("console")
			.SetPropertyMethod("log", WriteLine)
			.Register();
		
>>>>>>> 0665f8382d43c075ddea6093463fbd07ae79df23
		this->RunJsFromFile(filename);
	}
}
