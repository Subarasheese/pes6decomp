/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00190608(void *);                          /* extern */
extern void *D_011FD1CC;

void func_001906C0(s32 arg0) {
    void *temp_a0;
    void *temp_v0;
    void *temp_v1;

    if ((func_00190608(D_011FD1CC) > 0) && (arg0 != 0)) {
        temp_v1 = M2C_FIELD(D_011FD1CC, void **, 4);
        M2C_FIELD(temp_v1, s32 *, 0) = 0x50000000;
        M2C_FIELD(temp_v1, s32 *, 4) = (s32) (arg0 & 0x0FFFFFFF);
        M2C_FIELD(temp_v1, s32 *, 0xC) = 0;
        temp_a0 = M2C_FIELD(D_011FD1CC, void **, 4);
        M2C_FIELD(temp_v1, s32 *, 8) = 0;
        temp_v0 = temp_a0 + 0x10;
        M2C_FIELD(temp_v0, s32 *, 4) = 0;
        M2C_FIELD(temp_v0, s32 *, 0xC) = 0;
        M2C_FIELD(temp_v0, s32 *, 8) = 0;
        M2C_FIELD(temp_a0, s32 *, 0x10) = 0x70000000;
        M2C_FIELD(D_011FD1CC, void **, 4) = temp_v0;
    }
}
