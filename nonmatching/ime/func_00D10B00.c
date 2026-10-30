/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7BE0(void *, void *);
extern void func_001D7840(void *, s8);
extern void func_001D7CE0(void *, void *);
M2C_UNK func_0081DB70(s32, u8);                     /* extern */

s32 func_00D10B00(void *arg0) {
    f32 sp20;
    f32 sp24;
    f32 *var_v1;
    s32 var_v0;
    void *temp_a0;

    var_v0 = 0x10;
    var_v1 = &sp20;
    if (var_v1 != NULL) {
        do {
            *var_v1 = 0;
            var_v0 -= 1;
            var_v1 += 1;
        } while (var_v0 != 0);
    }
    if (arg0 != NULL) {
        temp_a0 = M2C_FIELD(arg0, void **, 0x20);
        if ((temp_a0 != NULL) && (M2C_FIELD(arg0, s32 *, 0x24) != 0) && (M2C_FIELD(arg0, s32 *, 0x28) != 0) && (M2C_FIELD(arg0, s32 *, 0x2C) != 0)) {
            if (M2C_FIELD(arg0, s32 *, 4) == 0) {
                func_001D7BE0(temp_a0, &sp20);
                sp20 = M2C_FIELD(arg0, f32 *, 0x30);
                sp24 = M2C_FIELD(arg0, f32 *, 0x34);
                func_001D7CE0(M2C_FIELD(arg0, void **, 0x20), &sp20);
                func_001D7840(M2C_FIELD(arg0, void **, 0x20), (s8) M2C_FIELD(arg0, u8 *, 0x3C));
                func_0081DB70(M2C_FIELD(arg0, s32 *, 0x24), M2C_FIELD(arg0, u8 *, 0x3C));
                func_0081DB70(M2C_FIELD(arg0, s32 *, 0x28), M2C_FIELD(arg0, u8 *, 0x3C));
                func_0081DB70(M2C_FIELD(arg0, s32 *, 0x2C), M2C_FIELD(arg0, u8 *, 0x3C));
            } else if (arg0 != NULL) {
                M2C_FIELD(arg0, s8 *, 0xC) = 0;
                M2C_FIELD(arg0, s8 *, 0x3D) = 1;
                M2C_FIELD(arg0, s8 *, 0x3E) = 1;
            }
        }
        return 0;
    }
    return 1;
}
