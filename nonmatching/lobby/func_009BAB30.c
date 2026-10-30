/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7D60(void *, s8);
extern void func_00153FA0(void *);
M2C_UNK func_002133E0(s32);                         /* extern */
M2C_UNK func_002DF8E0(s32, M2C_UNK);                /* extern */
M2C_UNK func_009BC070(void *);                      /* extern */
M2C_UNK func_009BC220(void *);                      /* extern */
M2C_UNK func_009BC420(void *);                      /* extern */
extern void *D_00A7DC28;

void func_009BAB30(void) {
    s32 temp_a0;
    s64 var_s2;
    s8 temp_v1;
    void *temp_s0;
    void *var_s1;

    temp_s0 = D_00A7DC28;
    if (temp_s0 != NULL) {
        if (M2C_FIELD(temp_s0, s8 *, 1) != 1) {
            temp_v1 = M2C_FIELD(temp_s0, s8 *, 2);
            switch (temp_v1) {                      /* irregular */
            case 1:
                func_009BC070(temp_s0);
                break;
            case 0:
                func_009BC220(temp_s0);
                return;
            }
        } else {
            func_009BC420(temp_s0);
            temp_a0 = M2C_FIELD(temp_s0, s32 *, 0xA4);
            if (temp_a0 != 0) {
                func_002133E0(temp_a0);
                M2C_FIELD(temp_s0, s32 *, 0xA4) = 0;
            }
            var_s2 = 0;
            var_s1 = temp_s0;
            do {
                func_001D7D60(M2C_FIELD(var_s1, void **, 0xC), 1);
                var_s2 = (s64) ((var_s2 + 1) << 0x38) >> 0x38;
                var_s1 += 4;
            } while (var_s2 < 6);
            func_002DF8E0(M2C_FIELD(temp_s0, s32 *, 0xA8), 1);
            func_00153FA0(D_00A7DC28);
            D_00A7DC28 = NULL;
        }
    }
}
