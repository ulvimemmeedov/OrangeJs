#include "./main.hpp"
#include "./console/console.hpp"
using namespace v8;
using namespace Console;

void App::Start(int argc, char *argv[])
{

	for (int i = 1; i < argc; ++i)
	{

		const char *filename = argv[i];

		Local<Context> context = this->CreateLocalContext();

		Context::Scope contextscope(context);
		this->CreateGlobalObject("console")
			.SetPropertyMethod("log", WriteLine)
			.Register();
		
		this->RunJsFromFile(filename);
	}
}