/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00BCF390(void);
M2C_UNK func_0026E840(M2C_UNK, s8);                 /* extern */
M2C_UNK func_00B90E70(u8);                          /* extern */

void func_00BA68A0(void *arg0) {
    s32 temp_v0;
    s8 temp_a1;

    temp_v0 = func_00BCF390();
    temp_a1 = M2C_FIELD(arg0, s8 *, 0xC);
    if (temp_v0 & 0x1000) {
        M2C_FIELD(arg0, s32 *, 4) = (s32) ((s64) ((s64) temp_a1 << 0x38) >> 0x38);
        func_0026E840(0x84028400, temp_a1);
        M2C_FIELD(arg0, u8 *, 9) = (u8) M2C_FIELD(arg0, u8 *, 8);
        M2C_FIELD(arg0, u8 *, 8) = 3U;
        return;
    }
    if (!(temp_v0 & 0x4000)) {
        if ((temp_v0 & 1) && (((s64) ((s64) temp_a1 << 0x38) >> 0x38) == 1)) {
            M2C_FIELD(arg0, s8 *, 0xC) = 0;
        }
        if ((temp_v0 & 8) && (M2C_FIELD(arg0, s8 *, 0xC) == 0)) {
            M2C_FIELD(arg0, s8 *, 0xC) = 1;
        }
        if (M2C_FIELD(arg0, s8 *, 0xC) != ((s64) ((s64) temp_a1 << 0x38) >> 0x38)) {
            func_0026E840(0x8400F802, temp_a1);
            func_00B90E70((u8) M2C_FIELD(arg0, s8 *, 0xC));
        }
        return;
    }
    M2C_FIELD(arg0, s32 *, 4) = (s32) M2C_FIELD(arg0, s8 *, 0xB);
    func_0026E840(0x84008401, temp_a1);
    M2C_FIELD(arg0, u8 *, 9) = (u8) M2C_FIELD(arg0, u8 *, 8);
    M2C_FIELD(arg0, u8 *, 8) = 3U;
}
