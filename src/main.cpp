#include "./main.hpp"
#include "console.hpp"
#include "stdlib.hpp"

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
			.SetPropertyMethod("write", Log)
			.Register();
		
                this->RunJsFromFile(filename);
	}
}
