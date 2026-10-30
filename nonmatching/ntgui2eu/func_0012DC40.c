/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00154BF0(M2C_UNK *, s32 *, s32 *, s32 *, s32 *, s32 *, s32 *, s32 *); /* extern */
M2C_UNK func_0015CFF0(M2C_UNK *);                   /* extern */
extern char D_011D4D60[];
extern char D_011D4D78[];
extern char D_011D4D8C[];
extern char D_011D4D90[];
extern char D_011D4D94[];
extern char D_011D4D98[];
extern char D_011D4D9C[];
extern char D_011D4DA0[];
extern char D_011D4DA4[];
extern char D_011D4DA8[];
extern char D_011D4DAC[];
extern char D_011D4DB0[];

void func_0012DC40(void) {
    (*(s32 *)D_011D4D9C) = 0;
    (*(s32 *)D_011D4DA0) = 0;
    (*(s32 *)D_011D4DA4) = 0;
    (*(s32 *)D_011D4DA8) = 0;
    (*(s32 *)D_011D4DAC) = 0;
    (*(s32 *)D_011D4DB0) = 0;
    (*(s32 *)D_011D4D98) = 0;
    (*(s32 *)D_011D4D94) = 0;
    (*(s32 *)D_011D4D90) = 0;
    (*(s32 *)D_011D4D8C) = 0;
    func_00154BF0(((void *)D_011D4D60), ((void *)D_011D4DA4), ((void *)D_011D4DA8), ((void *)D_011D4DAC), ((void *)D_011D4DB0), ((void *)D_011D4D98), ((void *)D_011D4D94), ((void *)D_011D4D90));
    func_0015CFF0(((void *)D_011D4D78));
}
