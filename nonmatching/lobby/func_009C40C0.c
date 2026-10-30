/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0099C7C0(void *);                      /* extern */
void *func_0099C7E0(M2C_UNK);                       /* extern */
s32 func_009C3550(s32);                             /* extern */
extern void *D_00A7DD58;

s32 func_009C40C0(s32 arg0) {
    s32 temp_a1;
    s32 var_a3;

    if (D_00A7DD58 != NULL) {
        return 0;
    }
    D_00A7DD58 = func_0099C7E0(0x70);
    if (func_009C3550(arg0) != 0) {
        var_a3 = 0;
        do {
            temp_a1 = var_a3 * 4;
            var_a3 += 1;
            M2C_FIELD((*(s32 *)0xA7DD58 + temp_a1), s32 *, 0x58) = 1;
        } while (var_a3 < 3);
        switch (arg0) {                             /* irregular */
        case 4:
            break;
        case 0:
            M2C_FIELD(D_00A7DD58, s32 *, 0x68) = 1;
            break;
        case 1:
            M2C_FIELD(D_00A7DD58, s32 *, 0x68) = 1;
block_18:
            M2C_FIELD(D_00A7DD58, s32 *, 0x6C) = 1;
            break;
        case 2:
            M2C_FIELD(D_00A7DD58, s32 *, 0x68) = 1;
            break;
        case 3:
            goto block_18;
        }
        return 1;
    }
    func_0099C7C0(D_00A7DD58);
    D_00A7DD58 = NULL;
    return 0;
}
