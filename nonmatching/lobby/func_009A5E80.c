/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001F08B0(s32);
extern void * func_00121430(void *);
M2C_UNK func_001C80F0(s32);                         /* extern */
s32 func_008186E0(s8 *, s32, s32, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_008187D0();                            /* extern */
s32 func_00968AF0();                                /* extern */
M2C_UNK func_009A91A0(void *, M2C_UNK);             /* extern */

s32 func_009A5E80(void *arg0) {
    s8 sp60;
    s32 temp_a0;
    s32 temp_s1;
    s32 temp_v0;
    s32 var_s0;
    s32 var_s2;
    s32 var_v0;
    s8 *var_v1;
    void *temp_v1;

    var_v0 = 0x200;
    var_v1 = &sp60;
    if (var_v1 != NULL) {
        do {
            *var_v1 = 0;
            var_v0 -= 1;
            var_v1 += 1;
        } while (var_v0 != 0);
    }
    if (func_00968AF0() == 0) {
        var_s0 = 0;
    } else {
        var_s0 = 4;
    }
    if (var_s0 == 0) {
        var_s2 = 0;
        do {
            temp_v1 = arg0 + ((var_s2 & 0xFF) * 4);
            temp_a0 = M2C_FIELD(temp_v1, s32 *, 0x3A0);
            if (temp_a0 != -1) {
                func_001C80F0(func_001F08B0(temp_a0));
                func_001F08B0(M2C_FIELD(temp_v1, s32 *, 0x3A0));
                func_00121430(&sp60);
                func_00121430(&sp60);
            }
            var_s2 = (var_s2 + 1) & 0xFF;
        } while (var_s2 < 2);
        temp_s1 = func_001F08B0(0x6C0006);
        temp_v0 = func_008186E0(&sp60, temp_s1, func_001F08B0(0x6C0007), 0, 1);
        switch (temp_v0) {                          /* irregular */
        case 2:
            func_009A91A0(arg0, 1);
            M2C_FIELD(arg0, s8 *, 0x378) = (s8) M2C_FIELD(arg0, s32 *, 0x39C);
            M2C_FIELD(arg0, s32 *, 0x3A0) = -1;
block_20:
            M2C_FIELD(arg0, s32 *, 0x3A4) = -1;
            break;
        case 3:
            M2C_FIELD(arg0, s8 *, 0x378) = 9;
            func_009A91A0(arg0, 1);
            M2C_FIELD(arg0, s32 *, 0x3A0) = -1;
            goto block_20;
        }
    } else {
        func_008187D0();
        func_009A91A0(arg0, 1);
    }
    return var_s0;
}
