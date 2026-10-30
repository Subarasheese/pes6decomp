/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_0022F150(void);
extern u8 func_00225820(void);
s8 func_002249A0(s32, s32);                         /* extern */
s32 func_00224BC0(s32, s32);                        /* extern */
M2C_UNK func_00224CA0(s32, s32, M2C_UNK, void *);   /* extern */
M2C_UNK func_00AF6410();                            /* extern */

void func_00AF6540(s32 arg0) {
    s16 temp_s0;
    s32 temp_a1;
    s32 temp_s1;
    s32 temp_s2;
    s32 temp_s4;
    s32 temp_v1;
    s32 var_a3;
    s32 var_s0;
    s32 var_s5;
    s8 temp_v0_2;
    void *temp_a1_2;
    void *temp_a2;
    void *temp_a3;
    void *temp_v0;
    void *temp_v0_3;

    temp_s4 = func_00225820() & 0xFF;
    var_s0 = 0;
    temp_v0 = func_0022F150();
    if (temp_v0 != NULL) {
        temp_s2 = arg0 & 0xFF;
        switch (temp_s2) {                          /* irregular */
        case 1:
            var_s0 = 0x17;
            break;
        case 0:
            var_s0 = 0x12;
            break;
        }
        temp_s1 = var_s0 & 0xFF;
        var_s5 = temp_s1;
        if (temp_s1 < 0x20) {
            do {
                temp_s0 = func_00224BC0(temp_s4, var_s5) & 0xFFFF;
                temp_v0_2 = func_002249A0(temp_s4, var_s5);
                temp_v1 = (var_s5 & 0xFF) - temp_s1;
                temp_a3 = temp_v0 + (temp_v1 * 2);
                M2C_FIELD(temp_a3, s16 *, 0x76C) = temp_s0;
                M2C_FIELD((temp_v0 + temp_v1), s8 *, 0x7AC) = temp_v0_2;
                func_00224CA0(temp_s4, var_s5, 0, temp_a3);
                var_s5 = (var_s5 + 1) & 0xFF;
            } while (var_s5 < 0x20);
        }
        func_00AF6410();
        if (temp_s2 == 1) {
            temp_v0_3 = func_0022F150();
            if (temp_v0_3 != NULL) {
                var_a3 = 0;
                do {
                    temp_a1 = var_a3 & 0xFF;
                    var_a3 = (var_a3 + 8) & 0xFF;
                    temp_a2 = temp_v0_3 + (temp_a1 * 2);
                    temp_a1_2 = temp_v0_3 + temp_a1;
                    M2C_FIELD(temp_a2, s16 *, 0x76C) = 0;
                    M2C_FIELD(temp_a1_2, s8 *, 0x7AC) = 0xFF;
                    M2C_FIELD(temp_a2, s16 *, 0x76E) = 0;
                    M2C_FIELD(temp_a1_2, s8 *, 0x7AD) = 0xFF;
                    M2C_FIELD(temp_a2, s16 *, 0x770) = 0;
                    M2C_FIELD(temp_a1_2, s8 *, 0x7AE) = 0xFF;
                    M2C_FIELD(temp_a2, s16 *, 0x772) = 0;
                    M2C_FIELD(temp_a1_2, s8 *, 0x7AF) = 0xFF;
                    M2C_FIELD(temp_a2, s16 *, 0x774) = 0;
                    M2C_FIELD(temp_a1_2, s8 *, 0x7B0) = 0xFF;
                    M2C_FIELD(temp_a2, s16 *, 0x776) = 0;
                    M2C_FIELD(temp_a1_2, s8 *, 0x7B1) = 0xFF;
                    M2C_FIELD(temp_a2, s16 *, 0x778) = 0;
                    M2C_FIELD(temp_a1_2, s8 *, 0x7B2) = 0xFF;
                    M2C_FIELD(temp_a2, s16 *, 0x77A) = 0;
                    M2C_FIELD(temp_a1_2, s8 *, 0x7B3) = 0xFF;
                } while (var_a3 < 0x20);
            }
        }
    }
}
