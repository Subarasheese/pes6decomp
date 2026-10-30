/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B60D10(void);
extern void func_001D4E00(void *);
M2C_UNK func_00957070(s32);                         /* extern */
M2C_UNK func_00973460(s32);                         /* extern */

void func_00B62170(void) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a0_5;
    s32 temp_a0_6;
    u32 temp_v0;
    void *temp_a0_7;

    temp_v0 = func_00B60D10();
    if (temp_v0 != 0) {
        temp_a0 = M2C_FIELD(temp_v0, s32 *, 0x10);
        if (temp_a0 != 0) {
            func_00957070(temp_a0);
        }
        temp_a0_2 = M2C_FIELD(temp_v0, s32 *, 0x38);
        if (temp_a0_2 != 0) {
            func_00957070(temp_a0_2);
        }
        temp_a0_3 = M2C_FIELD(temp_v0, s32 *, 0x60);
        if (temp_a0_3 != 0) {
            func_00957070(temp_a0_3);
        }
        temp_a0_4 = M2C_FIELD(temp_v0, s32 *, 0x18);
        if (temp_a0_4 != 0) {
            func_00973460(temp_a0_4);
        }
        temp_a0_5 = M2C_FIELD(temp_v0, s32 *, 0x40);
        if (temp_a0_5 != 0) {
            func_00973460(temp_a0_5);
        }
        temp_a0_6 = M2C_FIELD(temp_v0, s32 *, 0x68);
        if (temp_a0_6 != 0) {
            func_00973460(temp_a0_6);
        }
        temp_a0_7 = M2C_FIELD(temp_v0, void **, 0);
        if (temp_a0_7 != NULL) {
            func_001D4E00(temp_a0_7);
            M2C_FIELD(temp_v0, void **, 0) = NULL;
        }
    }
}
