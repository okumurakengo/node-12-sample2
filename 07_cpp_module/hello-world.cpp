#include <napi.h>
#include <math.h>

namespace helloworld {
    Napi::Value Method(const Napi::CallbackInfo& info) {
        Napi::Env env = info.Env();
        return Napi::String::New(env, "hello world");
    }

    Napi::Object Init(Napi::Env env, Napi::Object exports) {
        exports.Set(Napi::String::New(env, "hello"),
                    Napi::Function::New(env, Method));
        return exports;
    }

    NODE_API_MODULE(NODE_GYP_MODULE_NAME, Init)
}
