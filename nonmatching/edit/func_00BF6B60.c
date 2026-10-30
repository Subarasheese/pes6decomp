/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
s32 func_00BCF3A0(M2C_UNK);                         /* extern */
M2C_UNK func_00BF6410(s32, void *);                 /* extern */
extern char D_00CEB700[];
extern char D_00CEB708[];

s32 func_00BF6B60(void) {
    s32 temp_a0;
    s32 var_s1;
    s32 var_s2;
    s32 var_v1;

    var_s2 = 0;
    var_s1 = 0;
    if ((M2C_FIELD(((void *)D_00CEB700), s32 *, 0) != 2) && (func_00BCF3A0(0x1000) != 0)) {
        func_0026E840(0x84028400);
        return 1;
    }
    if (func_00BCF3A0(0x4000) == 0) {
        if (func_00BCF3A0(0x80) == 0) {
            if (func_00BCF3A0(0x400) != 0) {
                var_s2 = 1;
                func_0026E840(0x8400F803);
            }
        } else {
            var_s2 = -1;
            func_0026E840(0x8400F803);
        }
        temp_a0 = M2C_FIELD(((void *)D_00CEB700), s32 *, 8) + var_s2;
        var_v1 = M2C_FIELD(((void *)D_00CEB700), s32 *, 0xC) - 1;
        if (var_v1 < temp_a0) {
            var_v1 = 0;
        } else if (temp_a0 >= 0) {
            var_v1 = temp_a0;
        }
        (*(s32 *)D_00CEB708) = var_v1;
        if (func_00BCF3A0(0x10000) == 0) {
            if (func_00BCF3A0(0x80000) != 0) {
                var_s1 = 1;
                func_0026E840(0x8400F803);
            }
        } else {
            var_s1 = -1;
            func_0026E840(0x8400F803);
        }
        if (var_s1 != 0) {
            func_00BF6410(var_s1, ((void *)D_00CEB700) + 8);
        }
        return 0;
    }
    func_0026E840(0x84008401);
    return 2;
}
