/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00158B68();                                /* extern */
M2C_UNK func_00158E78(s32, M2C_UNK, M2C_UNK *, s32); /* extern */
M2C_UNK func_00158EF8(s32, M2C_UNK, s32, s32, s32); /* extern */
s32 func_001596E8(s32);                             /* extern */
extern char D_005BEDA8[];
extern char D_011E2318[];
extern char D_011E2328[];
extern char D_011E232C[];
extern char D_011E2330[];
extern char D_011E2338[];

s32 func_00156850(void *arg0) {
    s32 temp_a2;

    if (func_00158B68() != 0) {
        return 0;
    }
    if (func_001596E8(*(s32 *)0x011E231C) < 0) {
        switch ((*(s32 *)D_011E2330)) {                       /* irregular */
        case 1:
            func_00158E78((*(s32 *)D_011E2318), 0, ((void *)D_011E2338), (*(s32 *)D_011E2328));
            break;
        case 2:
            temp_a2 = (*(s32 *)D_005BEDA8) + ((*(s32 *)D_011E232C) * 0x20C) + 0x10C;
            func_00158EF8((*(s32 *)D_011E2318), 0, temp_a2, temp_a2, (*(s32 *)D_011E2328));
            break;
        }
        M2C_FIELD(arg0, s32 *, 0x18) = 0x156930;
    }
    return 0;
}
