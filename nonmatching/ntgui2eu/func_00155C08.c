/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00158B68();                                /* extern */
M2C_UNK func_00158E78(s32, M2C_UNK, M2C_UNK *, s32); /* extern */
M2C_UNK func_00158EF8(s32, M2C_UNK, s32, s32, s32); /* extern */
M2C_UNK func_00159240(M2C_UNK, s32, s32, s32, s32); /* extern */
s32 func_001596E8(s32);                             /* extern */
M2C_UNK func_0019DB18(M2C_UNK *, M2C_UNK, M2C_UNK *, M2C_UNK *, void *); /* extern */
extern char D_005BE680[];
extern char D_005BEDB0[];
extern char D_005FCD30[];
extern char D_011E20F0[];
extern char D_011E21F0[];
extern char D_011E2200[];
extern char D_011E2204[];
extern char D_011E2208[];
extern char D_011E220C[];

s32 func_00155C08(void *arg0) {
    s32 temp_a1;
    s32 temp_a2;

    if (func_00158B68() != 0) {
        return 0;
    }
    if (func_001596E8(*(s32 *)0x011E21F4) < 0) {
        switch ((*(s32 *)D_011E220C)) {                       /* irregular */
        case 1:
            func_0019DB18(((void *)D_011E20F0), 0x100, ((void *)D_005FCD30), ((void *)D_005BE680), ((void *)D_005BE680) + 0x100);
            func_00158E78((*(s32 *)D_011E21F0), 2, ((void *)D_011E20F0), (*(s32 *)D_011E2200));
            break;
        case 2:
            temp_a2 = (*(s32 *)D_005BEDB0) + ((*(s32 *)D_011E2208) * 0x20C) + 0x10C;
            func_00158EF8((*(s32 *)D_011E21F0), 2, temp_a2, temp_a2, (*(s32 *)D_011E2200));
            break;
        case 3:
            temp_a1 = (*(s32 *)D_005BEDB0) + ((*(s32 *)D_011E2208) * 0x20C) + 0x10C;
            func_00159240(2, temp_a1, temp_a1, (*(s32 *)D_011E2200), (*(s32 *)D_011E2204));
            break;
        }
        M2C_FIELD(arg0, s32 *, 0x18) = 0x155D70;
    }
    return 0;
}
