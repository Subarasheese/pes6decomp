/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_00225820();                                /* extern */
void *func_00229380();                              /* extern */
s32 func_00230380();                                /* extern */
s32 func_0097C720(M2C_UNK, s32);                    /* extern */
s32 func_0097F790(u8, u8, M2C_UNK, s32);            /* extern */
extern void *D_003EA9B0;

s32 func_009B79F0(s32 arg0) {
    s32 temp_s2;
    void *temp_s0;
    void *temp_s1;

    temp_s2 = func_00225820() & 0xFF;
    temp_s0 = D_003EA9B0;
    temp_s1 = func_00229380();
    if (temp_s0 == NULL) {
        goto block_16;
    }
    if (func_00230380() != 0) {
        if ((func_0097F790(M2C_FIELD(temp_s1, u8 *, 0), M2C_FIELD(temp_s1, u8 *, 5), 1, arg0) & 0xFF) && (func_0097C720(1, temp_s2) == 1)) {
            return 1;
        }
        if ((func_0097F790(M2C_FIELD(temp_s1, u8 *, 0), M2C_FIELD(temp_s1, u8 *, 5), 2, arg0) & 0xFF) && (func_0097C720(2, temp_s2) == 1)) {
            return 1;
        }
        if ((M2C_FIELD(temp_s1, u8 *, 0) != 0xF) && (func_0097C720(2, temp_s2) == 1) && ((arg0 & 0xFF) == (M2C_FIELD(temp_s0, u8 *, 0x234) - 1))) {
            return 1;
        }
        goto block_16;
    }
block_16:
    return 0;
}
