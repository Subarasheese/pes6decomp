/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

extern s32 func_00305C60(void *, s32);
extern void func_002D4BE0(s32, s32);
extern void func_00305E60(void *, void (*)(void));
extern void func_00303500(void);
extern char D_003B4E50[];

s32 func_00303200(void *arg0) {
    u8 *s0;
    s32 v;

    s0 = *(u8 **)((u8 *)arg0 + 0x18);
    v = *(s32 *)(s0 + 0x1C);
    if (v == 0) {
        if (func_00305C60(arg0, *(s32 *)(D_003B4E50 + *(s32 *)(s0 + 0x24) * 4)) == 0) {
            func_002D4BE0(*(s32 *)(D_003B4E50 + *(s32 *)(s0 + 0x24) * 4), *(s32 *)(D_003B4E50 + *(s32 *)(s0 + 0x24) * 4));
        }
        func_00305E60(arg0, func_00303500);
        return 1;
    }
    *(s32 *)(s0 + 0x1C) = v - 1;
    return 0;
}
