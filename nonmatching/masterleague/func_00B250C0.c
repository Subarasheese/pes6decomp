/* compiler: mwcc-3.0.1b198 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_001C48E8(s16 *, M2C_UNK, M2C_UNK);     /* extern */
s32 func_00221500(s16);                             /* extern */
s32 func_00228960();                                /* extern */
s32 func_0096E440(s16);                             /* extern */
void *func_00970870(s16);                           /* extern */
s32 func_00AFE370(s16);                             /* extern */
extern char D_00B8C760[];

s32 func_00B250C0(s32 arg0) {
    s16 *var_s1;
    s16 var_s2;
    s32 temp_v0;
    s32 temp_v1;
    s32 var_s3;
    void *temp_v0_2;

    if (func_00228960() == 0) {
        return 0;
    }
    func_001C48E8(((void *)D_00B8C760), 0, 0x2714);
    var_s3 = 0;
    var_s2 = 1;
    var_s1 = ((void *)D_00B8C760);
    do {
        temp_v0 = var_s2 & 0xFFFF;
        if ((temp_v0 >= 0x12B1) && (temp_v0 < 0x7000)) {
            var_s2 = 0x7000;
        }
        temp_v1 = var_s2 & 0xFFFF;
        if ((temp_v1 >= 0x7020) && (temp_v1 < 0x8000)) {
            var_s2 = 0x8000 & 0xFFFF;
        }
        if ((func_00AFE370(var_s2) != 0) && (func_0096E440(var_s2) != 0)) {
            temp_v0_2 = func_00970870(var_s2);
            if ((temp_v0_2 != NULL) && (func_00221500(var_s2) != 1) && ((arg0 & 0xFFFF) == (M2C_FIELD(temp_v0_2, u16 *, 0x3C) & 0x1FF))) {
                *var_s1 = var_s2;
                var_s3 += 1;
                var_s1 += 2;
            }
        }
        var_s2 = (var_s2 + 1) & 0xFFFF;
    } while (var_s2 < 0x80B8);
    return var_s3;
}
