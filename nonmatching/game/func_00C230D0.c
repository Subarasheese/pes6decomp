/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

extern u8 D_00591BE4[];
extern u8 D_00CB52A0[];

s32 func_00C230D0(void *arg0) {
    u8 *p;
    u8 *e;
    s32 i;
    u8 temp_a1;
    s32 found;

    temp_a1 = M2C_FIELD(arg0, u8 *, 0);
    found = 0;
    p = D_00CB52A0;
    for (i = 0; i < 0x16; i++, p += 0x40) {
        if (p[0x6CC] == temp_a1 && M2C_FIELD(p, s32 *, 0x6BC) == 0xC) {
            found = 1;
            break;
        }
    }
    if (found != 0) {
        return 0;
    }
    e = NULL;
    p = D_00CB52A0;
    for (i = 0; i < 0x16; i++, p += 0x40) {
        if (M2C_FIELD(p, s32 *, 0x6BC) == 0) {
            e = D_00CB52A0 + (i << 6) + 0x6BC;
            break;
        }
    }
    if (e == NULL) {
        return 0;
    }
    M2C_FIELD(e, u8 *, 0x10) = temp_a1;
    M2C_FIELD(e, s32 *, 0) = 0xC;
    if ((s32) M2C_FIELD(arg0, u8 *, 0x10) >= 0x1F) {
        M2C_FIELD(e, s32 *, 8) = D_00591BE4[0] * 3;
    } else {
        M2C_FIELD(e, s32 *, 8) = D_00591BE4[0] * 2;
    }
    M2C_FIELD(e, s16 *, 0xC) = (s16) (s32) M2C_FIELD(arg0, f32 *, 0xE0);
    M2C_FIELD(e, s16 *, 0xE) = (s16) (s32) M2C_FIELD(arg0, f32 *, 0xE8);
    return 1;
}
