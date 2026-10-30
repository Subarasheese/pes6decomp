/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
s32 func_00843C50(u16);                             /* extern */
extern s32 D_003E7814;
extern s32 D_003EA330;
extern char D_008B1F30[];
extern char D_008B2184[];
extern char D_008B218C[];
extern char D_008B21A0[];
extern char D_008B21A2[];

s32 func_00857FA0(void) {
    func_001C48E8(((void *)D_008B1F30), 0, 0x190);
    if (D_003E7814 != -1) {
        return -1;
    }
    D_003E7814 = func_00843C50((*(u16 *)D_008B2184));
    D_003EA330 = 0;
    func_001C48E8(((void *)D_008B218C), 0, 0x30);
    (*(s16 *)D_008B21A2) = 0;
    (*(s16 *)D_008B21A0) = 0;
    return 0;
}
