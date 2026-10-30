/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_0011835C(void *, s32);
extern u32 func_001144A0(void *, void *);
s32 func_001183B0(void *, void *);                  /* extern */
M2C_UNK func_001AD620(M2C_UNK *, M2C_UNK, M2C_UNK *); /* extern */
extern char D_005F8CE8[];
extern char D_005F8D08[];

void func_00118298(void *arg0, void *arg1) {
    s32 temp_a3;
    s32 temp_v0_2;
    u32 temp_v0;
    u32 temp_v0_3;

    if (arg0 == NULL) {
        func_001AD620(((void *)D_005F8CE8), 0x4E3, ((void *)D_005F8D08));
    }
    temp_v0 = func_001144A0(arg0, arg1);
    if (temp_v0 != -1U) {
        M2C_FIELD(arg0, u32 *, 0x48) = temp_v0;
        return;
    }
    temp_v0_2 = func_001183B0(arg0, arg1);
    temp_a3 = (s32) ((temp_v0_2 < 0) ? (temp_v0_2 + 0xF) : temp_v0_2) >> 4;
    if (temp_v0_2 != temp_v0) {
        M2C_FIELD(arg0, s32 *, 0xF4) = (s32) (temp_v0_2 - (temp_a3 * 0x10));
        M2C_FIELD(arg0, s32 *, 0xF8) = (s32) (temp_a3 + M2C_FIELD(arg0, s32 *, 0xF0));
        temp_v0_3 = func_0011835C(arg0, temp_v0_2);
        if (temp_v0_3 != temp_v0) {
            M2C_FIELD(arg0, u32 *, 0x48) = temp_v0_3;
        }
    }
}
