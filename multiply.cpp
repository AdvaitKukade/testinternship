#include <emscripten/bind.h>

using namespace emscripten;

extern "C" 
{
	extern float multiply_in_js(float x,float y);
}

float multiply(float a, float b) 
{
	return multiply_in_js(a,b);
}

EMSCRIPTEN_BINDINGS(my_module) 
{
    function("multiply", &multiply);
}
