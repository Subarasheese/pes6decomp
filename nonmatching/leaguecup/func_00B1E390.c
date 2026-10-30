/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B1E100(void);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
u8 func_00B1E050(u8);                               /* extern */
M2C_UNK func_00B1ED10(s32, u8, u8, u8, u8);         /* extern */
M2C_UNK func_00B1EF80(u8);                          /* extern */

s32 func_00B1E390(void) {
    s32 temp_a0;
    s32 temp_s1;
    u32 temp_v0;
    u8 temp_a0_2;
    u8 temp_v0_2;
    u8 temp_v1;
    void *temp_v1_2;

    temp_v0 = func_00B1E100();
    if (temp_v0 != 0) {
        if (M2C_FIELD(temp_v0, s16 *, 0x324) == 0) {
            temp_a0 = M2C_FIELD(temp_v0, s32 *, 0x32C);
            switch (temp_a0) {                      /* irregular */
            case 2:
                temp_a0_2 = M2C_FIELD(temp_v0, u8 *, 0x31A);
                M2C_FIELD((M2C_FIELD(temp_v0, u8 *, 0x31B) + temp_v0), u8 *, 0x2FA) = temp_a0_2;
                temp_v1 = M2C_FIELD(temp_v0, u8 *, 0x31D);
                if (temp_v1 != 0xFF) {
                    M2C_FIELD((temp_v1 + temp_v0), u8 *, 0x2FA) = (u8) M2C_FIELD(temp_v0, u8 *, 0x31C);
                }
                M2C_FIELD(temp_v0, s32 *, 0x32C) = 1;
                func_00B1EF80(temp_a0_2);
                func_00B1ED10(M2C_FIELD(temp_v0, s32 *, 0x32C), 0U, 0U, 0xFFU, 0U);
                func_0026E840(0x84028400);
                break;
            case 1:
                M2C_FIELD(temp_v0, s32 *, 0x32C) = 2;
                temp_v0_2 = M2C_FIELD(temp_v0, u8 *, 0x31E) + M2C_FIELD(temp_v0, u8 *, 0x328);
                temp_s1 = temp_v0_2 & 0xFF;
                M2C_FIELD(temp_v0, u8 *, 0x31B) = temp_v0_2;
                temp_v1_2 = temp_s1 + temp_v0;
                M2C_FIELD(temp_v0, u8 *, 0x31A) = (u8) M2C_FIELD(temp_v1_2, u8 *, 0x2FA);
                M2C_FIELD(temp_v0, u8 *, 0x31C) = (u8) M2C_FIELD(temp_v1_2, u8 *, 0x2FA);
                M2C_FIELD(temp_v0, u8 *, 0x31D) = func_00B1E050(M2C_FIELD(temp_v0, u8 *, 0x31A));
                if (M2C_FIELD(temp_v0, u8 *, 0x31D) == (temp_s1 & 0xFF)) {
                    M2C_FIELD(temp_v0, u8 *, 0x31D) = 0xFFU;
                }
                func_00B1ED10(M2C_FIELD(temp_v0, s32 *, 0x32C), M2C_FIELD(temp_v0, u8 *, 0x31B), M2C_FIELD(temp_v0, u8 *, 0x31A), M2C_FIELD(temp_v0, u8 *, 0x31D), M2C_FIELD(temp_v0, u8 *, 0x31C));
                func_0026E840(0x84028400);
                break;
            case 0:
                M2C_FIELD(temp_v0, s32 *, 0x32C) = 3;
                func_0026E840(0x84028400);
                break;
            }
        }
    }
    return 0;
}
