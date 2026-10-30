/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00AE7320(void);
extern void func_00AE4F30(void);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_00AE4F40(u8);                          /* extern */
M2C_UNK func_00AE51E0(u8);                          /* extern */
M2C_UNK func_00AE5790(s32, u8);                     /* extern */
s32 func_00AE72D0(u8);                              /* extern */

s32 func_00AE62A0(void) {
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    u32 temp_v0;
    u8 temp_a0;
    u8 temp_s0;

    temp_v0 = func_00AE7320();
    if (temp_v0 != 0) {
        temp_a0 = M2C_FIELD(temp_v0, u8 *, 0x58D);
        if ((s32) temp_a0 >= 2) {
            temp_v1 = M2C_FIELD(temp_v0, s32 *, 0x590);
            if (temp_v1 != 2) {
                temp_s0 = M2C_FIELD(temp_v0, u8 *, 0x58A);
                switch (temp_v1) {                  /* irregular */
                case 1:
                    temp_v1_2 = temp_a0 - 1;
                    if ((temp_s0 & 0xFF) < temp_v1_2) {
                        M2C_FIELD(temp_v0, u8 *, 0x58A) = (u8) (temp_s0 + 1);
                    } else {
                        M2C_FIELD(temp_v0, u8 *, 0x58A) = (u8) temp_v1_2;
                    }
                    func_00AE4F40(M2C_FIELD(temp_v0, u8 *, 0x589));
                    func_00AE4F30();
                    break;
                case 0:
                    temp_v1_3 = temp_a0 - 1;
                    if ((temp_s0 & 0xFF) < temp_v1_3) {
                        M2C_FIELD(temp_v0, u8 *, 0x58A) = (u8) (temp_s0 + 1);
                    } else {
                        M2C_FIELD(temp_v0, u8 *, 0x58A) = (u8) temp_v1_3;
                    }
                    break;
                }
                if ((temp_s0 & 0xFF) != M2C_FIELD(temp_v0, u8 *, 0x58A)) {
                    func_0026E840(0x8400F803);
                }
                func_00AE51E0(M2C_FIELD(temp_v0, u8 *, 0x58A));
                func_00AE5790(func_00AE72D0(M2C_FIELD(temp_v0, u8 *, 0x588)) & 0xFF, M2C_FIELD(temp_v0, u8 *, 0x58A));
            }
        }
    }
    return 0;
}
