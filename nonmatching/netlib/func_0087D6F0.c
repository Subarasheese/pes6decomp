/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_008028E0(s32);                             /* extern */
s32 func_0087B470(void *);                          /* extern */
M2C_UNK func_009E1C90(M2C_UNK);                     /* extern */
M2C_UNK func_00B23E50(s64, s32, u32, s32);          /* extern */
extern void *D_003EA384;
extern char D_008B144E[];
extern char D_008B1470[];

s32 func_0087D6F0(void) {
    s32 temp_a3;
    s32 temp_a3_2;
    u32 temp_v0;
    u8 temp_a0;
    u8 temp_a0_2;
    u8 temp_v1;

    func_009E1C90(1);
    temp_v1 = M2C_FIELD(D_003EA384, u8 *, 8);
    if (!(((s32) temp_v1 >> 5) & 1)) {
        M2C_FIELD(D_003EA384, u8 *, 8) = (u8) (temp_v1 | 0x10);
    }
    if ((((s32) M2C_FIELD(D_003EA384, u8 *, 8) >> 5) & 1) && (func_0087B470(D_003EA384 + 8) == 0)) {
        temp_a0 = M2C_FIELD(D_003EA384, u8 *, 8);
        temp_a3 = (*(u16 *)D_008B1470) == 0;
        func_00B23E50((s64) ((((s64) ((temp_a3 & ((s64) (((((s32) temp_a0 >> 4) & 1) == 0) << 0x38) >> 0x38)) << 0x38) >> 0x38) & ((s64) ((((s32) temp_a0 >> 5) & 1) << 0x38) >> 0x38)) << 0x38) >> 0x38, temp_a0 & 1, M2C_FIELD(D_003EA384, u32 *, 0xC), temp_a3);
    }
    if (!(func_008028E0((*(s8 *)D_008B144E) & 1) & 0xFF)) {
        temp_v0 = M2C_FIELD(D_003EA384, u32 *, 0xC);
        if (temp_v0 < 2U) {
            M2C_FIELD(D_003EA384, u32 *, 0xC) = (u32) (temp_v0 + 2);
            temp_a3_2 = (*(u16 *)D_008B1470) == 0;
            temp_a0_2 = M2C_FIELD(D_003EA384, u8 *, 0);
            func_00B23E50((s64) ((((s64) ((temp_a3_2 & ((s64) (((((s32) temp_a0_2 >> 4) & 1) == 0) << 0x38) >> 0x38)) << 0x38) >> 0x38) & ((s64) ((((s32) temp_a0_2 >> 5) & 1) << 0x38) >> 0x38)) << 0x38) >> 0x38, temp_a0_2 & 1, (u32) M2C_FIELD(D_003EA384, u8 *, 0), temp_a3_2);
        }
    }
    return ((s32) M2C_FIELD(D_003EA384, u8 *, 8) >> 4) & 1;
}
