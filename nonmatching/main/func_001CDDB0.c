/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern u8 D_003E7494;
extern u8 D_003E7495;
extern char D_0052AAC0[];
extern char D_0052AAD0[];
extern char D_0052AAD4[];
extern char D_0052AAD5[];

void func_001CDDB0(void) {
    u8 sp1C;
    u8 sp1D;

    sp1C = D_003E7494;
    sp1D = D_003E7495;
    func_001C48E8(((void *)D_0052AAC0), 0, 0x18);
    (*(s32 *)D_0052AAD0) = 0x100;
    (*(u8 *)D_0052AAD4) = 0;
    (*(u8 *)D_0052AAD5) = 0xFF;
    if (&sp1C != NULL) {
        (*(u8 *)D_0052AAD5) = sp1D;
        (*(u8 *)D_0052AAD4) = sp1C;
        (*(s32 *)D_0052AAD0) = (sp1D - sp1C) + 1;
    }
}
