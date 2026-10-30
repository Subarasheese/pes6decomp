/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


u32 func_009B33A0(void *, s32, s32);                /* extern */
M2C_UNK func_00BBDF00(void *, u8);                  /* extern */
M2C_UNK func_00BD3BA0(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_00BD3CF0(f32, f32);                    /* extern */
M2C_UNK func_00BD4040(void *, M2C_UNK);             /* extern */

void func_00BBEA10(void *arg0) {
    void *temp_a0;
    void *temp_v0;

    temp_v0 = M2C_FIELD(arg0, void **, 0);
    func_00BD3CF0(M2C_FIELD(temp_v0, f32 *, 0x6C), M2C_FIELD(temp_v0, f32 *, 0x70));
    temp_a0 = M2C_FIELD(arg0, void **, 0);
    if (func_009B33A0(temp_a0, (s32) M2C_FIELD(temp_a0, f32 *, 0x6C), (s32) M2C_FIELD(temp_a0, f32 *, 0x70)) < 0x10001U) {
        func_00BBDF00(arg0, M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x4C));
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), s16 *, 0x18) = 0x7A;
        func_00BD4040(arg0, 1);
        func_00BD3BA0(arg0, 3, 1);
    }
}
