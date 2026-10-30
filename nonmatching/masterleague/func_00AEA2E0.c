/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00AE3240(void);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_009BE0B0();                            /* extern */
M2C_UNK func_00AE18D0(u8);                          /* extern */
M2C_UNK func_00AE57F0(s32);                         /* extern */
M2C_UNK func_00AE5C30(s32);                         /* extern */
M2C_UNK func_00AE6110(s32);                         /* extern */
M2C_UNK func_00AE6710(s32, u8);                     /* extern */
M2C_UNK func_00AE6B90();                            /* extern */

void func_00AEA2E0(s32 arg0) {
    s32 temp_v1_2;
    u32 temp_v0;
    u8 temp_v1;

    temp_v0 = func_00AE3240();
    if ((temp_v0 != 0) && (M2C_FIELD(temp_v0, s32 *, 0x59F4) == 1) && (M2C_FIELD(temp_v0, s32 *, 0x59F0) == 2) && (M2C_FIELD(temp_v0, u8 *, 0x3DB5) == 0)) {
        temp_v1 = M2C_FIELD((M2C_FIELD(((M2C_FIELD(temp_v0, s32 *, 0x3DBC) * 0x314) + temp_v0), u8 *, 0xF9F) + temp_v0), u8 *, 0x3DCA);
        if ((temp_v1 != 0) && ((s32) temp_v1 >= 2)) {
            temp_v1_2 = M2C_FIELD(temp_v0, s32 *, 0x3DC0) + arg0;
            M2C_FIELD(temp_v0, s32 *, 0x3DC0) = temp_v1_2;
            if (temp_v1_2 < 0) {
                M2C_FIELD(temp_v0, s32 *, 0x3DC0) = (s32) (M2C_FIELD((M2C_FIELD(((M2C_FIELD(temp_v0, s32 *, 0x3DBC) * 0x314) + temp_v0), u8 *, 0xF9F) + temp_v0), u8 *, 0x3DCA) - 1);
            } else if (temp_v1_2 >= (s32) M2C_FIELD((M2C_FIELD(((M2C_FIELD(temp_v0, s32 *, 0x3DBC) * 0x314) + temp_v0), u8 *, 0xF9F) + temp_v0), u8 *, 0x3DCA)) {
                M2C_FIELD(temp_v0, s32 *, 0x3DC0) = 0;
            }
            M2C_FIELD(temp_v0, s32 *, 0x59F8) = 0;
            M2C_FIELD(temp_v0, s32 *, 0x59FC) = 0;
            func_00AE6710(M2C_FIELD(temp_v0, s32 *, 0x3DC0), M2C_FIELD(((M2C_FIELD(temp_v0, s32 *, 0x3DBC) * 0x314) + temp_v0), u8 *, 0xF9F));
            func_00AE6110(M2C_FIELD(temp_v0, s32 *, 0x3DC0));
            func_00AE57F0(M2C_FIELD(temp_v0, s32 *, 0x3DC0));
            func_00AE5C30(M2C_FIELD(temp_v0, s32 *, 0x3DC0));
            func_009BE0B0();
            func_00AE18D0((u8) M2C_FIELD(temp_v0, s32 *, 0x3DC0));
            M2C_FIELD(temp_v0, u8 *, 0x3DB5) = 7U;
            func_0026E840(0x8400F803);
            func_00AE6B90();
        }
    }
}
