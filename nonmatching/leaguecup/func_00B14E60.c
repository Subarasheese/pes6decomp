/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D4E00(void *);
extern u32 func_00B155F0(void);
M2C_UNK func_00957070(s32);                         /* extern */
M2C_UNK func_00973460(s32);                         /* extern */

void func_00B14E60(void) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    u32 temp_v0;
    void *temp_a0_5;

    temp_v0 = func_00B155F0();
    if (temp_v0 != 0) {
        temp_a0 = M2C_FIELD(temp_v0, s32 *, 0x14);
        if (temp_a0 != 0) {
            func_00957070(temp_a0);
        }
        temp_a0_2 = M2C_FIELD(temp_v0, s32 *, 0x2C);
        if (temp_a0_2 != 0) {
            func_00957070(temp_a0_2);
        }
        temp_a0_3 = M2C_FIELD(temp_v0, s32 *, 0x1C);
        if (temp_a0_3 != 0) {
            func_00973460(temp_a0_3);
        }
        temp_a0_4 = M2C_FIELD(temp_v0, s32 *, 0x34);
        if (temp_a0_4 != 0) {
            func_00973460(temp_a0_4);
        }
        temp_a0_5 = M2C_FIELD(temp_v0, void **, 4);
        if (temp_a0_5 != NULL) {
            func_001D4E00(temp_a0_5);
            M2C_FIELD(temp_v0, void **, 4) = NULL;
        }
    }
}
