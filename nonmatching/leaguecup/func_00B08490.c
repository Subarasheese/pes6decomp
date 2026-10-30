/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00226710(void);
extern u8 func_0022BC60(s32);
extern u32 func_00B0A9F0(void);
s32 func_002249A0(u8, u8);                          /* extern */
s32 func_002290D0(u8);                              /* extern */
M2C_UNK func_0095CF80(s32, u16, u8, u16 *, u16 *);  /* extern */
s32 func_009ADF70();                                /* extern */
M2C_UNK func_009BE670(s32);                         /* extern */
M2C_UNK func_009BE6D0(u16, u16, M2C_UNK);           /* extern */
M2C_UNK func_009BECB0(u16, s32);                    /* extern */

void func_00B08490(void) {
    u16 sp3C;
    u16 sp3E;
    s32 temp_s1;
    u32 temp_v0;

    temp_v0 = func_00B0A9F0();
    if (temp_v0 != 0) {
        func_009BECB0(M2C_FIELD(((M2C_FIELD(temp_v0, u8 *, 0x3A4) * 0x14) + temp_v0), u16 *, 0x3E4), func_002290D0(M2C_FIELD(temp_v0, u8 *, 0x3B1)) & 0xFFFF);
        temp_s1 = func_009ADF70();
        if ((func_00226710() & 0xFF) != 0x2D) {
            if ((func_00226710() & 0xFF) != 0x39) {
                func_0095CF80(temp_s1, M2C_FIELD(((M2C_FIELD(temp_v0, u8 *, 0x3A4) * 0x14) + temp_v0), u16 *, 0x3E4), M2C_FIELD(temp_v0, u8 *, 0x3B1), &sp3E, &sp3C);
            } else {
                goto block_5;
            }
        } else {
block_5:
            func_0095CF80(temp_s1, M2C_FIELD(((M2C_FIELD(temp_v0, u8 *, 0x3A4) * 0x14) + temp_v0), u16 *, 0x3E4), func_0022BC60((s32) M2C_FIELD(temp_v0, u8 *, 0x3B1)), &sp3E, &sp3C);
        }
        func_009BE6D0(sp3E, sp3C, 0);
        func_009BE670((func_002249A0(M2C_FIELD(temp_v0, u8 *, 0x3B1), M2C_FIELD(temp_v0, u8 *, 0x3A4)) & 0xFF) + 1);
    }
}
