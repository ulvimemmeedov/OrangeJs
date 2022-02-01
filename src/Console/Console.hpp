#include "../App.hpp"
#ifndef CONSOLE
#define CONSOLE
using namespace v8;

namespace Console
{
        static void Log(const FunctionCallbackInfo<Value> &args)
        {
                for (int i = 0; i < args.Length(); i++)
                {
                        HandleScope scope(args.GetIsolate());
                        if (i > 0)
                        {
                                fprintf(stdout, " ");
                        }
                        String::Utf8Value str(args.GetIsolate(), args[i]);
                        const char *cstr = StaticHelpers::ToCString(str);
                        fprintf(stdout, "%s", cstr);
                }
                fprintf(stdout, "\n");
                fflush(stdout);
        }
       
}
#endif
