/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00A68E40(void *);                          /* extern */
s32 func_00A716B0(void *);                          /* extern */
s32 func_00AB38D0(s32);                             /* extern */

void func_00A009E0(void *arg0) {
    s32 temp_a1;
    s32 temp_v0;

    temp_a1 = M2C_FIELD(arg0, s32 *, 0x238);
    if (!(temp_a1 & 0x200)) {
        M2C_FIELD(arg0, s32 *, 0x238) = (s32) (temp_a1 | 0x200);
        temp_v0 = func_00AB38D0(temp_a1);
        switch (temp_v0) {                          /* irregular */
        case 37:
        case 36:
        case 40:
        case 38:
        case 39:
        case 34:
        case 10:
        case 9:
            break;
        case 8:
            if (func_00A68E40(arg0) != 0) {
                M2C_FIELD(arg0, u8 *, 0x4D) = (u8) (M2C_FIELD(arg0, u8 *, 0x4D) + 8);
            }
            break;
        case 4:
            if (M2C_FIELD(arg0, s32 *, 0xB0) & 0x8000) {
                M2C_FIELD(arg0, u8 *, 0x4D) = (u8) (M2C_FIELD(arg0, u8 *, 0x4D) + 0x10);
            }
            break;
        case 6:
        case 5:
            if (M2C_FIELD(arg0, u8 *, 0x4C) == 8) {
                if (func_00A716B0(arg0) != 0) {
                    M2C_FIELD(arg0, u8 *, 0x4D) = (u8) (M2C_FIELD(arg0, u8 *, 0x4D) + 8);
                }
            } else {
                M2C_FIELD(arg0, u8 *, 0x4D) = 0U;
            }
            break;
        }
        if ((s32) M2C_FIELD(arg0, u8 *, 0x4D) >= 0x81) {
            M2C_FIELD(arg0, u8 *, 0x4D) = 0x80U;
        }
    }
}
