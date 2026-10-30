/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001F7F90(void);
extern s32 func_001BB730(void);
extern int func_002DCA30(void);
extern u32 func_0017A670(s32);
M2C_UNK func_0087B6B0();                            /* extern */
M2C_UNK func_00C6E170();                            /* extern */
M2C_UNK func_00C6F4C0();                            /* extern */
M2C_UNK func_00C6F9A0();                            /* extern */
M2C_UNK func_00C707B0();                            /* extern */
M2C_UNK func_00C72500();                            /* extern */
M2C_UNK func_00C77490();                            /* extern */
M2C_UNK func_00C787F0();                            /* extern */
M2C_UNK func_00C7A560();                            /* extern */
M2C_UNK func_00C7BAD0();                            /* extern */
M2C_UNK func_00C7C020();                            /* extern */
M2C_UNK func_00C7CF60();                            /* extern */
M2C_UNK func_00C7D8B0();                            /* extern */
M2C_UNK func_00C7EDA0();                            /* extern */
M2C_UNK func_00C7F4B0();                            /* extern */
M2C_UNK func_00C80530();                            /* extern */
M2C_UNK func_00C81C80();                            /* extern */
M2C_UNK func_00C81FB0();                            /* extern */
M2C_UNK func_00C820A0();                            /* extern */
M2C_UNK func_00C84210();                            /* extern */
M2C_UNK func_00C87680();                            /* extern */
M2C_UNK func_00C87710();                            /* extern */
M2C_UNK func_00C88A10();                            /* extern */
M2C_UNK func_00C88C90();                            /* extern */
M2C_UNK func_00C88D00();                            /* extern */
M2C_UNK func_00C8C1E0();                            /* extern */
M2C_UNK func_00C8CE70();                            /* extern */
M2C_UNK func_00C90290();                            /* extern */
M2C_UNK func_00C91270(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_00C91450(M2C_UNK *, M2C_UNK *, M2C_UNK *); /* extern */
M2C_UNK func_00C91680(M2C_UNK, s32);                /* extern */
M2C_UNK func_00C91F90();                            /* extern */
M2C_UNK func_00C92380();                            /* extern */
M2C_UNK func_00C92560();                            /* extern */
M2C_UNK func_00C93010();                            /* extern */
M2C_UNK func_00C93CF0();                            /* extern */
s32 func_00C99810();                                /* extern */
M2C_UNK func_00C99850(s32);                         /* extern */
s32 func_00C99950();                                /* extern */
extern char D_00591DE1[];
extern char D_00591DE5[];
extern char D_00591DE9[];
extern char D_00591DEE[];
extern char D_00CCD088[];

void func_00C8ADF0(void) {
    if (func_0017A670(0) != 0xC) {
        (*(s32 *)D_00CCD088) = func_001BB730();
        func_001F7F90();
        func_00C7EDA0();
        func_00C7F4B0();
        func_00C787F0();
        func_00C80530();
        func_00C88D00();
        func_00C88C90();
        func_00C92380();
        func_00C87710();
        func_00C87680();
        func_00C84210();
        func_00C91F90();
        func_00C93010();
        func_00C92560();
        func_00C93CF0();
        func_00C707B0();
        func_00C72500();
        func_00C81C80();
        func_00C7D8B0();
        func_00C6E170();
        if (func_00C99810() != 0) {
            func_00C91680(1, (s32) ((*(u16 *)D_00591DEE) & 0x80) >> 7);
        } else {
            func_00C91680(0, (s32) ((*(u16 *)D_00591DEE) & 0x40) >> 6);
        }
        func_00C99850(func_00C99950());
        func_00C90290();
        func_00C91450(((void *)D_00591DE1), ((void *)D_00591DE5), ((void *)D_00591DE9));
        func_00C91270(0, 0);
        func_00C820A0();
        func_00C88A10();
        func_00C7CF60();
        func_00C7BAD0();
        func_00C7C020();
        func_00C7A560();
        func_00C6F9A0();
        func_00C6F4C0();
        if (func_002DCA30() != 0) {
            func_00C77490();
            func_0087B6B0();
        }
        func_00C8C1E0();
        func_00C8CE70();
        func_00C81FB0();
    }
}
