/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00158B88(void);
s32 func_00158B68();                                /* extern */
s32 func_00159698(M2C_UNK *, s32, M2C_UNK, M2C_UNK); /* extern */
extern char D_005BDA80[];
extern char D_011E2318[];
extern char D_011E231C[];
extern char D_011E2320[];
extern M2C_UNK func_00156850;

s32 func_001567D0(void *arg0) {
    s32 temp_v0;

    if (func_00158B68() == 0) {
        temp_v0 = func_00158B88();
        (*(s32 *)D_011E2318) = temp_v0;
        if (temp_v0 < 0) {
            (*(s32 *)D_011E2320) = temp_v0;
            return 1;
        }
        (*(s32 *)D_011E231C) = func_00159698(((void *)D_005BDA80), temp_v0, 0x1320, 0);
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = &func_00156850;
        /* Duplicate return node #4. Try simplifying control flow for better match */
        return 0;
    }
    return 0;
}
