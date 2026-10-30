/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0017F9A0(s32, M2C_UNK *, s32 *, M2C_UNK, s64 *); /* extern */
void *func_001FC920(s32, s32, s32, s32, s64);       /* extern */
extern char D_003A89D0[];
extern char D_003A89D8[];
extern char D_003A89DC[];
extern char D_003A89E0[];
extern char D_00533038[];
extern char D_0053303C[];
extern M2C_UNK func_001FCDE0;

s32 func_001FCBE0(s32 arg0) {
    s32 sp4C;
    s64 sp50;
    s32 sp58;
    s32 sp5C;
    s32 sp60;
    u8 temp_a0;
    void *temp_s1;
    void *temp_v0;

    sp4C = arg0;
    sp50 = (*(s64 *)D_003A89D0);
    sp58 = (*(s32 *)D_003A89D8);
    sp5C = (*(s32 *)D_003A89DC);
    sp60 = (*(s32 *)D_003A89E0);
    if (((*(s32 *)D_00533038) != 0) && (arg0 < (*(s32 *)D_0053303C))) {
        temp_s1 = (*(s32 *)D_00533038) + (arg0 * 8);
        temp_v0 = func_001FC920(M2C_FIELD(temp_s1, s32 *, 4), (*(s32 *)D_003A89E0), (*(s32 *)D_003A89DC), (*(s32 *)D_003A89D8), (*(s64 *)D_003A89D0));
        temp_a0 = M2C_FIELD(temp_v0, u8 *, 0xC);
        switch (temp_a0) {                          /* irregular */
        case 1:
            return 0;
        case 3:
            return 0;
        default:
            if (M2C_FIELD(temp_v0, s32 *, 8) != sp4C) {
                sp58 = M2C_FIELD(temp_v0, s32 *, 0);
                func_0017F9A0(M2C_FIELD(temp_s1, s32 *, 0), &func_001FCDE0, &sp4C, 4, &sp50);
                M2C_FIELD(temp_v0, u8 *, 0xC) = 1U;
                return 1;
            }
            M2C_FIELD(temp_v0, u8 *, 0xC) = 2U;
            return 1;
        }
    } else {
        return 0;
    }
}
