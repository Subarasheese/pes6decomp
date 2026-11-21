/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern void func_002DF730(int param_1, u32 param_2);
extern u32 D_00A7DC30[];

void func_009BA990(u32 param_1)

{
    if (D_00A7DC30[0] != 0) {
        func_002DF730(*(u32 *)(D_00A7DC30[0] + 0x1A0), param_1);
    }
    return;
}
