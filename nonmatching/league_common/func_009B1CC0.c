/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_009A8D80(void);
extern s32 func_001F08B0(s32);
M2C_UNK func_00956A90(s32, M2C_UNK, u16, M2C_UNK);  /* extern */
M2C_UNK func_00957080(s32, M2C_UNK, u16, M2C_UNK);  /* extern */
s32 func_0095C4A0(u16);                             /* extern */
M2C_UNK func_00971CE0(s32, M2C_UNK);                /* extern */
M2C_UNK func_009737C0(s32, M2C_UNK);                /* extern */
M2C_UNK func_009737E0(s32, M2C_UNK, s32);           /* extern */
M2C_UNK func_009A86D0(u8, u8, u8);                  /* extern */
s32 func_009A8720(u8, u8);                          /* extern */
M2C_UNK func_009A88F0(s32, u16 *, u8 *, u8 *);      /* extern */
M2C_UNK func_009AB890(s32, u8, s32, s32, s32, s32, s32, M2C_UNK, s64, s64, s64, s64); /* extern */
s32 func_00B011C0();                                /* extern */
s32 func_00B01400(u8);                              /* extern */

void func_009B1CC0(s32 arg0) {
    u16 sp6C;
    u8 sp6E;
    u8 sp6F;
    s32 temp_s2;
    u32 temp_v0;
    u8 temp_a0;
    void *temp_s0;
    void *temp_v1;

    temp_v0 = func_009A8D80();
    if (temp_v0 != 0) {
        temp_v1 = temp_v0 + (M2C_FIELD(temp_v0, u8 *, 0xC9C) * 0xDC);
        temp_s0 = temp_v1 + 0x773;
        if (temp_s0 != NULL) {
            func_009A88F0(arg0, &sp6C, &sp6E, &sp6F);
            temp_s2 = M2C_FIELD(temp_v1, u8 *, 0x773) == 1;
            func_00956A90(M2C_FIELD(temp_v0, s32 *, 0x14), 4, sp6C, 0);
            func_00957080(M2C_FIELD(temp_v0, s32 *, 0x18), 4, sp6C, 0);
            if (func_00B011C0() != 1) {
                func_009737C0(M2C_FIELD(temp_v0, s32 *, 0x1C), 0);
            } else {
                func_009737E0(M2C_FIELD(temp_v0, s32 *, 0x1C), 2, ((func_00B01400(sp6E) & 0xFF) + 1) & 0xFF);
            }
            if ((s32) M2C_FIELD(temp_s0, u8 *, 2) >= 2) {
                func_00971CE0(M2C_FIELD(temp_v0, s32 *, 0xCA8), 1);
            } else {
                func_00971CE0(M2C_FIELD(temp_v0, s32 *, 0xCA8), 0);
            }
            func_009737E0(M2C_FIELD(temp_v0, s32 *, 0x2C), 0, func_001F08B0(func_009A8720(M2C_FIELD(temp_v1, u8 *, 0x773), M2C_FIELD(temp_s0, u8 *, 1))));
            func_009737E0(M2C_FIELD(temp_v0, s32 *, 0x30), 3, func_0095C4A0(sp6C));
            func_009AB890(temp_s2, sp6F, M2C_FIELD(temp_v0, s32 *, 0x34), M2C_FIELD(temp_v0, s32 *, 0x38), M2C_FIELD(temp_v0, s32 *, 0x3C), M2C_FIELD(temp_v0, s32 *, 0x40), M2C_FIELD(temp_v0, s32 *, 0x44), 4, 5, 7, 9, 0xB);
            temp_a0 = M2C_FIELD(temp_v1, u8 *, 0x773);
            if (temp_a0 != 1) {
                func_009A86D0(temp_a0, M2C_FIELD(temp_s0, u8 *, 1), sp6F);
            }
        }
    }
}
