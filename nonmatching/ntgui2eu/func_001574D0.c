/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001586F0(void);
M2C_UNK func_00158A50(s32 *);                       /* extern */
s32 func_00158B68();                                /* extern */
M2C_UNK func_00158F90(M2C_UNK, s32, s32);           /* extern */
extern char D_005BEDAC[];
extern char D_011E37CC[];
extern char D_011E37D0[];
extern char D_011E37D8[];
extern M2C_UNK func_00157570;

s32 func_001574D0(void *arg0) {
    if ((func_001586F0() == 0) && (func_00158B68() == 0)) {
        if ((*(s32 *)D_011E37CC) > 0) {
            (*(s32 *)D_011E37CC) -= 1;
            return 0;
        }
        func_00158A50(((void *)D_011E37CC));
        func_00158F90(1, (*(s32 *)D_005BEDAC) + ((*(s32 *)D_011E37D8) * 0x20C) + 0x10C, (*(s32 *)D_011E37D0));
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = &func_00157570;
        /* Duplicate return node #5. Try simplifying control flow for better match */
        return 0;
    }
    return 0;
}
