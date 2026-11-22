/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern void func_00213800(int param_1, u32 param_2);
extern u32 D_00A7E248[];

void func_009F3CC0(u32 param_1)

{
    if (D_00A7E248[0] != 0) {
        func_00213800(*(u32 *)(D_00A7E248[0] + 0x4), param_1);
    }
    return;
}
