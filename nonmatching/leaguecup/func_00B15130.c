/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00239BE0(u8);
extern s32 func_002397F0(s32, s32);
extern s32 func_0022C140(s32);
extern void * func_0022C1E0(void);
M2C_UNK func_0022A9A0();                            /* extern */
s32 func_00234090();                                /* extern */
extern char D_00591C09[];

s32 func_00B15130(s32 arg0) {
    s32 temp_s0;
    s32 temp_s2;
    void *temp_v0;

    temp_v0 = func_0022C1E0();
    temp_s2 = func_00239BE0(M2C_FIELD(func_0022C140((s32) M2C_FIELD(temp_v0, u8 *, 1)), u8 *, 9)) & 0xFF;
    func_0022A9A0();
    temp_s0 = arg0 & 0xFF;
    switch (temp_s0) {                              /* irregular */
    case 0:
        if (((*(u8 *)D_00591C09) == 1) && ((func_00234090() & 0xFF) == 2)) {
            return 1;
        }
        if ((temp_s0 == 1) && ((*(u8 *)D_00591C09) == 1) && (func_002397F0((s32) M2C_FIELD(temp_v0, u8 *, 1), temp_s2) != 0)) {
            return 1;
        }
    default:
        return 0;
    }
}
