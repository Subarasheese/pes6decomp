/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_00591BE4[];
extern char D_00CB52A0[];

s32 func_00C23280(void *arg0, s32 arg1) {
    u8 *p;
    u8 *slot;
    s32 i;

    slot = NULL;
    p = (u8 *)D_00CB52A0;
    for (i = 0; i < 0x16; i++) {
        if (M2C_FIELD(p, s32 *, 0x6BC) == 0) {
            slot = p + 0x6BC;
            break;
        }
        p += 0x40;
    }
    if (slot == NULL) {
        return 0;
    }
    M2C_FIELD(slot, u8 *, 0x10) = M2C_FIELD(arg0, u8 *, 0);
    M2C_FIELD(slot, s32 *, 0) = 0xA;
    M2C_FIELD(slot, s32 *, 8) = (*(u8 *)D_00591BE4) * 3;
    M2C_FIELD(slot, s16 *, 0xC) = (s16)(s32)M2C_FIELD(arg0, f32 *, 0xE0);
    M2C_FIELD(slot, s16 *, 0xE) = (s16)(s32)M2C_FIELD(arg0, f32 *, 0xE8);
    M2C_FIELD(slot, s32 *, 0x28) = arg1 & 0xFF;
    return 1;
}
