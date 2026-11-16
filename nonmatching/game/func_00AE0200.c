/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

s32 func_009B30B0(s32, s32);                        /* extern */
extern void *Pes6Ball_Current;
extern char D_005926E4[];

s32 func_00AE0200(void *arg0, s32 arg1) {
    s32 temp_v1;

    if (M2C_FIELD(arg0, s32 *, 0x1C) < 0x1100) {
        return 0;
    }
    if (M2C_FIELD((((*(u8 *)D_005926E4) * 4) + Pes6Ball_Current), s32 *, 0xFC) < 0x1001) {
        return 0;
    }
    temp_v1 = func_009B30B0(arg1, M2C_FIELD(Pes6Ball_Current, u16 *, 0x58)) & 0xFFFF;
    if ((temp_v1 >= 0x14) && (temp_v1 < 0x61)) {
        return 1;
    }
    if (temp_v1 < 0xC) {
        return 0;
    }
    if ((func_009B30B0(M2C_FIELD(arg0, u16 *, 0x10C), arg1) & 0xFFFF) >= 8) {
        return 1;
    }
    return 0;
}
