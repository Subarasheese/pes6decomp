/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00207390(void *, M2C_UNK);             /* extern */
M2C_UNK func_00209A00(void *, M2C_UNK, M2C_UNK, u16); /* extern */
s32 func_009B30B0(u16);                             /* extern */
s16 func_00A9DFF0(void *, M2C_UNK);                 /* extern */

s32 func_00A09C00(void *arg0, s16 arg1, s16 arg2) {
    u16 temp_a3;

    if ((func_009B30B0(M2C_FIELD(arg0, u16 *, 0x26)) & 0xFFFF) < 0x50) {
        return 0;
    }
    temp_a3 = M2C_FIELD(arg0, u16 *, 0x26);
    M2C_FIELD(M2C_FIELD(arg0, void **, 4), s8 *, 0x2D) = (s8) (((((arg1 & 0xFFFF) - temp_a3) + 0x10000) & 0xFFFF) >= 0x8001);
    if ((0x1300 - (M2C_FIELD(arg0, u8 *, 0x5C) * 0xC)) >= M2C_FIELD(arg0, s32 *, 0x1C)) {
        func_00209A00(M2C_FIELD(arg0, void **, 4), 0xBB, 4, temp_a3);
    } else {
        func_00209A00(M2C_FIELD(arg0, void **, 4), 0xB7, 4, temp_a3);
    }
    M2C_FIELD(arg0, s32 *, 0x20) = (s32) M2C_FIELD(arg0, s32 *, 0x1C);
    M2C_FIELD(arg0, s16 *, 0x38) = func_00A9DFF0(arg0, 0xB4);
    M2C_FIELD(arg0, s16 *, 0x36) = arg1;
    M2C_FIELD(arg0, s16 *, 0x34) = arg2;
    func_00207390(M2C_FIELD(arg0, void **, 4), 4);
    return 1;
}
