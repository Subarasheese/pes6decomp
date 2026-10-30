/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_00639EA0(s8, M2C_UNK);                 /* extern */
extern s16 D_003E9E3C;
extern s16 D_003E9E3E;
extern s32 D_003EA108;
extern char D_0065C250[];
extern char D_0065C254[];
extern char D_0065C258[];
extern char D_0065C25C[];
extern char D_0065C260[];
extern char D_0065C264[];
extern char D_0065C268[];

void func_00628540(s8 arg0) {
    s32 var_v1;

    D_003EA108 = 0;
    func_001C48E8(((void *)D_0065C268), 0, 0xC);
    if ((arg0 & 0xFF) != 0x23) {
        M2C_FIELD(((void *)D_0065C268), u8 *, 0) = 0U;
    } else {
        M2C_FIELD(((void *)D_0065C268), u8 *, 0) = 1U;
    }
    M2C_FIELD(((void *)D_0065C268), s8 *, 1) = arg0;
    M2C_FIELD(((void *)D_0065C268), s8 *, 2) = 1;
    M2C_FIELD(((void *)D_0065C268), s8 *, 3) = 0;
    if ((D_003E9E3C == 0) && (D_003E9E3E == 0)) {
        M2C_FIELD(((void *)D_0065C268), s8 *, 8) = 1;
    } else {
        M2C_FIELD(((void *)D_0065C268), s8 *, 8) = 0;
    }
    (*(s32 *)D_0065C250) = 0;
    if (M2C_FIELD(((void *)D_0065C268), u8 *, 0) != 1) {
        var_v1 = 0x1400;
    } else {
        var_v1 = 0x190C;
    }
    (*(s32 *)D_0065C254) = var_v1;
    (*(s32 *)D_0065C258) = 0;
    (*(s32 *)D_0065C260) = 0x3C4;
    (*(s32 *)D_0065C25C) = 0;
    (*(s32 *)D_0065C264) = 0;
    func_00639EA0(arg0, 0x3C4);
}
