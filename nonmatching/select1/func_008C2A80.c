/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0023B260(s32, void *, void *);
extern s32 func_0023B360(s32);
M2C_UNK func_0023B090(M2C_UNK, M2C_UNK, s32, s32, s32, M2C_UNK); /* extern */
M2C_UNK func_0023B1C0(M2C_UNK, M2C_UNK, f32);       /* extern */
extern char D_0053C300[];

void func_008C2A80(void *arg0) {
    f32 sp38;
    f32 sp3C;
    s16 temp_a0;
    s32 temp_s0;
    s8 temp_a4;
    void *temp_a1;

    temp_a4 = M2C_FIELD(arg0, s8 *, 0);
    temp_s0 = (temp_a4 + (M2C_FIELD(arg0, s8 *, 8) * 0xD)) * 0x1A8;
    if ((M2C_FIELD((temp_s0 + arg0), s8 *, 0x1D) == 1) && (temp_a4 != 0)) {
        func_0023B090(0, 1, M2C_FIELD(M2C_FIELD(arg0, void **, 0x2CC8), s32 *, 0xC), temp_a4 + 2, M2C_FIELD(((temp_a4 * 4) + M2C_FIELD(((void *)D_0053C300), s32 *, 0x14)), s32 *, 0x34), 0xC0C00000);
    }
    func_0023B260(1, &sp3C, &sp38);
    if (!(sp3C <= 215.0f)) {
        func_0023B1C0(1, 0x43610000, sp38);
    }
    temp_a1 = temp_s0 + arg0;
    if (M2C_FIELD(temp_a1, s8 *, 0x1C) == 0) {
        temp_a0 = M2C_FIELD(temp_a1, s16 *, 0xE);
        if (M2C_FIELD(temp_a1, s16 *, 0x12) != temp_a0) {
            if (M2C_FIELD(temp_a1, s16 *, 0x16) == temp_a0) {
                func_0023B360(1);
            }
        } else {
            func_0023B360(0);
        }
    }
    if (M2C_FIELD((temp_s0 + arg0), s32 *, 0x18) == 1) {
        func_0023B360(0);
        func_0023B360(1);
    }
    if (M2C_FIELD(arg0, s8 *, 0) == 0) {
        func_0023B360(0);
        func_0023B360(1);
    }
}
