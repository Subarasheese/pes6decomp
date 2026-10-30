/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_002DCA50(void);
M2C_UNK func_0027D4E0(u8);                          /* extern */
s16 *func_008472D0();                               /* extern */
s64 func_00858C40(M2C_UNK);                         /* extern */
extern char D_008B1504[];

void func_00848AA0(void) {
    s32 temp_v1;
    u16 *temp_s0;
    u16 temp_s2;
    u16 var_s2;
    u8 temp_s2_2;
    void *temp_v0;

    temp_v0 = (*func_008472D0() * 2) + ((void *)D_008B1504);
    temp_s2 = M2C_FIELD(temp_v0, u16 *, -2);
    temp_s0 = temp_v0 - 2;
    if (func_002DCA50() == 0) {
        temp_s2_2 = M2C_FIELD(((void *)D_008B1504), u8 *, 0x18);
        temp_v1 = temp_s2_2 & 0xFF;
        var_s2 = M2C_FIELD(((((s64) (func_00858C40(0) << 0x30) >> 0x30) * 2) + ((void *)D_008B1504)), u16 *, -2);
        if ((temp_v1 > 0) && (temp_v1 < 0x17)) {
            func_0027D4E0(M2C_FIELD(((void *)D_008B1504), u8 *, 0x18));
        }
    } else {
        var_s2 = temp_s2 + 1;
    }
    *temp_s0 = var_s2;
    M2C_FIELD(((void *)D_008B1504), s8 *, 0x10) = 0;
}
