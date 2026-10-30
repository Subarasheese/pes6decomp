/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00225820(void);
s16 func_00225680(u8);                              /* extern */
s16 func_00B5AF00(u8);                              /* extern */
M2C_UNK func_00B5B2C0();                            /* extern */
M2C_UNK func_00B5D850(void *, M2C_UNK);             /* extern */
extern void *D_003EAEB8;

void func_00B5B240(void) {
    void *temp_s0;

    temp_s0 = D_003EAEB8;
    if (temp_s0 != NULL) {
        M2C_FIELD(temp_s0, s8 *, 0x62A) = 0;
        M2C_FIELD(temp_s0, s8 *, 0x62B) = 0;
        M2C_FIELD(temp_s0, u8 *, 0x62E) = func_00225820();
        M2C_FIELD(temp_s0, s16 *, 0x62C) = func_00225680(M2C_FIELD(temp_s0, u8 *, 0x62E));
        func_00B5B2C0();
        M2C_FIELD(temp_s0, s16 *, 0x630) = func_00B5AF00(M2C_FIELD(temp_s0, u8 *, 0x62E));
        func_00B5D850(temp_s0 + 0x840, 1);
        M2C_FIELD(temp_s0, s8 *, 0x632) = 0;
        M2C_FIELD(temp_s0, s16 *, 0x634) = 0;
        M2C_FIELD(temp_s0, s16 *, 0x636) = 0;
        M2C_FIELD(temp_s0, s32 *, 0x638) = 0;
        M2C_FIELD(temp_s0, s16 *, 0x63C) = 0;
        M2C_FIELD(temp_s0, s16 *, 0x63E) = 0;
    }
}
