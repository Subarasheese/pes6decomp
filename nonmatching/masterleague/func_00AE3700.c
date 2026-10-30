/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00AE3240(void);
M2C_UNK func_00956A90(s32, M2C_UNK, u16, M2C_UNK);  /* extern */
M2C_UNK func_009737E0(s32, M2C_UNK, s32);           /* extern */
M2C_UNK func_009BE0B0(M2C_UNK);                     /* extern */
M2C_UNK func_00AE21F0(s32, u8);                     /* extern */
M2C_UNK func_00AE57F0(s32);                         /* extern */
M2C_UNK func_00AE5C30(s32);                         /* extern */
M2C_UNK func_00AE6110(s32);                         /* extern */
M2C_UNK func_00AE6710(s32, u8);                     /* extern */

void func_00AE3700(void) {
    s32 temp_a0;
    u32 temp_v0;
    u8 temp_a1;
    u8 temp_v1;

    temp_v0 = func_00AE3240();
    if ((temp_v0 != 0) && (temp_a0 = M2C_FIELD(temp_v0, s32 *, 0x3DBC), temp_a1 = M2C_FIELD(((temp_a0 * 0x314) + temp_v0), u8 *, 0x1290), (temp_a1 != 1))) {
        func_00AE21F0(temp_a0, temp_a1);
        func_009737E0(M2C_FIELD(temp_v0, s32 *, 0xAF4), 2, M2C_FIELD(((M2C_FIELD(temp_v0, s32 *, 0x3DBC) * 0x314) + temp_v0), s32 *, 0xF80));
        func_009737E0(M2C_FIELD(temp_v0, s32 *, 0xAF8), 1, M2C_FIELD(((M2C_FIELD(temp_v0, s32 *, 0x3DBC) * 0x314) + temp_v0), s32 *, 0xF84));
        func_00956A90(M2C_FIELD(temp_v0, s32 *, 0xAEC), 4, M2C_FIELD(((M2C_FIELD(temp_v0, s32 *, 0x3DBC) * 0x314) + temp_v0), u16 *, 0xF9A), 0);
        func_00956A90(M2C_FIELD(temp_v0, s32 *, 0xAF0), 4, M2C_FIELD(((M2C_FIELD(temp_v0, s32 *, 0x3DBC) * 0x314) + temp_v0), u16 *, 0xF9C), 0);
        if (M2C_FIELD((M2C_FIELD(((M2C_FIELD(temp_v0, s32 *, 0x3DBC) * 0x314) + temp_v0), u8 *, 0xF9F) + temp_v0), u8 *, 0x3DCA) != 0) {
            M2C_FIELD(temp_v0, s32 *, 0x59F8) = 0;
            M2C_FIELD(temp_v0, s32 *, 0x59FC) = 0;
            temp_v1 = M2C_FIELD((M2C_FIELD(((M2C_FIELD(temp_v0, s32 *, 0x3DBC) * 0x314) + temp_v0), u8 *, 0xF9F) + temp_v0), u8 *, 0x3DCA);
            if (M2C_FIELD(temp_v0, s32 *, 0x3DC0) >= (s32) temp_v1) {
                M2C_FIELD(temp_v0, s32 *, 0x3DC0) = (s32) (temp_v1 - 1);
            }
            func_00AE6710(M2C_FIELD(temp_v0, s32 *, 0x3DC0), M2C_FIELD(((M2C_FIELD(temp_v0, s32 *, 0x3DBC) * 0x314) + temp_v0), u8 *, 0xF9F));
            func_00AE6110(M2C_FIELD(temp_v0, s32 *, 0x3DC0));
            func_00AE57F0(M2C_FIELD(temp_v0, s32 *, 0x3DC0));
            func_00AE5C30(M2C_FIELD(temp_v0, s32 *, 0x3DC0));
        } else {
            func_009BE0B0(0x314);
        }
    }
}
