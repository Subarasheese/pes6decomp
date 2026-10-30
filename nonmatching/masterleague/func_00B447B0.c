/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_0022F8D0(void);
s32 func_002259E0(s32);                             /* extern */
s32 func_00246550(M2C_UNK);                         /* extern */
M2C_UNK func_00B434B0();                            /* extern */
s8 func_00B43C20();                                 /* extern */
s8 func_00B43D80(M2C_UNK);                          /* extern */
extern void *D_003EAE6C;

void func_00B447B0(void) {
    s32 temp_a0;
    s8 var_v0;
    void *temp_s0;

    temp_s0 = D_003EAE6C;
    if (temp_s0 != NULL) {
        M2C_FIELD(temp_s0, s8 *, 0x60C) = 0;
        M2C_FIELD(temp_s0, s8 *, 0x60D) = 0;
        M2C_FIELD(temp_s0, s8 *, 0x60E) = 0;
        M2C_FIELD(temp_s0, s8 *, 0x60F) = 0;
        M2C_FIELD(temp_s0, s8 *, 0x610) = 0;
        M2C_FIELD(temp_s0, s8 *, 0x612) = 0;
        M2C_FIELD(temp_s0, s8 *, 0x6C0) = 0;
        M2C_FIELD(temp_s0, s8 *, 0x6C2) = 0;
        M2C_FIELD(temp_s0, s8 *, 0x6C9) = 0;
        M2C_FIELD(temp_s0, s8 *, 0x6CA) = 0;
        M2C_FIELD(temp_s0, s16 *, 0x6CC) = 0;
        if (func_00246550(0xBF) == 0) {
            M2C_FIELD(temp_s0, s8 *, 0x6C1) = 0;
        } else {
            M2C_FIELD(temp_s0, s8 *, 0x6C1) = 1;
        }
        M2C_FIELD(temp_s0, s32 *, 0x6B4) = 0;
        func_00B434B0();
        temp_a0 = func_0022F8D0() & 0xFF;
        if (temp_a0 == 2) {
            M2C_FIELD(temp_s0, s8 *, 0x6CA) = 1;
            M2C_FIELD(temp_s0, s16 *, 0x6B0) = 0x126;
            if (func_002259E0(temp_a0) & 0xFF) {
                M2C_FIELD(temp_s0, s8 *, 0x6C9) = 1;
                var_v0 = func_00B43C20();
            } else {
                var_v0 = func_00B43D80(0x126);
            }
            M2C_FIELD(temp_s0, s8 *, 0x60D) = var_v0;
            M2C_FIELD(temp_s0, s32 *, 0x6B8) = 2;
            M2C_FIELD(temp_s0, s8 *, 0x60F) = 2;
            M2C_FIELD(temp_s0, s8 *, 0x6C2) = 1;
        }
        M2C_FIELD(temp_s0, s32 *, 0x614) = 0;
        M2C_FIELD(temp_s0, s16 *, 0x618) = 0xFFFF;
        M2C_FIELD(temp_s0, s8 *, 0x6C8) = 0;
    }
}
