/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B28900(void);
extern void func_001D7D80(void *, s16);
extern void func_001D7D60(void *, s8);
extern void * func_001D5A10(s32);
M2C_UNK func_00972040(s32, M2C_UNK, s32);           /* extern */
M2C_UNK func_009720E0(s32, s16);                    /* extern */
M2C_UNK func_00B278C0(u8);                          /* extern */
M2C_UNK func_00B27CD0();                            /* extern */
M2C_UNK func_00B27E90();                            /* extern */

void func_00B28100(void) {
    s16 var_s3;
    s32 temp_s2_2;
    u32 temp_v0;
    u32 temp_v0_2;
    u32 temp_v0_3;
    u8 temp_s2;

    temp_v0 = func_00B28900();
    if (temp_v0 != 0) {
        M2C_FIELD(temp_v0, void **, 4) = func_001D5A10(0x10338);
        func_00B27E90();
        func_00B27CD0();
        temp_s2 = M2C_FIELD(temp_v0, u8 *, 0x18C);
        temp_v0_2 = func_00B28900();
        if (temp_v0_2 != 0) {
            if (M2C_FIELD(temp_v0_2, s32 *, 0x214) == 0) {
                var_s3 = 1;
            } else {
                var_s3 = 0;
            }
            func_001D7D80(M2C_FIELD(temp_v0_2, void **, 0x17C), var_s3);
            func_009720E0(M2C_FIELD(temp_v0_2, s32 *, 0x180), var_s3);
            func_00972040(M2C_FIELD(temp_v0_2, s32 *, 0x180), 0, temp_s2 & 0xFF);
        }
        temp_s2_2 = M2C_FIELD(temp_v0, s32 *, 0x214);
        temp_v0_3 = func_00B28900();
        if (temp_v0_3 != 0) {
            if (temp_s2_2 == 2) {
                func_001D7D80(M2C_FIELD(temp_v0_3, void **, 0x178), (s16) M2C_FIELD(temp_v0_3, u8 *, 0x18C));
                func_001D7D60(M2C_FIELD(temp_v0_3, void **, 0x178), 1);
            } else {
                func_001D7D60(M2C_FIELD(temp_v0_3, void **, 0x178), 0);
            }
        }
        func_00B278C0(M2C_FIELD(temp_v0, u8 *, 0x18C));
    }
}
