/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00158A50();                            /* extern */
M2C_UNK func_00158A60();                            /* extern */
s32 func_0019EC50(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */
s32 func_0019F030(M2C_UNK);                         /* extern */
M2C_UNK func_001AE7D8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern char D_005BEDEC[];
extern char D_011E39A8[];
extern char D_011E39D0[];
extern char D_011E6A00[];

void func_00158858(void) {
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;

    (*(s32 *)D_005BEDEC) = -1;
    func_001AE7D8(((void *)D_011E6A00), 0, 0x100);
loop_4:
    if (func_0019EC50(0x011E3980, 0x80001001, 1) < 0) {
loop_5:
        goto loop_5;
    }
    do {

    } while (func_0019F030(0x011E3980) != 0);
    if (M2C_FIELD((void *)0x011E3980, s32 *, 0x24) != 0) {
loop_13:
        if (func_0019EC50(0x011E39A8, 0x80001002, 1) < 0) {
loop_14:
            goto loop_14;
        }
        do {

        } while (func_0019F030(0x011E39A8) != 0);
        if (M2C_FIELD(((void *)D_011E39A8), s32 *, 0x24) != 0) {
loop_22:
            if (func_0019EC50(0x011E39D0, 0x80001003, 1) < 0) {
loop_23:
                goto loop_23;
            }
            do {

            } while (func_0019F030(0x011E39D0) != 0);
            var_v0 = 0x10000;
            if (M2C_FIELD(((void *)D_011E39D0), s32 *, 0x24) != 0) {
                func_00158A50();
                func_00158A60();
                return;
            }
            do {
                var_v0 -= 1;
            } while (var_v0 != -1);
            goto loop_22;
        }
        var_v0_2 = 0x10000;
        do {
            var_v0_2 -= 1;
        } while (var_v0_2 != -1);
        goto loop_13;
    }
    var_v0_3 = 0x10000;
    do {
        var_v0_3 -= 1;
    } while (var_v0_3 != -1);
    goto loop_4;
}
