/* compiler: mwcc-3.0.1b198 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_002F50D0(s32);                         /* extern */
M2C_UNK func_002F59C0(s32);                         /* extern */
M2C_UNK func_002F5A50(s32);                         /* extern */
s32 func_0081EB60(M2C_UNK);                         /* extern */
s32 func_0081EC20(M2C_UNK);                         /* extern */
extern char D_00A7D610[];
extern char D_00A7D618[];
extern char D_00A7D628[];

s32 func_00981480(s32 arg0) {
    s8 sp2C;
    s32 var_s0;
    s32 var_v0;
    s8 *var_v1;

    var_v0 = 4;
    var_v1 = &sp2C;
    if (var_v1 != NULL) {
        do {
            *var_v1 = 0;
            var_v0 -= 1;
            var_v1 += 1;
        } while (var_v0 != 0);
    }
    var_s0 = 0;
    if ((*(s32 *)D_00A7D618) == 1) {
        (*(s32 *)D_00A7D610) = 4;
    }
    switch (arg0) {                                 /* irregular */
    case 3:
        break;
    case 0:
        if (func_0081EC20(0x4000) != 0) {
            (*(s32 *)D_00A7D610) = 4;
            func_0026E840(0x84028400);
block_15:
            var_s0 = 1;
        }
        break;
    case 2:
    case 1:
        if (func_0081EC20(0x1000) != 0) {
            (*(s32 *)D_00A7D610) = 4;
            func_0026E840(0x84008401);
            goto block_15;
        }
        break;
    }
    if (var_s0 != 1) {
        if (func_0081EB60(0x10) == 0) {
            if (func_0081EB60(0x40) != 0) {
                func_002F5A50((*(s32 *)D_00A7D628));
            }
        } else {
            func_002F59C0((*(s32 *)D_00A7D628));
        }
    }
    func_002F50D0((*(s32 *)D_00A7D628));
    return 0;
}
