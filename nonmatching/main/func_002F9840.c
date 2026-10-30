/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7D60(void *, s8);
extern void func_001D7840(void *, s8);
extern void * func_001D5A10(s32);
extern void func_001D7C20(void *, s32);
extern void * func_001D6640(s32, s32, s32);
M2C_UNK func_001D7E40(void *, s32);                 /* extern */
M2C_UNK func_002F9720(s32, s32, void *);            /* extern */

void func_002F9840(s32 arg0, s32 arg1, void *arg2, s32 arg3, s32 arg4) {
    void *spAC;
    M2C_UNK (*temp_s0)(void *);
    s32 temp_s1;
    s32 temp_s3;
    s32 var_s4;
    void *temp_s1_2;
    void *temp_v0;
    void *var_s5;

    var_s5 = arg2;
    spAC = func_001D5A10(arg4);
    var_s4 = 0;
    if (arg3 > 0) {
        do {
            temp_s3 = M2C_FIELD(var_s5, s32 *, 0);
            temp_s1 = M2C_FIELD(var_s5, s32 *, 0xC);
            temp_s0 = M2C_FIELD(var_s5, M2C_UNK (**)(void *), 4);
            temp_v0 = func_001D6640(arg1, (s32) spAC, M2C_FIELD(var_s5, s32 *, 8));
            temp_s1_2 = M2C_FIELD(temp_v0, void **, 0xC);
            func_001D7E40(temp_s1_2, temp_s1);
            func_001D7C20(temp_s1_2, 2);
            func_001D7D60(temp_s1_2, 1);
            func_001D7840(temp_s1_2, 3);
            func_002F9720(arg0, temp_s3, temp_v0);
            if (temp_s0 != NULL) {
                temp_s0(temp_s1_2);
            }
            var_s4 += 1;
            var_s5 += 0x10;
        } while (var_s4 < arg3);
    }
}
