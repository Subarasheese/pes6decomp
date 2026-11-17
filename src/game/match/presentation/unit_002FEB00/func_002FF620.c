/* compiler: mwcc-3.0.1b210 */
/* Written from the original assembly by an agent; compiles to the original instructions exactly. */
#include "pes6/m2c.h"
extern char D_00591DB5[];
extern char D_00591BE4[];
extern char D_003B4FD0[];
extern void func_002D4C40(s32 a0);
extern void func_00305E60(void *a0, void *a1);
extern void func_002FF8A0(void);
s32 func_002FF620(void *a0) {
    u8 *s0;
    if (*(s8 *)D_00591DB5 != 0) return 0;
    s0 = *(u8 **)((u8 *)a0 + 0x18);
    if (*(s32 *)(s0 + 0x1C) % *(u8 *)D_00591BE4 == 0) {
        func_002D4C40(((s32 *)D_003B4FD0)[*(s32 *)(s0 + 0x24)]);
    }
    if (*(s32 *)(s0 + 0x1C) == 0) {
        func_00305E60(a0, (void *)func_002FF8A0);
        return 1;
    }
    *(s32 *)(s0 + 0x1C) = *(s32 *)(s0 + 0x1C) - 1;
    return 0;
}
