/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern s32 func_00BD45B0(u16 a0);
extern u16 func_00BD4780(s32 a0, s32 a1, void *a2, void *a3);

void func_00BD3BE0(char *arg0, s32 arg1) {
    s32 s0;
    u16 s1;
    u8 t;
    char *a2;
    char *a3;

    a2 = *(char **)(arg0 + 4);
    s0 = arg1 & 0xFF;
    a3 = *(char **)arg0;
    s1 = *(u16 *)(*(char **)(a3 + 4) + 0x30);
    if (*(u8 *)(a2 + 0xC) != s0) {
        t = *(u8 *)(a2 + 0x12);
        if (t != 2 && t != 1) {
            *(s16 *)(a3 + 0x3C) = 0;
            *(s8 *)(*(char **)(arg0 + 4) + 0xC) = arg1;
            *(u16 *)(*(char **)(arg0 + 4) + 4) = func_00BD4780(arg1, arg1, a2, a3);
            *(s8 *)(*(char **)(arg0 + 4) + 0xD) = 7;
            *(s16 *)(*(char **)(arg0 + 4) + 6) = 0;
            *(s8 *)(*(char **)(arg0 + 4) + 0xE) = 0;
        } else {
            *(s8 *)(a2 + 0xD) = arg1;
        }
    } else {
        *(s8 *)(a2 + 0xD) = 7;
    }
    if (s0 == 1 && *(u16 *)(*(char **)(arg0 + 4) + 4) != s1 && (func_00BD45B0(s1) & 0xFF) == 1) {
        *(u16 *)(*(char **)(arg0 + 4) + 4) = s1;
    }
}
