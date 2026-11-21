/* compiler: ee-gcc-2.9 */
#include "types.h"

extern s32 D_012018A4[];
extern s32 D_012018AC[];

void func_0019E0A8(int arg0) {
    if (arg0 < 0) {
        *(u32 *)((arg0 & 0x7fffffffU) * 0xc + D_012018A4[0]) = 0;
        return;
    }
    *(u32 *)(arg0 * 0xc + D_012018AC[0]) = 0;
}
