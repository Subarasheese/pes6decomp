/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s64 func_002BE490(u8, M2C_UNK);                     /* extern */
M2C_UNK func_0097A6D0(void *, u16);                 /* extern */
s32 func_009B30B0(u16, u16);                        /* extern */
M2C_UNK func_00B67AD0(void *);                      /* extern */
M2C_UNK func_00B67B80(void *);                      /* extern */
M2C_UNK func_00BD3BA0(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_00BD4040(void *, M2C_UNK);             /* extern */

void func_00B66700(void *arg0) {
    s64 temp_s1;
    s64 temp_s1_2;
    void *temp_a0;
    void *temp_v0;
    void *temp_v1;

    temp_v0 = M2C_FIELD(arg0, void **, 0);
    if ((func_009B30B0(M2C_FIELD(temp_v0, u16 *, 0x28), M2C_FIELD(temp_v0, u16 *, 0x26)) & 0xFFFF) >= 0x10) {
        temp_a0 = M2C_FIELD(arg0, void **, 0);
        func_0097A6D0(temp_a0, M2C_FIELD(temp_a0, u16 *, 0x26));
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), s16 *, 0x18) = 9;
        return;
    }
    func_00B67B80(arg0);
    temp_v1 = M2C_FIELD(arg0, void **, 0);
    if (M2C_FIELD(temp_v1, s32 *, 0x1C) < 0x801) {
        temp_s1 = (s64) (func_002BE490((M2C_FIELD(temp_v1, u8 *, 0x12) ^ 1) & 0xFF, 1) << 0x30) >> 0x30;
        if ((((s64) (func_002BE490(M2C_FIELD(M2C_FIELD(arg0, void **, 0), u8 *, 0x12), 1) << 0x30) >> 0x30) - temp_s1) < 0) {
            func_00BD4040(arg0, 5);
        } else {
            func_00BD4040(arg0, 3);
        }
        func_00BD3BA0(arg0, 0, 1);
        goto block_14;
    }
    temp_s1_2 = (s64) (func_002BE490((M2C_FIELD(temp_v1, u8 *, 0x12) ^ 1) & 0xFF, 1) << 0x30) >> 0x30;
    if (((((s64) (func_002BE490(M2C_FIELD(M2C_FIELD(arg0, void **, 0), u8 *, 0x12), 1) << 0x30) >> 0x30) - temp_s1_2) < 0) && (M2C_FIELD(M2C_FIELD(arg0, void **, 0), u8 *, 0x10) != 0)) {
        func_00BD4040(arg0, 5);
        func_00BD3BA0(arg0, 0, 1);
block_14:
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), s16 *, 0x18) = 5;
    } else {
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), s8 *, 0x4E) = 0;
        M2C_FIELD(M2C_FIELD(arg0, void **, 4), s8 *, 0x4C) = 0x33;
        func_00B67AD0(arg0);
    }
}
