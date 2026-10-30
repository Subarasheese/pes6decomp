/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_006561B0(M2C_UNK, M2C_UNK, void *);    /* extern */
extern char D_0065EC94[];
extern char D_0065EDC8[];
extern char D_0065EE18[];
extern char D_0065EE19[];
extern char D_0065EE1A[];
extern char D_0065EE1B[];
extern char D_0065EE65[];
extern char D_0065EE78[];

void func_006560C0(s32 arg0, void *arg1) {
    M2C_FIELD(((void *)D_0065EC94), s32 *, 0x10) = 3;
    (*(s32 *)D_0065EDC8) = 0;
    M2C_FIELD(((void *)D_0065EC94), s32 *, 0x14) = arg0;
    (*(s8 *)D_0065EE78) = 1;
    M2C_FIELD(((void *)D_0065EC94), s32 *, 0x18) = 0;
    M2C_FIELD(((void *)D_0065EC94), s32 *, 0x1C) = 1;
    func_006561B0(0, 1, arg1);
    (*(s8 *)D_0065EE78) = 1;
    (*(u8 *)D_0065EE18) = M2C_FIELD(arg1, u8 *, 0);
    (*(u8 *)D_0065EE19) = M2C_FIELD(arg1, u8 *, 1);
    (*(u8 *)D_0065EE1A) = M2C_FIELD(arg1, u8 *, 2);
    (*(u8 *)D_0065EE1B) = M2C_FIELD(arg1, u8 *, 3);
    (*(s8 *)D_0065EE65) = 1;
}
