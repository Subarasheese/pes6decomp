/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_00229DF0(void);
extern void * func_00228A80(void);
extern void * func_0022F150(void);
s32 func_00994760();                                /* extern */
M2C_UNK func_00B54330(M2C_UNK);                     /* extern */
extern char D_00B80B80[];

void func_00B54C80(void) {
    s16 *var_v0_4;
    s32 temp_s1;
    s32 temp_s1_2;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 var_s0;
    s32 var_s1;
    s64 temp_a0;
    u32 temp_v1;
    u8 *var_a1;
    u8 var_v0_6;
    u8 var_v0_8;
    u8 var_v0_9;
    u8 var_v1;
    void *temp_v0_6;
    void *temp_v0_7;
    void *temp_v0_8;
    void *var_v0;
    void *var_v0_2;
    void *var_v0_3;
    void *var_v0_5;
    void *var_v0_7;

    temp_v0 = func_00994760();
    if (temp_v0 != 0) {
        var_v0 = temp_v0 + 0x61AC4;
    } else {
        var_v0 = NULL;
    }
    if (var_v0 != NULL) {
        M2C_FIELD(var_v0, s8 *, 0x20) = 0;
    }
    temp_v0_2 = func_00994760();
    if (temp_v0_2 != 0) {
        var_v0_2 = temp_v0_2 + 0x61AC4;
    } else {
        var_v0_2 = NULL;
    }
    if (var_v0_2 != NULL) {
        M2C_FIELD(var_v0_2, s8 *, 0x21) = 0;
    }
    temp_v0_3 = func_00994760();
    if (temp_v0_3 != 0) {
        var_v0_3 = temp_v0_3 + 0x61AC4;
    } else {
        var_v0_3 = NULL;
    }
    if (var_v0_3 != NULL) {
        M2C_FIELD(var_v0_3, s8 *, 0x22) = 0;
    }
    var_s0 = 0;
    do {
        temp_s1 = var_s0 & 0xFF;
        if (temp_s1 >= 8) {
            var_v0_4 = NULL;
        } else {
            temp_v0_4 = func_00994760();
            if (temp_v0_4 == 0) {
                var_v0_4 = NULL;
            } else {
                var_v0_4 = temp_v0_4 + ((temp_s1 & 0xFF) * 4) + 0x61AC4;
            }
        }
        if (var_v0_4 != NULL) {
            *var_v0_4 = 0;
        }
        temp_s1_2 = var_s0 & 0xFF;
        if (temp_s1_2 >= 8) {
            var_v0_5 = NULL;
        } else {
            temp_v0_5 = func_00994760();
            if (temp_v0_5 == 0) {
                var_v0_5 = NULL;
            } else {
                var_v0_5 = temp_v0_5 + ((temp_s1_2 & 0xFF) * 4) + 0x61AC4;
            }
        }
        if (var_v0_5 != NULL) {
            M2C_FIELD(var_v0_5, s8 *, 2) = 0;
        }
        var_s0 += 1;
    } while (var_s0 < 8);
    temp_v0_6 = func_00229DF0();
    if (temp_v0_6 != NULL) {
        var_v1 = M2C_FIELD(temp_v0_6, u8 *, 3);
    } else {
        var_v1 = 0;
    }
    if ((s32) var_v1 <= 0) {
        temp_v0_7 = func_0022F150();
        if (temp_v0_7 != NULL) {
            var_v0_6 = M2C_FIELD(temp_v0_7, u8 *, 7);
        } else {
            var_v0_6 = 0;
        }
        if ((s32) var_v0_6 < 2) {
            var_s1 = 0;
            do {
                temp_v1 = var_s1 & 0xFFFF;
                if (temp_v1 >= 0x267U) {
                    var_v0_7 = NULL;
                } else if ((s32) temp_v1 >= 0x268) {
                    var_v0_7 = NULL;
                } else {
                    var_v0_7 = ((void *)D_00B80B80) + (temp_v1 << 5);
                }
                if (var_v0_7 != NULL) {
                    var_v0_8 = M2C_FIELD(var_v0_7, u8 *, 0x1C);
                } else {
                    var_v0_8 = 0;
                }
                temp_v0_8 = func_00228A80();
                if (temp_v0_8 == NULL) {
                    var_a1 = NULL;
                } else {
                    temp_a0 = (s64) ((var_s1 & 0xFFFF) << 0x30) >> 0x30;
                    if (temp_a0 >= 0x268) {
                        var_a1 = NULL;
                    } else if (temp_a0 < 0x25E) {
                        var_a1 = temp_v0_8 + temp_a0 + 0x102BE;
                    } else {
                        var_a1 = temp_v0_8 + (temp_a0 - 0x25E) + 0x10530;
                    }
                }
                if (var_a1 != NULL) {
                    if (!(var_v0_8 & 0xFF & 0xFF)) {
                        var_v0_9 = (*var_a1 & ~2) | ((0 & 1) * 2);
                    } else {
                        var_v0_9 = (*var_a1 & ~2) | 2;
                    }
                    *var_a1 = var_v0_9;
                }
                var_s1 += 1;
            } while (var_s1 < 0x268);
        }
        func_00B54330(0);
    }
}
