/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002079F0(void *);
M2C_UNK func_00209A00(void *, M2C_UNK, M2C_UNK);    /* extern */
void **func_00B2A420(s32);                          /* extern */
s32 func_00C37700(u8);                              /* extern */
s32 func_00C37760(u8, M2C_UNK);                     /* extern */
extern char D_00CBCAD1[];

s32 func_00B8B4F0(void *arg0) {
    s32 var_s0;
    void **temp_s0;

    var_s0 = 0;
    switch ((*(u8 *)D_00CBCAD1)) {                           /* irregular */
    case 0x9:
        if (func_00C37700(M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x54)) == 3) {
            if (func_002079F0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4)) != 0) {
                func_00209A00(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0x59B, 0);
                goto block_11;
            }
        } else {
        default:
block_11:
            var_s0 = 1;
        }
        break;
    case 0x72:
        if (func_002079F0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4)) != 0) {
            temp_s0 = func_00B2A420(func_00C37760(M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x54), 1) & 0xFF);
            func_00209A00(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0x59B, 0);
            func_00209A00(M2C_FIELD(*temp_s0, void **, 4), 0x59D, 0);
            goto block_11;
        }
        break;
    }
    return var_s0;
}
