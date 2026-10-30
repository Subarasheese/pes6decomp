/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002DB830(void *);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
s32 func_002DB390(s32, s32, s32);                   /* extern */
extern void *D_00A7DBF8;

void func_009B01F0(s32 arg0) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_a0;
    s32 var_a1_2;
    void *temp_s0;
    void *var_a0_2;
    void *var_a1;

    temp_s0 = D_00A7DBF8;
    temp_v0 = func_002DB830(M2C_FIELD(temp_s0, void **, 0x64C));
    temp_v0_2 = func_002DB390(M2C_FIELD(temp_s0, s32 *, 0x64C), temp_v0, arg0);
    if (temp_v0 != temp_v0_2) {
        func_0026E840(0x8400F802);
    }
    if (temp_v0_2 != temp_v0) {
        switch (arg0) {                             /* irregular */
        case 0x40:
            var_a0 = 0;
            if (M2C_FIELD(temp_s0, s32 *, 0x65C) >= 0) {
                var_a1 = temp_s0;
                do {
                    var_a0 += 1;
                    M2C_FIELD(var_a1, s32 *, 0x670) = (s32) (M2C_FIELD(var_a1, s32 *, 0x670) - 1);
                    var_a1 += 4;
                } while (M2C_FIELD(temp_s0, s32 *, 0x65C) >= var_a0);
            }
            break;
        case 0x10:
            var_a1_2 = 0;
            if (M2C_FIELD(temp_s0, s32 *, 0x65C) >= 0) {
                var_a0_2 = temp_s0;
                do {
                    var_a1_2 += 1;
                    M2C_FIELD(var_a0_2, s32 *, 0x670) = (s32) (M2C_FIELD(var_a0_2, s32 *, 0x670) + 1);
                    var_a0_2 += 4;
                } while (M2C_FIELD(temp_s0, s32 *, 0x65C) >= var_a1_2);
                return;
            }
            break;
        }
    }
}
