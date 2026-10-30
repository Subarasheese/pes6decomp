/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(s32 *, M2C_UNK, M2C_UNK);     /* extern */
extern char D_0050AC80[];
extern char D_0050AC84[];
extern char D_0050AC88[];
extern char D_0050AC8C[];
extern char D_0050ACC0[];
extern char D_0050AD00[];

void func_00146BE0(void) {
    func_001C48E8(((void *)D_0050AC80), 0, 0xC0);
    (*(s32 *)D_0050AC80) = 0;
    (*(s32 *)D_0050AC84) = 0;
    (*(s32 *)D_0050AC88) = 0;
    (*(s32 *)D_0050AC8C) = 0x01000100;
    M2C_FIELD(((void *)D_0050ACC0), s32 *, 0) = 0;
    M2C_FIELD(((void *)D_0050ACC0), s32 *, 0xC) = 0x01000101;
    M2C_FIELD(((void *)D_0050ACC0), s32 *, 4) = 0;
    M2C_FIELD(((void *)D_0050ACC0), s32 *, 8) = 0;
    M2C_FIELD(((void *)D_0050AD00), s32 *, 0xC) = 0x01000102;
    M2C_FIELD(((void *)D_0050AD00), s32 *, 0) = 0;
    M2C_FIELD(((void *)D_0050AD00), s32 *, 4) = 0;
    M2C_FIELD(((void *)D_0050AD00), s32 *, 8) = 0;
}
