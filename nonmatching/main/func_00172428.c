/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK LSC_CallErrFunc(M2C_UNK *, void *);           /* extern */
extern char D_003CB038[];

s32 func_00172428(void *arg0, s32 arg1) {
    s32 temp_a1;

    if (arg0 == NULL) {
        LSC_CallErrFunc(((void *)D_003CB038), arg0);
        return -1;
    }
    if (arg1 >= 0) {
        if (arg1 < M2C_FIELD(arg0, s32 *, 0x24)) {
            temp_a1 = M2C_FIELD(arg0, s32 *, 0x20) + arg1;
            return M2C_FIELD((((temp_a1 - (((s32) ((temp_a1 < 0) ? (temp_a1 + 0xF) : temp_a1) >> 4) * 0x10)) << 5) + arg0), s32 *, 0x38);
        }
        goto block_7;
    }
block_7:
    LSC_CallErrFunc((M2C_UNK *)0x3CB068, arg0);
    return -1;
}
