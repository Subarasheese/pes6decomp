/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_0030E830(void);
s32 func_003395C0(void *arg0, s32 arg1) {
    s32 temp_s1;
    void *temp_a1;

    if (M2C_FIELD(arg0, u8 *, 4) != 0) {
        temp_s1 = M2C_FIELD(arg0, s32 *, 0x3C);
        M2C_FIELD(((func_0030E830() * 4) + arg0), s32 *, 0x128) = temp_s1;
        M2C_FIELD(arg0, u8 *, 4) = 0U;
    }
    M2C_FIELD(arg0, s32 *, 0x60) = 2;
    temp_a1 = arg0 + ((arg1 & 0xFF) * 8);
    M2C_FIELD(temp_a1, s32 *, 0x68) = (s32) M2C_FIELD(temp_a1, s32 *, 0x64);
    M2C_FIELD(temp_a1, s32 *, 0x64) = (s32) M2C_FIELD(arg0, s32 *, 0x3C);
    return 1;
}
