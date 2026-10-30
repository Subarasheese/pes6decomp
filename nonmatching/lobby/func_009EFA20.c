/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7D60(void *, s8);
extern void func_001D7D80(void *, s16);
void func_009EFA20(void *arg0, s32 arg1) {
    s32 sp5C;
    s32 temp_s0;
    s32 var_s3;
    s64 (*temp_v1)(s32, s32 *);
    s64 var_v0;

    if ((M2C_FIELD(M2C_FIELD(arg0, void **, 8), s32 *, 0x20) != M2C_FIELD(arg0, s32 *, 0)) || (arg1 != M2C_FIELD(arg0, s16 *, 6))) {
        sp5C = arg1;
        var_v0 = 0;
        temp_v1 = M2C_FIELD(arg0, s64 (**)(s32, s32 *), 0x10);
        temp_s0 = M2C_FIELD(M2C_FIELD(arg0, void **, 8), s32 *, 0x20);
        var_s3 = 0;
        if (temp_v1 != NULL) {
            var_v0 = temp_v1(temp_s0, &sp5C);
        }
        if (sp5C == arg1) {
            func_001D7D80(*M2C_FIELD(arg0, void ***, 0xC), (s16) ((s64) (var_v0 << 0x30) >> 0x30));
            var_s3 = 1;
        }
        func_001D7D60(*M2C_FIELD(arg0, void ***, 0xC), var_s3 & 0xFF);
        M2C_FIELD(arg0, s32 *, 0) = temp_s0;
        M2C_FIELD(arg0, s16 *, 6) = (s16) arg1;
    }
}
