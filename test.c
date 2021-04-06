#include <stdio.h>
#include <emscripten.h>

EMSCRIPTEN_KEEPALIVE
int test_function(int number)
{
    return number * 4 - 2;
}
