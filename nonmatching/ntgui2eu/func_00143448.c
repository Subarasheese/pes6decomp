/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0012DD30(M2C_UNK, M2C_UNK, M2C_UNK, s32, M2C_UNK *, s32); /* extern */
s32 func_00135080(M2C_UNK, s32);                    /* extern */
M2C_UNK func_00142ED0();                            /* extern */
M2C_UNK func_00143218(M2C_UNK *, void *);           /* extern */
s32 func_00158B68();                                /* extern */
extern char D_005B3700[];
extern char D_005B3730[];
extern char D_005B3744[];
extern char D_005BEDC0[];
extern char D_005BEDC8[];
extern char D_005BEDD4[];
extern char D_011DD7A0[];
extern M2C_UNK func_00141F78;

s32 func_00143448(void) {
    M2C_UNK *var_a0;
    s32 var_a1;
    void *temp_a1;

    if (func_00158B68() == 0) {
        if ((*(s32 *)D_005BEDC0) < 3) {
            if ((*(s32 *)D_005BEDC0) <= 0) {

            } else if ((*(s32 *)0x011DD7A0 == 0) && ((*(s32 *)D_005B3700) & 1) && ((*(s32 *)D_005BEDC8) == 2)) {
                *(s32 *)0x011DD7A0 = 1;
                func_00143218((M2C_UNK *)2, (void *)0x011E0000);
                func_00142ED0();
            } else {
                temp_a1 = (s32 *)0x011E0000 - 0x2860;
                if (M2C_FIELD(temp_a1, s32 *, 4) == 0) {
                    if ((*(s32 *)D_005B3700) & 2) {
                        if ((*(s32 *)D_005BEDD4) == 2) {
                            M2C_FIELD(temp_a1, s32 *, 4) = 1;
                            func_00143218((M2C_UNK *)2, temp_a1);
                            func_00142ED0();
                        }
                    }
                }
            }
        } else if ((*(s32 *)D_005BEDC0) == 3) {
            var_a0 = ((void *)D_011DD7A0);
            var_a1 = 0;
            if (M2C_FIELD(((void *)D_011DD7A0), s32 *, 0) != 0) {
                if ((*(s32 *)D_005B3700) & 1) {
                    var_a0 = ((void *)D_011DD7A0);
                    goto block_11;
                }
                M2C_FIELD(((void *)D_011DD7A0), s32 *, -0x2860) = 0;
                goto block_14;
            }
            var_a0 = ((void *)D_011DD7A0) - 0x2860;
block_11:
            if (M2C_FIELD(var_a0, s32 *, 4) != 0) {
                if (!((*(s32 *)D_005B3700) & 2)) {
                    M2C_FIELD(var_a0, s32 *, 4) = 0;
block_14:
                    func_00143218(var_a0, NULL);
                    func_00142ED0();
                    var_a1 = 1;
                }
            }
            if (*(s32 *)0x5BD300 != -1) {
                if (var_a1 != 0) {
                    func_0012DD30(2, 0x1F4, 0xFA, func_00135080(0x49, var_a1), &func_00141F78, (*(s32 *)D_005B3744));
                    (*(s32 *)D_005B3730) = 1;
                }
            }
        }
        *(s32 *)0x5BEDEC = -1;
    }
    return 0;
}
