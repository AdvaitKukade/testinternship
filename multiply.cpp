#include <emscripten/bind.h>

using namespace emscripten;

float multiply(float a, float b) 
{
    return a*b;
}

EMSCRIPTEN_BINDINGS(my_module) {
    function("multiply", &multiply);
}
