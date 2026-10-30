/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009B30B0(u16, u16);                        /* extern */
extern void *Pes6Ball_Current;
extern char D_005926E4[];

s32 func_00AE0200(void *arg0, u16 arg1) {
    s32 temp_v1;

    if (M2C_FIELD(arg0, s32 *, 0x1C) >= 0x1100) {
        if (M2C_FIELD((((*(u8 *)D_005926E4) * 4) + Pes6Ball_Current), s32 *, 0xFC) >= 0x1001) {
            temp_v1 = func_009B30B0(arg1, M2C_FIELD(Pes6Ball_Current, u16 *, 0x58)) & 0xFFFF;
            if ((temp_v1 >= 0x14) && (temp_v1 < 0x61)) {
                goto block_14;
            }
            if (temp_v1 >= 0xC) {
                if ((func_009B30B0(M2C_FIELD(arg0, u16 *, 0x10C), arg1) & 0xFFFF) >= 8) {
block_14:
                    return 1;
                }
                goto block_12;
            }
block_12:
            return 0;
        }
        return 0;
    }
    return 0;
}
