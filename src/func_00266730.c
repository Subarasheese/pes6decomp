/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 D_0058D770[];
extern s32 D_0058D750[];
extern s32 D_003E9C6C;
extern s32 D_003E9C68;
extern void func_001DD560(s32 a);

s32 func_00266730(void) {
    s32 r = 0;
    u32 i;
    for (i = 0; i < 8; i++) {
        if (D_0058D770[i] != 0) {
            func_001DD560(D_0058D750[i]);
            r = 1;
        }
        D_0058D770[i] = 0;
        D_0058D750[i] = 0;
    }
    D_003E9C6C = 0;
    D_003E9C68 = 0;
    return r;
}
