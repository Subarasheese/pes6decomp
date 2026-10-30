/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002260F0(s32);
extern u32 func_00B5B230(void);
M2C_UNK func_009737E0(s32, M2C_UNK, s32);           /* extern */
s32 func_00B04E90();                                /* extern */
s32 func_00B20F00();                                /* extern */
M2C_UNK func_00B5D210(s32, s32, s32);               /* extern */
M2C_UNK func_00B5D310(s32 *, s32 *);                /* extern */

void func_00B5D140(void) {
    s32 sp58;
    s32 sp5C;
    s32 temp_s1;
    s32 temp_s2;
    s32 temp_s3;
    u32 temp_v0;
    u32 temp_v0_2;

    temp_s3 = func_00B20F00();
    temp_v0 = func_00B5B230();
    if (temp_v0 != 0) {
        sp5C = 0;
        sp58 = 0;
        temp_s2 = M2C_FIELD(func_002260F0((s32) M2C_FIELD(temp_v0, u8 *, 0x62E)), s32 *, 0x34);
        temp_s1 = func_00B04E90();
        temp_v0_2 = func_00B5B230();
        if (temp_v0_2 != 0) {
            func_009737E0(M2C_FIELD(temp_v0_2, s32 *, 0xC), 8, temp_s2);
            func_009737E0(M2C_FIELD(temp_v0_2, s32 *, 0x10), 0xA, temp_s1);
            func_009737E0(M2C_FIELD(temp_v0_2, s32 *, 0x24), 0xC, temp_s3);
        }
        func_00B5D310(&sp5C, &sp58);
        func_00B5D210(temp_s2 + sp5C, temp_s1 + sp58, temp_s3);
    }
}
