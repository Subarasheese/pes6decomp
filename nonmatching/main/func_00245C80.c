/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001B6410(f32);
extern int func_00309420(void);
M2C_UNK func_001B62F0(M2C_UNK);                     /* extern */
M2C_UNK func_001C4730(M2C_UNK *, s32, M2C_UNK);     /* extern */
M2C_UNK func_0023F510(M2C_UNK);                     /* extern */
s32 func_00245190(s32);                             /* extern */
s32 func_002DEC40(M2C_UNK *);                       /* extern */
s32 func_008223F0();                                /* extern */
M2C_UNK func_008B89E0();                            /* extern */
M2C_UNK func_008B98A0();                            /* extern */
M2C_UNK func_008B9C60();                            /* extern */
extern s32 D_003E9ACC;
extern char D_0053C590[];
extern char D_00591970[];
extern M2C_UNK func_00245400;

void func_00245C80(void) {
    M2C_UNK *var_s0;
    M2C_UNK *var_s0_2;
    s32 var_s1;
    s32 var_s1_2;

    func_008B98A0();
    func_008B9C60();
    if (func_00309420() != 0) {
        var_s1 = 0;
        var_s0 = ((void *)D_00591970);
        do {
            func_001C4730(var_s0, func_00245190(var_s1), 0x24);
            var_s1 += 1;
            var_s0 += 0x24;
        } while (var_s1 < 8);
    }
    var_s1_2 = 0;
    var_s0_2 = ((void *)D_0053C590);
    do {
        func_001C4730(var_s0_2, func_00245190(var_s1_2), 0x24);
        var_s1_2 += 1;
        var_s0_2 += 0x36;
    } while (var_s1_2 < 8);
    func_008B89E0();
    if (func_00309420() == 0) {
        func_0023F510(6);
        return;
    }
    D_003E9ACC = func_002DEC40(&func_00245400);
    if (func_008223F0() == 0) {
        func_0023F510(6);
    }
    func_001B6410(2500.0f);
    func_001B62F0(0xC3AA0000);
}
