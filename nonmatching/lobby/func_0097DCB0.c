/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00213800(void *);
s32 func_009317C0(s32, M2C_UNK);                    /* extern */
s32 func_0097F080();                                /* extern */
M2C_UNK func_0099D030(M2C_UNK);                     /* extern */
extern void *D_00A68FF8;

s32 func_0097DCB0(void) {
    s32 temp_v0;
    s8 var_a0;

    func_0099D030(1);
    temp_v0 = func_009317C0(func_0097F080(), 3);
    if (temp_v0 != 0) {
        func_0099D030(0);
        if (temp_v0 < 0) {
            if (M2C_FIELD(D_00A68FF8, u8 *, 2) == 0) {
                M2C_FIELD(D_00A68FF8, s8 *, 0) = 0;
                var_a0 = 0xC;
                goto block_15;
            }
            M2C_FIELD(D_00A68FF8, s8 *, 4) = 3;
            M2C_FIELD(D_00A68FF8, s8 *, 0) = 0xD;
            return 0;
        }
        if (M2C_FIELD(D_00A68FF8, u8 *, 2) == 0) {
            func_00213800(M2C_FIELD(D_00A68FF8, void **, 8));
            var_a0 = 1;
            M2C_FIELD(D_00A68FF8, s8 *, 0) = 0;
block_15:
            M2C_FIELD(D_00A68FF8, s8 *, 1) = var_a0;
            return 0;
        }
        M2C_FIELD(D_00A68FF8, s8 *, 4) = 3;
        M2C_FIELD(D_00A68FF8, s8 *, 0) = 0xD;
        return 0;
    }
    return 0;
}
