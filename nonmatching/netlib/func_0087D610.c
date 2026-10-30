/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002DED00(s32);
extern void func_001BC360(void);
extern void func_00153FA0(void *);
M2C_UNK func_00B23E50(s64, s32, s32, s32);          /* extern */
extern char D_003AE98C[];
extern void *D_003EA384;
extern char D_008B1470[];

s32 func_0087D610(void) {
    s32 temp_a3;
    u8 temp_a0;

    if (D_003EA384 != NULL) {
        M2C_FIELD(D_003EA384, u8 *, 8) = (u8) (M2C_FIELD(D_003EA384, u8 *, 8) & 0xDF);
        temp_a3 = (*(u16 *)D_008B1470) == 0;
        temp_a0 = M2C_FIELD(D_003EA384, u8 *, 0);
        func_00B23E50((s64) ((((s64) ((temp_a3 & ((s64) (((((s32) temp_a0 >> 4) & 1) == 0) << 0x38) >> 0x38)) << 0x38) >> 0x38) & ((s64) ((((s32) temp_a0 >> 5) & 1) << 0x38) >> 0x38)) << 0x38) >> 0x38, temp_a0 & 1, (s32) M2C_FIELD(D_003EA384, u8 *, 0), temp_a3);
    }
    if (!(((s32) M2C_FIELD(D_003EA384, u8 *, 8) >> 6) & 1)) {
        func_002DED00(M2C_FIELD(D_003EA384, s32 *, 4));
    }
    func_001BC360();
    func_00153FA0(D_003EA384);
    D_003EA384 = NULL;
    (*(s32 *)D_003AE98C) = 0;
    return 1;
}
