#include "Console.hpp"
using namespace v8;
using namespace Console;

void WriteLine(const FunctionCallbackInfo<Value> &args)
{
	HandleScope scope(args.GetIsolate());

	String::Utf8Value str(args.GetIsolate(), args[0]);
	const char *cstr = StaticHelpers::ToCString(str);

	fprintf(stdout, "%s", cstr);

	fprintf(stdout, "\n");
	fflush(stdout);
}
