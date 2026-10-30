/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern f32 func_001D79A0(void *, u16);
extern void func_001D7D80(void *, s16);
M2C_UNK func_001D7A20(void *, M2C_UNK32 *, M2C_UNK); /* extern */
s32 func_008B9B70(s32, M2C_UNK32 *, M2C_UNK);       /* extern */
s32 func_008B9F90(s32, M2C_UNK32 *, f32);           /* extern */
void *func_008C1490(M2C_UNK, M2C_UNK32 *);          /* extern */

void func_008C2F00(void *arg0) {
    M2C_UNK32 sp30;
    M2C_UNK32 sp34;
    s32 sp38;
    M2C_UNK32 sp40;
    M2C_UNK32 sp44;
    s32 sp48;
    s32 sp4C;
    s32 temp_s0;
    void *temp_a0;
    void *temp_v0;

    temp_a0 = M2C_FIELD(arg0, void **, 0x5C);
    if (temp_a0 != NULL) {
        if (M2C_FIELD(arg0, s32 *, 0x18) == 0) {
            return;
        }
        if (M2C_FIELD(arg0, void **, 0x60) == NULL) {
            if (M2C_FIELD(arg0, s32 *, 0x54) != 0) {
                return;
            }
            func_001D7A20(temp_a0, &sp40, 0x22);
            sp38 = 0;
            sp30 = sp40;
            sp34 = sp44;
            temp_v0 = func_008C1490(0xC, &sp30);
            M2C_FIELD(arg0, void **, 0x60) = temp_v0;
            func_001D7D80(temp_v0, 2);
            sp40 = 0;
            sp44 = 0;
            sp48 = 0;
            sp4C = 0;
            temp_s0 = func_008B9F90(M2C_FIELD(arg0, s32 *, 0x18), &sp40, func_001D79A0(M2C_FIELD(arg0, void **, 0x5C), 0x22U));
            func_001D7A20(M2C_FIELD(arg0, void **, 0x60), &sp40, 0x55);
            M2C_FIELD(arg0, s32 *, 0x54) = func_008B9B70(temp_s0, &sp40, 0);
        }
    }
}
