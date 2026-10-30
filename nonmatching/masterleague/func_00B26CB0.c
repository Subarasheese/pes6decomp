/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_001C48E8(s16 *, M2C_UNK, M2C_UNK);     /* extern */
s32 func_00221500(s16);                             /* extern */
void *func_00228960();                              /* extern */
s32 func_0096E440(s16);                             /* extern */
u8 *func_00970870(s16);                             /* extern */
s32 func_00AFE370(s16);                             /* extern */
s32 func_00B25210(s16);                             /* extern */
s32 func_00B25340(s16);                             /* extern */
s32 func_00B25460(s16);                             /* extern */
s32 func_00B257E0(s16);                             /* extern */
s32 func_00B265F0(s16);                             /* extern */
s32 func_00B26700(s16);                             /* extern */
s32 func_00B26810(s16);                             /* extern */
s32 func_00B26C10(s16);                             /* extern */
s32 func_00B275D0(M2C_UNK);                         /* extern */
extern char D_00B8C760[];

s32 func_00B26CB0(void) {
    s16 *var_s0;
    s16 var_s1;
    s32 temp_v0;
    s32 temp_v1;
    s32 var_s2;
    s32 var_v0;
    u8 *temp_v0_3;
    void *temp_v0_2;

    if (func_00228960() == NULL) {
        return 0;
    }
    func_001C48E8(((void *)D_00B8C760), 0, 0x2714);
    var_s2 = 0;
    var_s1 = 1;
    var_s0 = ((void *)D_00B8C760);
    do {
        temp_v0 = var_s1 & 0xFFFF;
        if ((temp_v0 >= 0x12B1) && (temp_v0 < 0x7000)) {
            var_s1 = 0x7000;
        }
        temp_v1 = var_s1 & 0xFFFF;
        if ((temp_v1 >= 0x7020) && (temp_v1 < 0x8000)) {
            var_s1 = 0x8000 & 0xFFFF;
        }
        if ((func_00970870(var_s1) != NULL) && (func_00221500(var_s1) != 1) && (func_00AFE370(var_s1) != 0) && (func_0096E440(var_s1) != 0) && (func_00B26C10(var_s1) != 0) && (func_00B26810(var_s1) != 0) && (func_00B26700(var_s1) != 0) && (func_00B265F0(var_s1) != 0)) {
            temp_v0_2 = func_00228960();
            if (temp_v0_2 == NULL) {
                var_v0 = 0;
            } else {
                temp_v0_3 = func_00970870(var_s1);
                if (temp_v0_3 == NULL) {
                    var_v0 = 0;
                } else if (func_00B275D0(4) != 2) {
                    if (M2C_FIELD(temp_v0_2, u8 *, 0x58) != (*temp_v0_3 & 1)) {
                        var_v0 = 0;
                    } else {
                        var_v0 = 1;
                    }
                } else {
                    var_v0 = 1;
                }
            }
            if ((var_v0 != 0) && (func_00B257E0(var_s1) != 0) && (func_00B25460(var_s1) != 0) && (func_00B25340(var_s1) != 0) && (func_00B25210(var_s1) != 0)) {
                *var_s0 = var_s1;
                var_s2 += 1;
                var_s0 += 2;
            }
        }
        var_s1 = (var_s1 + 1) & 0xFFFF;
    } while (var_s1 < 0x80B8);
    return var_s2;
}
