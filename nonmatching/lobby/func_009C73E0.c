/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00964C50(void *, void *);                  /* extern */
s32 func_009653D0(void *, void *);                  /* extern */
M2C_UNK func_0099D030(M2C_UNK);                     /* extern */
M2C_UNK func_009C3110();                            /* extern */
extern void *D_00A7DD70;

s32 func_009C73E0(void) {
    s32 var_v0;
    void *temp_a0;

    func_0099D030(1);
    temp_a0 = D_00A7DD70 + 2;
    if (M2C_FIELD(D_00A7DD70, u8 *, 0x4C) == 0) {
        var_v0 = func_00964C50(temp_a0, D_00A7DD70 + 0x43);
    } else {
        var_v0 = func_009653D0(temp_a0, D_00A7DD70 + 0x43);
    }
    if (var_v0 != 0) {
        func_0099D030(0);
        if (var_v0 < 0) {
            if (var_v0 == -0xA) {
                M2C_FIELD(D_00A7DD70, s8 *, 0) = 3;
            } else {
                M2C_FIELD(D_00A7DD70, s8 *, 0) = 2;
            }
            goto block_12;
        }
        func_009C3110();
        return 1;
    }
block_12:
    return 0;
}
