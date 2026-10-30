/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7F10(void *);
extern f32 func_001D79A0(void *, u16);
extern void func_001D7D80(void *, s16);
void *func_001D7A20(void *, s32 *, u16);            /* extern */
void *func_0081D850(s32, s32, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */

s32 func_008208C0(void *arg0, s32 arg1, s32 arg2, u16 arg3, s16 arg4) {
    s32 sp50;
    s32 sp54;
    s32 sp58;
    s32 sp5C;
    f32 temp_f0;
    void *temp_v0;
    void *temp_v0_2;

    if (arg0 != NULL) {
        if (arg1 != 0) {
            sp50 = 0;
            sp54 = 0;
            sp58 = 0;
            sp5C = 0;
            temp_v0 = func_0081D850(arg1, arg2, 2, 0, 0);
            if (temp_v0 != NULL) {
                func_001D7D80(temp_v0, arg4);
                temp_v0_2 = func_001D7A20(temp_v0, &sp50, arg3);
                if ((arg0 != NULL) && (temp_v0_2 != NULL)) {
                    M2C_FIELD(arg0, f32 *, 0xC) = (f32) M2C_FIELD(temp_v0_2, f32 *, 0);
                    M2C_FIELD(arg0, f32 *, 0x10) = (f32) M2C_FIELD(temp_v0_2, f32 *, 4);
                    M2C_FIELD(arg0, f32 *, 0x14) = (f32) M2C_FIELD(temp_v0_2, f32 *, 8);
                    M2C_FIELD(arg0, f32 *, 0x18) = (f32) M2C_FIELD(temp_v0_2, f32 *, 0xC);
                    M2C_FIELD(arg0, s32 *, 0x2C) = 1;
                }
                temp_f0 = func_001D79A0(temp_v0, arg3);
                if (arg0 != NULL) {
                    M2C_FIELD(arg0, f32 *, 0x24) = temp_f0;
                    M2C_FIELD(arg0, s32 *, 0x2C) = 1;
                }
                func_001D7F10(temp_v0);
                return 0;
            }
            return 1;
        }
        goto block_4;
    }
block_4:
    return 1;
}
