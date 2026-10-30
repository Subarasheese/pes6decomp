/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001B6410(f32);
extern void func_0023EFB0(void);
extern void func_0023EA10(s32);
extern void func_0023C820(void);
extern void func_002685F0(int);
M2C_UNK func_001B62F0(M2C_UNK);                     /* extern */
s32 func_001B6A30(M2C_UNK);                         /* extern */
M2C_UNK func_001B8DC0();                            /* extern */
M2C_UNK func_0023F3A0();                            /* extern */
s32 func_008223F0();                                /* extern */
M2C_UNK func_008B34C0();                            /* extern */
M2C_UNK func_008B88D0();                            /* extern */
M2C_UNK func_008BA6C0();                            /* extern */
extern s32 D_003E9A40;
extern s8 D_003E9AC4;
extern s8 D_003E9AC8;
extern char D_00510FD0[];
extern char D_00591DB5[];

s32 func_00245400(void) {
    s32 var_s0;

    var_s0 = 0;
    if (((*(s32 *)D_00510FD0) == 0xF) && (func_008223F0() == 1)) {
        goto block_4;
    }
    if (func_001B6A30(1) == 1) {
block_4:
        var_s0 = 1;
    }
    if (var_s0 != 1) {
        return 0;
    }
    D_003E9AC4 = 0;
    D_003E9AC8 = 0;
    D_003E9A40 = 0;
    func_0023EA10(0);
    func_008B88D0();
    func_002685F0(0);
    func_0023EFB0();
    if ((*(s8 *)D_00591DB5) == 1) {
        func_0023F3A0();
    }
    if (((*(s32 *)D_00510FD0) != 0xF) || (func_008223F0() != 1)) {
        func_001B8DC0();
    }
    func_001B6410(0.0f);
    func_001B62F0(0);
    func_0023C820();
    func_008B34C0();
    func_008BA6C0();
    return 1;
}
