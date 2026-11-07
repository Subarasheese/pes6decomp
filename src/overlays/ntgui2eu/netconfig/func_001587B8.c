/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

extern s32 func_001586F0(void);
M2C_UNK func_001969F0(s32, M2C_UNK);                /* extern */
extern char D_011E3940[];
extern char D_011E3948[];
extern char func_00158758[];

s32 func_001587B8(void *arg0) {
    if (func_001586F0() == 0) {
        if ((*(s32 *)D_011E3940) > 0) {
            (*(s32 *)D_011E3940) -= 1;
            return 0;
        }
        func_001969F0((*(s32 *)D_011E3948), 0);
        M2C_FIELD(arg0, char **, 0x18) = func_00158758;
        /* Duplicate return node #4. Try simplifying control flow for better match */
        return 0;
    }
    return 0;
}
