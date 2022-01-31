#include "./App.hpp"
#include "./Console/Console.hpp"
using namespace v8;

void App::Start(int argc, char *argv[])
{

	for (int i = 1; i < argc; ++i)
	{

		const char *filename = argv[i];

		Local<Context> context = this->CreateLocalContext();

		Context::Scope contextscope(context);
		this->CreateGlobalObject("Console")
			.SetPropertyMethod("WriteLine", Console::WriteLine)
			.SetPropertyMethod("Write",Console::Write)
			.Register();
		
		this->RunJsFromFile(filename);
	}
}
