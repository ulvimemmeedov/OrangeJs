#include "Console.hpp"
using namespace v8;
static void Console::Write(const FunctionCallbackInfo<Value> &args)
{
	HandleScope scope(args.GetIsolate());

	String::Utf8Value str(args.GetIsolate(), args[0]);
	const char *cstr = StaticHelpers::ToCString(str);

	fprintf(stdout, "%s", cstr);

	fprintf(stdout);
	fflush(stdout);
}
static void Console::WriteLine(const FunctionCallbackInfo<Value> &args)
{
	HandleScope scope(args.GetIsolate());

	String::Utf8Value str(args.GetIsolate(), args[0]);
	const char *cstr = StaticHelpers::ToCString(str);

	fprintf(stdout, "%s", cstr);

	fprintf(stdout, "\n");
	fflush(stdout);
}
