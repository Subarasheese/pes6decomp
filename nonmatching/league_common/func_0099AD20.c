/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_00229970();                                /* extern */
void *func_00229DF0();                              /* extern */

void func_0099AD20(void) {
    s32 temp_v1;
    s32 var_v1;
    void *temp_v0;
    void *temp_v0_10;
    void *temp_v0_11;
    void *temp_v0_12;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;
    void *temp_v0_5;
    void *temp_v0_6;
    void *temp_v0_7;
    void *temp_v0_8;
    void *temp_v0_9;
    void *var_v0;

    temp_v1 = func_00229970() & 0xFF;
    switch (temp_v1) {                              /* irregular */
    case 1:
        temp_v0 = func_00229DF0();
        if (temp_v0 != NULL) {
            M2C_FIELD(temp_v0, s32 *, 8) = (s32) (M2C_FIELD(temp_v0, s32 *, 8) & ~1);
        }
        temp_v0_2 = func_00229DF0();
        if (temp_v0_2 != NULL) {
            M2C_FIELD(temp_v0_2, s32 *, 8) = (s32) (M2C_FIELD(temp_v0_2, s32 *, 8) & ~2);
        }
        temp_v0_3 = func_00229DF0();
        if (temp_v0_3 != NULL) {
            M2C_FIELD(temp_v0_3, s32 *, 8) = (s32) (M2C_FIELD(temp_v0_3, s32 *, 8) | 4);
        }
        var_v0 = func_00229DF0();
        if (var_v0 != NULL) {
            var_v1 = M2C_FIELD(var_v0, s32 *, 8) | 8;
block_19:
            M2C_FIELD(var_v0, s32 *, 8) = var_v1;
        }
        break;
    case 0:
        temp_v0_4 = func_00229DF0();
        if (temp_v0_4 != NULL) {
            M2C_FIELD(temp_v0_4, s32 *, 8) = (s32) (M2C_FIELD(temp_v0_4, s32 *, 8) | 1);
        }
        temp_v0_5 = func_00229DF0();
        if (temp_v0_5 != NULL) {
            M2C_FIELD(temp_v0_5, s32 *, 8) = (s32) (M2C_FIELD(temp_v0_5, s32 *, 8) | 2);
        }
        temp_v0_6 = func_00229DF0();
        if (temp_v0_6 != NULL) {
            M2C_FIELD(temp_v0_6, s32 *, 8) = (s32) (M2C_FIELD(temp_v0_6, s32 *, 8) & ~4);
        }
        var_v0 = func_00229DF0();
        if (var_v0 != NULL) {
            var_v1 = M2C_FIELD(var_v0, s32 *, 8) & ~8;
            goto block_19;
        }
        break;
    }
    temp_v0_7 = func_00229DF0();
    if (temp_v0_7 != NULL) {
        M2C_FIELD(temp_v0_7, s32 *, 8) = (s32) (M2C_FIELD(temp_v0_7, s32 *, 8) & ~0x40);
    }
    temp_v0_8 = func_00229DF0();
    if (temp_v0_8 != NULL) {
        M2C_FIELD(temp_v0_8, s32 *, 8) = (s32) (M2C_FIELD(temp_v0_8, s32 *, 8) & ~0x80);
    }
    temp_v0_9 = func_00229DF0();
    if (temp_v0_9 != NULL) {
        M2C_FIELD(temp_v0_9, s32 *, 8) = (s32) (M2C_FIELD(temp_v0_9, s32 *, 8) & ~0x100);
    }
    temp_v0_10 = func_00229DF0();
    if (temp_v0_10 != NULL) {
        M2C_FIELD(temp_v0_10, s32 *, 8) = (s32) (M2C_FIELD(temp_v0_10, s32 *, 8) & ~0x200);
    }
    temp_v0_11 = func_00229DF0();
    if (temp_v0_11 != NULL) {
        M2C_FIELD(temp_v0_11, s32 *, 8) = (s32) (M2C_FIELD(temp_v0_11, s32 *, 8) & ~0x20);
    }
    temp_v0_12 = func_00229DF0();
    if (temp_v0_12 != NULL) {
        M2C_FIELD(temp_v0_12, s32 *, 8) = (s32) (M2C_FIELD(temp_v0_12, s32 *, 8) | 0x10);
    }
}
