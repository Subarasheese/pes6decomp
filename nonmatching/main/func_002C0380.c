/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

extern s32 func_00C12A00(s32);
extern s32 func_00C12C00(s32);
extern s32 func_00C132B0(s32);
extern s32 func_00C132C0(s32);
extern s32 func_00C13510(s32, void *, s32);
extern void func_00C13640(s32, void *, s32);
extern u8 D_003E9D51;
extern u8 D_003E9D53;
extern char D_00CB3450[];
extern char D_00CB3468[];
extern char D_00CB34A8[];
extern char D_00CB34B0[];

s32 func_002C0380(s32 arg0) {
    s32 s0;
    s32 a0;
    s32 old;
    s32 bit;
    s32 v;

    s0 = func_00C132C0(arg0) & 0xFF;
    if (func_00C12A00(s0) != 0) {
        return 0;
    }
    a0 = func_00C132B0(arg0) & 0xFF;
    if (a0 == 0xFF || D_003E9D53 == 0xFF) {
        D_003E9D53 = a0;
        return 0;
    }
    old = D_003E9D53;
    bit = (a0 >> 5) & 1;
    D_003E9D53 = a0;
    if (((old >> 5) & 1) == bit) {
        return 0;
    }
    if (D_003E9D51 != bit) {
        return 0;
    }
    if (s0 == 0xD) {
        return 1;
    }
    v = func_00C13510(arg0, D_00CB34A8, *(s32 *)D_00CB34B0);
    if (v != -1) {
        if ((func_00C132C0(v) & 0xFF) == 9) {
            return 1;
        }
    }
    if (func_00C12C00(s0) == 0) {
        return 0;
    }
    func_00C13640(arg0, D_00CB3450, *(s32 *)D_00CB3468);
    return 1;
}
