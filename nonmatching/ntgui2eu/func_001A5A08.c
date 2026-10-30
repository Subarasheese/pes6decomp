/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_001A55A0(void *);
s32 func_001A5A08(u32 arg0) {
    s32 temp_s0;

    temp_s0 = (arg0 >> 0xA) << 6;
    if ((s32) arg0 >= 0) {
        if ((arg0 & 0x3FF) == M2C_FIELD(temp_s0, s32 *, 8)) {
            if (M2C_FIELD((void *)0x5CBB98, s32 *, 0x1C) != arg0) {
                if (M2C_FIELD(temp_s0, s32 *, 0xC) & 2) {
                    func_001A55A0((void *) temp_s0);
                }
                M2C_FIELD(temp_s0, s32 *, 8) = 0;
                M2C_FIELD(temp_s0, s32 *, 0xC) = 0;
                M2C_FIELD(temp_s0, s32 *, 0) = (s32) M2C_FIELD((void *)0x5CBB98, s32 *, 0x14);
                M2C_FIELD((void *)0x5CBB98, s32 *, 0x14) = temp_s0;
                M2C_FIELD((void *)0x5CBB98, s32 *, 0x10) = (s32) (M2C_FIELD((void *)0x5CBB98, s32 *, 0x10) - 1);
                return 0;
            }
            return 0x80000010;
        }
        goto block_4;
    }
block_4:
    return 0x80008002;
}
