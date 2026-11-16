/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern char D_003D2A20[];

void func_001E43B0(char *arg0, u32 arg1) {
    s32 *p;
    s32 i;
    s32 v;

    if (arg1 >= 0x41U && arg1 < 0x5BU) {
        v = *(s32 *)(*(char **)arg0 + arg1 * 4 - 0x104);
        *(s32 *)(arg0 + 4) = v;
        if (v != 0) {
            *(s8 *)(arg0 + 0x10) = 2;
        }
        return;
    }
    if (arg1 >= 0x61U && arg1 < 0x7BU) {
        v = *(s32 *)(*(char **)arg0 + arg1 * 4 - 0x11C);
        *(s32 *)(arg0 + 4) = v;
        if (v != 0) {
            *(s8 *)(arg0 + 0x10) = 2;
        }
        return;
    }
    i = 0;
    p = (s32 *)D_003D2A20;
    while (arg1 != (u32)*p) {
        p += 1;
        i += 1;
        if (*p == -1) {
            return;
        }
    }
    v = *(s32 *)(*(char **)arg0 + i * 4 + 0xD0);
    *(s32 *)(arg0 + 4) = v;
    if (v != 0) {
        *(s8 *)(arg0 + 0x10) = 2;
    }
}
