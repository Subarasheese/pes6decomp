/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00158B88(void);
M2C_UNK func_00134FB0(s32);                         /* extern */
s32 func_00158B68();                                /* extern */
extern char D_005BEDAC[];
extern char D_005BEDB8[];
extern char D_011E3908[];
extern M2C_UNK func_00157FA0;

s32 func_00157F30(void *arg0) {
    s32 temp_v0;

    if (func_00158B68() == 0) {
        temp_v0 = func_00158B88();
        (*(s32 *)D_011E3908) = temp_v0;
        if (temp_v0 < 0) {
            func_00134FB0((*(s32 *)D_005BEDAC));
            (*(s32 *)D_005BEDAC) = 0;
            (*(s32 *)D_005BEDB8) = 0;
            return 1;
        }
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = &func_00157FA0;
        /* Duplicate return node #4. Try simplifying control flow for better match */
        return 0;
    }
    return 0;
}
