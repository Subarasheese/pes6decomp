/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_008D03C0(void *, u8);                  /* extern */
s32 func_008D90A0(s32);                             /* extern */

s32 func_008CDC20(void *arg0, s32 arg1) {
    s32 temp_v1;

    if (arg0 != NULL) {
        if (M2C_FIELD(arg0, u8 *, 6) != 0) {
            if (M2C_FIELD(arg0, u8 *, 2) != 0) {
                temp_v1 = func_008D90A0(arg1) & 0x180;
                switch (temp_v1) {                  /* irregular */
                case 0x80:
                    M2C_FIELD(arg0, u8 *, 9) = (u8) (M2C_FIELD(arg0, u8 *, 9) + M2C_FIELD(arg0, u8 *, 8));
                    M2C_FIELD(arg0, u8 *, 9) = (u8) (M2C_FIELD(arg0, u8 *, 9) - 1);
                    M2C_FIELD(arg0, u8 *, 9) = (u8) ((u8) M2C_FIELD(arg0, u8 *, 9) % (u8) M2C_FIELD(arg0, u8 *, 8));
block_22:
                    func_008D03C0(arg0 + 0x480, M2C_FIELD((M2C_FIELD(arg0, u8 *, 9) + arg0), u8 *, 0xA));
                    func_0026E840(0x8400F803);
                    return 3;
                case 0x100:
                    M2C_FIELD(arg0, u8 *, 9) = (u8) (M2C_FIELD(arg0, u8 *, 9) + 1);
                    M2C_FIELD(arg0, u8 *, 9) = (u8) ((u8) M2C_FIELD(arg0, u8 *, 9) % (u8) M2C_FIELD(arg0, u8 *, 8));
                    goto block_22;
                default:
                    return 0;
                }
            } else {
                return 0;
            }
        } else {
            return 0;
        }
    } else {
        return 0;
    }
}
