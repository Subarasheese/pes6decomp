/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00B23E50(s64, s32, s32, s32);          /* extern */
extern void *D_003EA384;
extern char D_008B1470[];

void func_0087D490(void) {
    s32 temp_a3;
    u8 temp_a0;

    if (D_003EA384 != NULL) {
        M2C_FIELD(D_003EA384, u8 *, 8) = (u8) (M2C_FIELD(D_003EA384, u8 *, 8) & 0xDF);
        temp_a3 = (*(u16 *)D_008B1470) == 0;
        temp_a0 = M2C_FIELD(D_003EA384, u8 *, 0);
        func_00B23E50((s64) ((((s64) ((temp_a3 & ((s64) (((((s32) temp_a0 >> 4) & 1) == 0) << 0x38) >> 0x38)) << 0x38) >> 0x38) & ((s64) ((((s32) temp_a0 >> 5) & 1) << 0x38) >> 0x38)) << 0x38) >> 0x38, temp_a0 & 1, (s32) M2C_FIELD(D_003EA384, u8 *, 0), temp_a3);
    }
}
