/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001CEBD0(int);
extern void func_001CEA60(s32);
extern void func_001CEC70(void);
extern void func_001CEB90(void);
M2C_UNK func_0018E930(s32);                         /* extern */
M2C_UNK func_001CEAB0();                            /* extern */
M2C_UNK func_001CEC30();                            /* extern */
M2C_UNK func_001CECC0(M2C_UNK);                     /* extern */
extern void *D_00520220;

void func_0018E610(void) {
    s32 var_s0;
    s32 var_s1;
    void *temp_a0;

    if (D_00520220 != NULL) {
        if (M2C_FIELD(D_00520220, s32 *, 0x3384) == 0) {
            return;
        }
        func_001CECC0(0x188);
        func_001CEB90();
        func_001CEC30();
        func_001CEBD0(1);
        func_001CEAB0();
        func_001CEA60(0x2AF9);
        func_001CEC70();
        temp_a0 = D_00520220;
        var_s0 = 0;
        if (M2C_FIELD(temp_a0, s32 *, 0x3384) > 0) {
            var_s1 = 0;
            do {
                func_0018E930(M2C_FIELD((temp_a0 + var_s1), s32 *, 0x33EC));
                var_s0 += 1;
                var_s1 += 4;
            } while (var_s0 < M2C_FIELD(D_00520220, s32 *, 0x3384));
        }
    }
}
