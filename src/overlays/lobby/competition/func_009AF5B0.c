/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern void func_002DF730(int param_1, u32 param_2);
extern u32 D_00A7DBF0[];

void func_009AF5B0(u32 param_1)

{
    if (D_00A7DBF0[0] != 0) {
        func_002DF730(*(u32 *)(D_00A7DBF0[0] + 0x1C), param_1);
    }
    return;
}
