/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00950BA0(void *, s32);                     /* extern */
s32 func_00965920();                                /* extern */
s32 func_009659F0(s32);                             /* extern */
void *func_0099C7E0(M2C_UNK);                       /* extern */
M2C_UNK func_009D0560(M2C_UNK);                     /* extern */
M2C_UNK func_009D15E0(M2C_UNK, s32);                /* extern */
M2C_UNK func_009D4D00();                            /* extern */
M2C_UNK func_009D6390(M2C_UNK);                     /* extern */
M2C_UNK func_009D6550();                            /* extern */
extern void *D_00A7DE10;

void func_009D5FD0(void) {
    s32 temp_a1;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 var_s0;
    s32 var_v1;
    void *temp_a0;
    void *temp_v0;

    if ((D_00A7DE10 == NULL) && (temp_v0 = func_0099C7E0(0x54), D_00A7DE10 = temp_v0, (temp_v0 != NULL))) {
        M2C_FIELD(temp_v0, s8 *, 2) = 1;
        var_s0 = 0;
        M2C_FIELD(D_00A7DE10, s32 *, 8) = 0x11;
        do {
            M2C_FIELD((D_00A7DE10 + var_s0), s8 *, 0x2C) = 1;
            temp_v0_2 = func_009659F0(var_s0);
            temp_a1 = var_s0 * 4;
            var_s0 += 1;
            temp_a0 = D_00A7DE10 + temp_a1;
            M2C_FIELD(temp_a0, s32 *, 0x34) = temp_v0_2;
        } while (var_s0 < 8);
        func_009D15E0(0, func_00950BA0(temp_a0, temp_a1) & 0xFF);
        func_009D6550();
        func_009D4D00();
        temp_v0_3 = func_00965920();
        if ((temp_v0_3 != 0x14) && (var_v1 = 1, (temp_v0_3 != 1)) && (temp_v0_3 != 0)) {

        } else {
            var_v1 = 0;
        }
        if (var_v1 == 0) {
            func_009D0560(1);
            func_009D6390(0);
            M2C_FIELD(D_00A7DE10, s8 *, 1) = 0;
        } else {
            func_009D0560(0);
            func_009D6390(1);
            M2C_FIELD(D_00A7DE10, s8 *, 1) = 2;
        }
    }
}
