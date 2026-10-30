/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00965090(s32);                             /* extern */
M2C_UNK func_0099D030(M2C_UNK);                     /* extern */
M2C_UNK func_009D7140(s32);                         /* extern */
M2C_UNK func_009D8570(M2C_UNK);                     /* extern */
M2C_UNK func_009D8780(M2C_UNK);                     /* extern */
extern void *D_00A7DD68;

s32 func_009C6FA0(void) {
    s32 temp_s1;
    s32 temp_v0;

    temp_s1 = M2C_FIELD(D_00A7DD68, s32 *, 4);
    func_0099D030(1);
    temp_v0 = func_00965090(temp_s1);
    if (temp_v0 != 0) {
        func_0099D030(0);
        func_009D8780(1);
        if (temp_v0 < 0) {
            M2C_FIELD(D_00A7DD68, s8 *, 0) = 1;
            return 0;
        }
        M2C_FIELD(D_00A7DD68, s8 *, 0) = 3;
        func_009D8570(0);
        func_009D7140(temp_s1);
        goto block_7;
    }
block_7:
    return 0;
}
