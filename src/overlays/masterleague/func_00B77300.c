/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern int D_003EAF0C;
extern u8 D_003EAF10;

void func_00B77300(void) {
    int value;

    value = D_003EAF0C;
    if (D_003EAF0C != 0) {
        *(u8 *)(D_003EAF0C + 0x40) = D_003EAF10;
        *(u32 *)(value + 0x44) = 0;
    }
}
