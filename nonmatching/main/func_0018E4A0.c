/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001CEB90(void);
extern void func_001CEC60(s64);
extern void func_001CEBD0(int);
extern void func_001CEA60(s32);
extern void func_001CEC70(void);
M2C_UNK func_0018E930(s32);                         /* extern */
M2C_UNK func_0018EA60(void *);                      /* extern */
M2C_UNK func_001CEAB0();                            /* extern */
M2C_UNK func_001CEC30();                            /* extern */
M2C_UNK func_001CECC0(M2C_UNK);                     /* extern */
extern void *D_00520220;

void func_0018E4A0(void) {
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s1;
    s32 var_s1_2;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_v1;

    if (D_00520220 != NULL) {
        if (M2C_FIELD(D_00520220, s32 *, 0x3388) == 0) {
            return;
        }
        func_001CECC0(0x60);
        func_001CEB90();
        func_001CEC60(0x48);
        func_001CEC30();
        func_001CEBD0(1);
        func_001CEAB0();
        func_001CEC70();
        temp_v1 = D_00520220;
        var_s1 = 0;
        if (M2C_FIELD(temp_v1, s32 *, 0x3388) > 0) {
            var_s0 = 0;
            do {
                temp_a0 = M2C_FIELD((temp_v1 + var_s0), void **, 0x341C);
                if (M2C_FIELD(temp_a0, u8 *, 2) & 2) {
                    func_0018EA60(temp_a0);
                }
                var_s1 += 1;
                var_s0 += 4;
            } while (var_s1 < M2C_FIELD(D_00520220, s32 *, 0x3388));
        }
        func_001CECC0(0x188);
        func_001CEB90();
        func_001CEC30();
        func_001CEBD0(1);
        func_001CEAB0();
        func_001CEA60(0x2AF9);
        func_001CEC70();
        temp_a0_2 = D_00520220;
        var_s0_2 = 0;
        if (M2C_FIELD(temp_a0_2, s32 *, 0x3388) > 0) {
            var_s1_2 = 0;
            do {
                func_0018E930(M2C_FIELD((temp_a0_2 + var_s1_2), s32 *, 0x341C));
                var_s0_2 += 1;
                var_s1_2 += 4;
            } while (var_s0_2 < M2C_FIELD(D_00520220, s32 *, 0x3388));
        }
    }
}
