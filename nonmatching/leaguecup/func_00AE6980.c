/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00AE7320(void);
extern void func_00AE50E0(s32);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
u8 func_00949130(u8, M2C_UNK, u8, u8);              /* extern */
M2C_UNK func_00AE4F40(u8);                          /* extern */
M2C_UNK func_00AE5790(s32, u8);                     /* extern */
s32 func_00AE72D0(u8);                              /* extern */

s32 func_00AE6980(void) {
    s32 temp_v1;
    u32 temp_v0;
    u8 temp_a3;
    u8 temp_s1;
    u8 temp_s1_2;
    u8 var_a2;
    u8 var_a2_2;
    u8 var_a3;

    temp_v0 = func_00AE7320();
    if (temp_v0 != 0) {
        temp_v1 = M2C_FIELD(temp_v0, s32 *, 0x590);
        switch (temp_v1) {                          /* irregular */
        case 1:
            var_a3 = M2C_FIELD(temp_v0, u8 *, 0x58B);
            temp_s1 = M2C_FIELD(temp_v0, u8 *, 0x589);
            if ((s32) var_a3 < 0xB) {
                if (((s32) var_a3 % 2) != 1) {
                    var_a2 = (var_a3 - 1) & 0xFF;
                } else {
                    var_a2 = var_a3 & 0xFF;
                }
            } else {
                var_a2 = 0xA;
            }
            if (((s32) var_a3 % 2) != 1) {
                var_a3 = (var_a3 - 1) & 0xFF;
            }
            M2C_FIELD(temp_v0, u8 *, 0x589) = func_00949130(temp_s1, 0, var_a2, var_a3);
            func_00AE4F40(M2C_FIELD(temp_v0, u8 *, 0x589));
            if ((temp_s1 & 0xFF) != M2C_FIELD(temp_v0, u8 *, 0x589)) {
                func_0026E840(0x8400F802);
            }
            break;
        case 0:
            temp_a3 = M2C_FIELD(temp_v0, u8 *, 0x58B);
            temp_s1_2 = M2C_FIELD(temp_v0, u8 *, 0x588);
            if ((s32) temp_a3 < 0xA) {
                var_a2_2 = temp_a3;
            } else {
                var_a2_2 = 0xA;
            }
            M2C_FIELD(temp_v0, u8 *, 0x588) = func_00949130(temp_s1_2, 0, var_a2_2, temp_a3);
            func_00AE50E0((s32) M2C_FIELD(temp_v0, u8 *, 0x588));
            func_00AE5790(func_00AE72D0(M2C_FIELD(temp_v0, u8 *, 0x588)) & 0xFF, M2C_FIELD(temp_v0, u8 *, 0x58A));
            if ((temp_s1_2 & 0xFF) != M2C_FIELD(temp_v0, u8 *, 0x588)) {
                func_0026E840(0x8400F802);
            }
            break;
        }
    }
    return 0;
}
