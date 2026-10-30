/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D4E00(void *);
extern u32 func_00B3D3D0(void);
M2C_UNK func_00957070(s32);                         /* extern */

void func_00B3C2F0(void) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    u32 temp_v0;

    temp_v0 = func_00B3D3D0();
    if (temp_v0 != 0) {
        temp_a0 = M2C_FIELD(temp_v0, s32 *, 0x1C);
        if (temp_a0 != 0) {
            func_00957070(temp_a0);
        }
        temp_a0_2 = M2C_FIELD(temp_v0, s32 *, 0x24);
        if (temp_a0_2 != 0) {
            func_00957070(temp_a0_2);
        }
        temp_a0_3 = M2C_FIELD(temp_v0, s32 *, 0x2C);
        if (temp_a0_3 != 0) {
            func_00957070(temp_a0_3);
        }
        temp_a0_4 = M2C_FIELD(temp_v0, s32 *, 0x34);
        if (temp_a0_4 != 0) {
            func_00957070(temp_a0_4);
        }
        func_001D4E00(M2C_FIELD(temp_v0, void **, 0));
    }
}
