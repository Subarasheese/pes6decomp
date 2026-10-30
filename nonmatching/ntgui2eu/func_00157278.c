/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00158B68();                                /* extern */
M2C_UNK func_00158E78(s32, M2C_UNK, M2C_UNK *, s32); /* extern */
M2C_UNK func_00158EF8(s32, M2C_UNK, s32, M2C_UNK *, s32, s32); /* extern */
M2C_UNK func_00159240(M2C_UNK, s32, M2C_UNK *, s32, s32, s32); /* extern */
s32 func_001596E8(s32);                             /* extern */
extern char D_005BEDAC[];
extern char D_011E37C0[];
extern char D_011E37D0[];
extern char D_011E37D4[];
extern char D_011E37D8[];
extern char D_011E37DC[];
extern char D_011E37E0[];

s32 func_00157278(void *arg0) {
    s32 temp_a5;
    s32 temp_a5_2;

    if (func_00158B68() != 0) {
        return 0;
    }
    if (func_001596E8(*(s32 *)0x011E37C4) < 0) {
        switch ((*(s32 *)D_011E37DC)) {                       /* irregular */
        case 1:
            func_00158E78((*(s32 *)D_011E37C0), 1, ((void *)D_011E37E0), (*(s32 *)D_011E37D0));
            break;
        case 2:
            temp_a5 = (*(s32 *)D_011E37D8) * 0x20C;
            func_00158EF8((*(s32 *)D_011E37C0), 1, (*(s32 *)D_005BEDAC) + temp_a5 + 0x10C, ((void *)D_011E37E0), (*(s32 *)D_011E37D0), temp_a5);
            break;
        case 3:
            temp_a5_2 = (*(s32 *)D_011E37D8) * 0x20C;
            func_00159240(1, (*(s32 *)D_005BEDAC) + temp_a5_2 + 0x10C, ((void *)D_011E37E0), (*(s32 *)D_011E37D0), (*(s32 *)D_011E37D4), temp_a5_2);
            break;
        }
        M2C_FIELD(arg0, s32 *, 0x18) = 0x1573C0;
    }
    return 0;
}
