/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00154250(s32, s32);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_002F50D0(s32);                         /* extern */
M2C_UNK func_002F59C0(s32);                         /* extern */
M2C_UNK func_002F5A50(s32);                         /* extern */
s32 func_0081EB60(M2C_UNK);                         /* extern */
s32 func_0081EC20(M2C_UNK);                         /* extern */
extern char D_00A7DB30[];
extern char D_00A7DB38[];
extern char D_00A7DB48[];

s32 func_0099D9A0(void) {
    s8 sp1C;
    s32 var_v0;
    s8 *var_v1;

    var_v0 = 4;
    var_v1 = &sp1C;
    if (var_v1 != NULL) {
        do {
            *var_v1 = 0;
            var_v0 -= 1;
            var_v1 += 1;
        } while (var_v0 != 0);
    }
    if ((*(s32 *)D_00A7DB38) == 1) {
        (*(s32 *)D_00A7DB30) = 4;
    }
    if (func_0081EC20(0x1000) == 0) {
        if (func_0081EC20(1) == 0) {
            if (func_0081EB60(0x10) == 0) {
                if (func_00154250(0, 0x16) == 0) {
                    if ((func_0081EB60(0x40) != 0) || (func_00154250(0, 0x17) != 0)) {
                        func_002F5A50((*(s32 *)D_00A7DB48));
                    }
                } else {
                    goto block_16;
                }
            } else {
block_16:
                func_002F59C0((*(s32 *)D_00A7DB48));
            }
        } else {
            (*(s32 *)D_00A7DB30) = 4;
            func_0026E840(0x8400F803);
        }
    } else {
        (*(s32 *)D_00A7DB30) = 4;
        func_0026E840(0x8400F803);
    }
    func_002F50D0((*(s32 *)D_00A7DB48));
    return 0;
}
