/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_002DF730(s32, M2C_UNK);                /* extern */
M2C_UNK func_002E4200(s32, M2C_UNK);                /* extern */

void func_002EC060(void *arg0, s32 arg1) {
    s32 var_s1_2;
    s32 var_s2;
    void *var_s1;
    void *var_s2_2;

    if (arg1 == 0) {
        var_s2 = 0;
        var_s1 = arg0;
        do {
            func_002DF730(M2C_FIELD(var_s1, s32 *, 0x58), 1);
            var_s2 += 1;
            var_s1 += 4;
        } while (var_s2 < 2);
        func_002DF730(M2C_FIELD(arg0, s32 *, 0x60), 1);
        func_002E4200(M2C_FIELD(arg0, s32 *, 0x64), 1);
        return;
    }
    var_s1_2 = 0;
    var_s2_2 = arg0;
    do {
        func_002DF730(M2C_FIELD(var_s2_2, s32 *, 0x58), 0);
        var_s1_2 += 1;
        var_s2_2 += 4;
    } while (var_s1_2 < 2);
    func_002DF730(M2C_FIELD(arg0, s32 *, 0x60), 0);
    func_002E4200(M2C_FIELD(arg0, s32 *, 0x64), 0);
}
