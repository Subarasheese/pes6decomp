/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
s32 func_0081EB60(M2C_UNK);                         /* extern */
s32 func_0081EC20(M2C_UNK);                         /* extern */
M2C_UNK func_0099E5A0(void *, s32, M2C_UNK);        /* extern */
M2C_UNK func_0099E760(void *, s32, M2C_UNK);        /* extern */

s32 func_0099EC30(void *arg0) {
    s32 temp_s0;
    s32 temp_v1;
    s32 var_s1;
    s32 var_v0;

    var_s1 = 0;
    if (arg0 == NULL) {
        return 5;
    }
    temp_v1 = M2C_FIELD(arg0, s32 *, 0);
    var_v0 = 4;
    temp_s0 = M2C_FIELD(arg0, s32 *, 0x34);
    if ((temp_v1 != 4) && (var_v0 = 3, (temp_v1 != 3)) && (var_v0 = 2, (temp_v1 != 2))) {
        if (temp_v1 == 1) {
            if (func_0081EB60(0x10) == 0) {
                if (func_0081EB60(0x40) != 0) {
                    func_0099E5A0(arg0, M2C_FIELD(arg0, s32 *, 0x34), 3);
                    if (temp_s0 != M2C_FIELD(arg0, s32 *, 0x34)) {
                        var_s1 = 1;
                        func_0026E840(0x8400F802);
                    }
                }
            } else {
                func_0099E760(arg0, M2C_FIELD(arg0, s32 *, 0x34), 3);
                if (temp_s0 != M2C_FIELD(arg0, s32 *, 0x34)) {
                    var_s1 = 1;
                    func_0026E840(0x8400F802);
                }
            }
            if (func_0081EC20(0x4000) == 0) {
                if (func_0081EC20(0x1000) != 0) {
                    if (arg0 == NULL) {
                        var_s1 = 5;
                    } else {
                        if (arg0 != NULL) {
                            if (M2C_FIELD(arg0, s32 *, 0) != 4) {
                                M2C_FIELD(arg0, s8 *, 0x97) = 1;
                            }
                            M2C_FIELD(arg0, s32 *, 0) = 4;
                        }
                        func_0026E840(0x84008401);
                        var_s1 = 0;
                    }
                }
            } else if (arg0 == NULL) {
                var_s1 = 5;
            } else {
                if (arg0 != NULL) {
                    if (M2C_FIELD(arg0, s32 *, 0) != 2) {
                        M2C_FIELD(arg0, s8 *, 0x97) = 1;
                    }
                    M2C_FIELD(arg0, s32 *, 0) = 2;
                }
                func_0026E840(0x84028400);
                var_s1 = 0;
            }
        }
    } else {
        var_s1 = var_v0;
    }
    return var_s1;
}
