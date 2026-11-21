/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern int D_003EA5EC;
extern u32 D_003EA5F0;

void func_009247F0(u32 param_1) {
    if ((&D_003EA5F0)[D_003EA5EC] != 0) {
        *(u32 *)((&D_003EA5F0)[D_003EA5EC] + 0x2c) = param_1;
    }
}
