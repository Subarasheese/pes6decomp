/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00802900(void);
extern void func_001F8DA0(void);
M2C_UNK func_002726D0();                            /* extern */
M2C_UNK func_00287C00();                            /* extern */
M2C_UNK func_002BDA20(M2C_UNK);                     /* extern */
M2C_UNK func_00342780();                            /* extern */
s16 *func_008472D0();                               /* extern */
s32 func_008481D0();                                /* extern */
M2C_UNK func_00852750(M2C_UNK);                     /* extern */
M2C_UNK func_008553E0(M2C_UNK *);                   /* extern */
M2C_UNK func_008554D0(M2C_UNK *);                   /* extern */
M2C_UNK func_008555C0(M2C_UNK *);                   /* extern */
s32 func_00858FA0(s32);                             /* extern */
s32 func_00858FD0(M2C_UNK *, s16);                  /* extern */
M2C_UNK func_009E1DA0();                            /* extern */
extern char D_00591DD5[];
extern char D_008B21C0[];
extern M2C_UNK func_00884770;
extern M2C_UNK func_00884830;

s32 func_0080DBD0(void) {
    s32 var_s0;

    var_s0 = 0;
    if (func_00858FA0(func_00858FD0(((void *)D_008B21C0), *func_008472D0())) == 1) {
        var_s0 = 1;
        func_008553E0(&func_00884830);
    } else if (func_008481D0() != 0) {
        func_008554D0(&func_00884770);
    } else {
        func_008555C0(&func_00884770);
    }
    func_00852750(0);
    if (func_00802900() != 1) {
        func_00287C00();
        func_009E1DA0();
    } else {
        (*(s8 *)D_00591DD5) = 0;
        func_002726D0();
        if (var_s0 == 0) {
            func_002BDA20(-1);
        } else {
            func_002BDA20(-0x11);
        }
        func_00287C00();
        func_009E1DA0();
        func_00342780();
        func_001F8DA0();
    }
    return 1;
}
