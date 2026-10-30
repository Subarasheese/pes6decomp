/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_0065C2E0[];
extern char D_0065C2E8[];
extern char D_0065C2FC[];
extern char D_0065C307[];

void func_006291B0(s32 arg0, s8 arg1) {
    M2C_FIELD(((void *)D_0065C2E0), s8 *, 0x14) = (s8) ((arg0 & 0xFF) == 0);
    M2C_FIELD(((void *)D_0065C2E0), s8 *, 0xC) = arg1;
    (*(s8 *)D_0065C307) = 1;
    M2C_FIELD(((void *)D_0065C2E0), s8 *, 0xB) = 1;
    (*(s8 *)D_0065C2E8) = 1;
    M2C_FIELD(((void *)D_0065C2E0), s8 *, 8) = 1;
    M2C_FIELD(((void *)D_0065C2E0), s8 *, 0) = 1;
    M2C_FIELD(((void *)D_0065C2E0), s8 *, 5) = 1;
    (*(s8 *)D_0065C2FC) = 1;
    M2C_FIELD(((void *)D_0065C2E0), s8 *, 1) = 1;
    M2C_FIELD(((void *)D_0065C2E0), s8 *, 0) = 1;
    M2C_FIELD(((void *)D_0065C2E0), s8 *, 0x1C) = 1;
}
