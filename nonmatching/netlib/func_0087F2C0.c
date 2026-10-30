/* compiler: mwcc-3.0.1b198 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_008028E0(s32);                             /* extern */
s16 *func_008472D0();                               /* extern */
M2C_UNK func_00853B50(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s16, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
s32 func_00858FA0(void *);                          /* extern */
void *func_00858FD0(M2C_UNK *, s16);                /* extern */
s32 func_00884030();                                /* extern */
M2C_UNK func_00B24010(M2C_UNK);                     /* extern */
extern char D_00591DCC[];
extern char D_005926FD[];
extern char D_008B142D[];
extern char D_008B144E[];
extern char D_008B21C0[];

s32 func_0087F2C0(s32 arg0) {
    M2C_UNK var_a0;

    if (func_00858FA0(func_00858FD0(((void *)D_008B21C0), *func_008472D0())) != 1) {
        if (func_00884030() == 1) {

        } else if (arg0 != 0) {

        } else if ((*(u8 *)D_005926FD) != 0) {

        } else if ((func_008028E0((*(s8 *)D_008B144E) & 1) & 0xFF) <= 0) {
            if ((((*(s8 *)D_008B144E) & 1) ^ (*(u8 *)D_00591DCC)) == 0) {
                var_a0 = 1;
            } else {
                var_a0 = 3;
            }
            func_00B24010(var_a0);
        } else {
            M2C_FIELD(func_00858FD0(((void *)D_008B21C0), *func_008472D0()), s8 *, 0x13) = 1;
        }
    } else if ((*(s8 *)D_008B142D) != 0) {

    } else {
        func_00853B50(1, 0x16, 0xA, 0, *func_008472D0(), 9, 0, 0);
    }
    return 0;
}
