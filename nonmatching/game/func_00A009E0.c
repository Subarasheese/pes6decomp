/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

s32 func_00A68E40(void *);
s32 func_00A716B0(void *);
s32 func_00AB38D0(void *);

void func_00A009E0(void *arg0) {
    s32 temp_a1;
    s32 temp_v0;

    temp_a1 = M2C_FIELD(arg0, s32 *, 0x238);
    if (!(temp_a1 & 0x200)) {
        M2C_FIELD(arg0, s32 *, 0x238) = (s32) (temp_a1 | 0x200);
        temp_v0 = func_00AB38D0(arg0);
        if (temp_v0 == 6 || temp_v0 == 5) {
            if (M2C_FIELD(arg0, u8 *, 0x4C) == 8) {
                if (func_00A716B0(arg0) != 0) {
                    M2C_FIELD(arg0, u8 *, 0x4D) = (u8) (M2C_FIELD(arg0, u8 *, 0x4D) + 8);
                }
            } else {
                M2C_FIELD(arg0, u8 *, 0x4D) = 0U;
            }
        } else if (temp_v0 == 37 || temp_v0 == 36 || temp_v0 == 40 || temp_v0 == 38 || temp_v0 == 39 || temp_v0 == 34 || temp_v0 == 10 || temp_v0 == 9) {
        } else if (temp_v0 == 8) {
            if (func_00A68E40(arg0) != 0) {
                M2C_FIELD(arg0, u8 *, 0x4D) = (u8) (M2C_FIELD(arg0, u8 *, 0x4D) + 8);
            }
        } else if (temp_v0 == 4) {
            if (M2C_FIELD(arg0, s32 *, 0xB0) & 0x8000) {
                M2C_FIELD(arg0, u8 *, 0x4D) = (u8) (M2C_FIELD(arg0, u8 *, 0x4D) + 0x10);
            }
        }
        if ((s32) M2C_FIELD(arg0, u8 *, 0x4D) >= 0x81) {
            M2C_FIELD(arg0, u8 *, 0x4D) = 0x80U;
        }
    }
}
