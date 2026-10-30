/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001E53D0(s32);
extern void func_00260C20(void);
extern int func_001CDAA0(void);
s32 func_002601A0(s8);                              /* extern */
M2C_UNK func_00BA7060(s8);                          /* extern */

s32 func_00BA6F80(void *arg0) {
    s32 temp_v0;
    s32 var_s0;
    s8 temp_a1;

    temp_a1 = M2C_FIELD(arg0, s8 *, 0x12);
    var_s0 = 0;
    switch (temp_a1) {                              /* irregular */
    case 2:
        temp_v0 = M2C_FIELD(arg0, s32 *, 0x28) + 1;
        M2C_FIELD(arg0, s32 *, 0x28) = temp_v0;
        if (temp_v0 >= 0x1E) {
            M2C_FIELD(arg0, s8 *, 0x12) = 3;
        }
        break;
    case 0:
        M2C_FIELD(arg0, s32 *, 0x28) = 0;
        func_00BA7060(temp_a1);
        M2C_FIELD(arg0, s8 *, 0x12) = 1;
        break;
    case 1:
        if (func_002601A0(temp_a1) != 0) {
            M2C_FIELD(arg0, s8 *, 0x12) = 2;
        }
        break;
    case 3:
        func_00260C20();
        if (func_001CDAA0() == 1) {
            func_001E53D0(1);
        }
        M2C_FIELD(arg0, s8 *, 0x12) = 0;
        var_s0 = 1;
        break;
    }
    return var_s0;
}
