/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_005BFFA8[];
extern char D_005BFFAC[];

void func_001692A8(void *arg0) {
    void *temp_a1;
    void *temp_a3;

    temp_a1 = arg0 + ((M2C_FIELD(arg0, s32 *, 0x4EC) * 0xA0) + 0x630);
    temp_a3 = temp_a1 + 0x10;
    M2C_FIELD(temp_a3, s16 *, 0x10) = (s16) (((0x800 - ((s32) (*(s32 *)D_005BFFA8) >> 1)) * 0x10) - M2C_FIELD(arg0, u16 *, 0x828));
    M2C_FIELD(temp_a3, s16 *, 0x14) = (s16) (((0x800 - ((s32) (*(s32 *)D_005BFFAC) >> 1)) * 0x10) - M2C_FIELD(arg0, u16 *, 0x82C));
    M2C_FIELD(temp_a1, s64 *, 0x70) = (s64) M2C_FIELD(temp_a3, s16 *, 0x10);
}
