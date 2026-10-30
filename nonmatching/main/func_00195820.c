/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001CEC60(s64);
extern void func_001CEC70(void);
extern void func_001CEA60(s32);
extern void func_001CEBE0(int);
extern void func_001CEB90(void);
s32 func_001839A0(M2C_UNK, void *, M2C_UNK);        /* extern */
M2C_UNK func_001CEAB0();                            /* extern */
M2C_UNK func_001CECC0(s32);                         /* extern */
s32 func_001D3090(void *);                          /* extern */
M2C_UNK func_001D3260(void *);                      /* extern */
extern char D_00397750[];
extern s32 *D_00520238;

void func_00195820(void) {
    s32 sp68;
    s32 *var_s0;
    s32 *var_s1_2;
    s32 *var_s3;
    s32 temp_v0;
    s32 var_s1;
    s32 var_s2_2;
    s32 var_s4;
    u32 var_s0_2;
    u32 var_s2;
    void *temp_a0;
    void *temp_s4;
    void *temp_s4_2;

    if ((D_00520238 != NULL) && (*D_00520238 != 0)) {
        var_s3 = &sp68;
        var_s4 = 1;
        var_s2 = 0;
        var_s1 = 0;
        var_s0 = var_s3;
        do {
            temp_a0 = D_00520238 + var_s1;
            if (M2C_FIELD(temp_a0, s32 *, 0xD48) == 0) {
                *var_s0 = 1;
            } else {
                temp_v0 = func_001839A0(0, temp_a0 + 0x36A0, 2);
                *var_s0 = temp_v0;
                if (temp_v0 == 0) {
                    var_s4 = 0;
                }
            }
            var_s2 += 1;
            var_s1 += 0x2E54;
            var_s0 += 4;
        } while (var_s2 < 2U);
        if (var_s4 != 0) {
            return;
        }
        func_001CECC0(0x60);
        func_001CEB90();
        func_001CEC60(0x2A);
        func_001CEBE0(1);
        func_001CEAB0();
        func_001CEC70();
        var_s0_2 = 0;
        var_s2_2 = 0;
        var_s1_2 = ((void *)D_00397750);
        do {
            if (*var_s3 != 1) {
                temp_s4 = D_00520238 + var_s2_2 + 0x3690;
                func_001CECC0(func_001D3090(temp_s4) + 0x128);
                func_001CEA60(*var_s1_2);
                func_001D3260(temp_s4);
                func_001CEC70();
                temp_s4_2 = D_00520238 + var_s2_2 + 0x3B8C;
                func_001CECC0(func_001D3090(temp_s4_2));
                func_001D3260(temp_s4_2);
                func_001CEC70();
            }
            var_s0_2 += 1;
            var_s3 += 4;
            var_s2_2 += 0x2E54;
            var_s1_2 += 4;
        } while (var_s0_2 < 2U);
    }
}
