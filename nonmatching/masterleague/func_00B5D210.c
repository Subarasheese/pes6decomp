/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B5B230(void);
M2C_UNK func_0020E310(M2C_UNK, u8 *);               /* extern */
M2C_UNK func_009737A0(s32, u8 *);                   /* extern */
M2C_UNK func_009737E0(s32, M2C_UNK, s32);           /* extern */

void func_00B5D210(s32 arg0, s32 arg1, s32 arg2) {
    u8 sp5C;
    u8 sp5D;
    u8 sp5E;
    u8 sp5F;
    s32 temp_s1;
    u32 temp_v0;

    temp_v0 = func_00B5B230();
    if (temp_v0 != 0) {
        func_009737E0(M2C_FIELD(temp_v0, s32 *, 0x14), 0x11, arg0);
        temp_s1 = arg0 + arg2;
        if (temp_s1 >= arg1) {
            if (arg0 >= arg1) {
                sp5C = M2C_FIELD(temp_v0, u8 *, 0x18);
                sp5D = M2C_FIELD(temp_v0, u8 *, 0x19);
                sp5E = M2C_FIELD(temp_v0, u8 *, 0x1A);
                sp5F = M2C_FIELD(temp_v0, u8 *, 0x1B);
            } else {
                func_0020E310(8, &sp5C);
            }
        } else {
            sp5C = 0x96;
            sp5D = 0xA;
            sp5F = 0xFF;
            sp5E = 0xA;
        }
        func_009737A0(M2C_FIELD(temp_v0, s32 *, 0x14), &sp5C);
        func_009737E0(M2C_FIELD(temp_v0, s32 *, 0x1C), 0x13, arg1);
        func_009737E0(M2C_FIELD(temp_v0, s32 *, 0x28), 0x16, temp_s1);
    }
}
