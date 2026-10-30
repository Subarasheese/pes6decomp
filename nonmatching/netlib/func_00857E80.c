/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_002DCA30(void);
extern u32 func_00847FA0(void);
extern u16 func_002DCE70(u16);
M2C_UNK func_001C48E8(s16 *, M2C_UNK, M2C_UNK);     /* extern */
s16 func_00847D80(s16 *, M2C_UNK);                  /* extern */
M2C_UNK func_00858020(u32, s16 *, M2C_UNK, s16 *);  /* extern */
extern u32 D_003E7814;

void func_00857E80(s32 arg0, u16 arg1) {
    s16 sp40;
    u16 sp42;
    s32 sp44;
    s16 sp58;
    s16 sp5A;
    s16 sp5C;
    u32 var_s0;

    if (func_002DCA30() == 0) {
        var_s0 = D_003E7814;
    } else {
        var_s0 = func_00847FA0();
    }
    if (var_s0 != -1U) {
        func_001C48E8(&sp58, 0, 8);
        sp58 = 3;
        sp5A = 2;
        sp5C = func_00847D80(&sp58, 8);
        func_001C48E8(&sp40, 0, 0x10);
        sp44 = arg0;
        sp42 = func_002DCE70(arg1);
        sp40 = 0;
        func_00858020(var_s0, &sp58, 8, &sp40);
    }
}
