#include <stdint.h>

uint32_t global = 0;

int main (void)
{
    volatile uint32_t local = 0;

    for(;;)
    {
        global++;
        local += 2;
    }
    return 0;
}