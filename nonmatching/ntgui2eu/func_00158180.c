/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00195970(s32 *, s32 *, s32 *, s32 *, M2C_UNK *); /* extern */
M2C_UNK func_001963C0(M2C_UNK, s32 *, s32 *);       /* extern */
M2C_UNK func_001964E0(s32, M2C_UNK, s32 *, s32 *, s32 *); /* extern */
extern char D_005BEDC0[];
extern char D_005BEDC4[];
extern char D_005BEDC8[];
extern char D_011E3914[];
extern char D_011E3918[];
extern char D_011E391C[];
extern char D_011E3920[];
extern char D_011E3924[];
extern char D_011E3928[];
extern char D_011E392C[];
extern char D_011E3930[];
extern char D_011E3934[];

void func_00158180(void) {
    M2C_UNK *var_a4;

    (*(s32 *)D_011E3930) = 0;
    var_a4 = ((void *)D_005BEDC8);
    (*(s32 *)D_011E3918) = 0;
    (*(s32 *)D_011E3934) = 0;
    (*(s32 *)D_005BEDC0) = 0;
    (*(s32 *)D_005BEDC4) = 0;
    M2C_FIELD(((void *)D_011E3914), s32 *, 0) = 0;
    (*(s32 *)D_011E391C) = 0;
    (*(s32 *)D_011E3920) = 0;
    (*(s32 *)D_011E3924) = 0;
    (*(s32 *)D_011E3928) = 0;
    (*(s32 *)D_011E392C) = 0;
    do {
        M2C_FIELD(var_a4, s32 *, 0) = 0;
        M2C_FIELD(var_a4, s32 *, 4) = 0;
        var_a4 += 0xC;
    } while ((s32) var_a4 < (s32) (((void *)D_005BEDC8) + 0x18));
    func_00195970(((void *)D_011E3934), ((void *)D_005BEDC0), ((void *)D_005BEDC4), ((void *)D_011E3918), var_a4);
    func_001964E0(M2C_FIELD(((void *)D_011E3914), s32 *, 0x3914), 0, ((void *)D_011E391C) + 0x391C, ((void *)D_011E3920) + 0x3920, ((void *)D_011E3924) + 0x3924);
    func_001963C0(0, ((void *)D_011E3928) + 0x3928, ((void *)D_011E392C) + 0x392C);
}
