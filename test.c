#include <stdio.h>
#include <emscripten.h>

EMSCRIPTEN_KEEPALIVE
int fibonacci(int n)
{
    if (n <= 1)
    {
        return n;
    }

    return fibonacci(n - 1) + fibonacci(n - 2);
}
