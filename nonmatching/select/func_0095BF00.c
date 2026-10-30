/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_00934440(M2C_UNK);                         /* extern */
M2C_UNK func_00934540(M2C_UNK);                     /* extern */
M2C_UNK func_00954F60(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_0095ACB0();                            /* extern */
extern char D_0053C300[];
extern char D_00591BB0[];
extern char D_00591BB2[];
extern char D_00591F2C[];
extern char D_0096CFF0[];
extern char D_0096CFF4[];
extern char D_0096CFF8[];
extern char D_0096CFFC[];
extern char D_0096D000[];
extern char D_0096D004[];
extern char D_0096D008[];
extern char D_0096D00C[];
extern char D_0096D010[];
extern char D_0096D014[];
extern char D_0096D018[];
extern char D_0096D01C[];
extern char D_0096D020[];
extern char D_0096D024[];
extern char D_0096D028[];
extern char D_0096D02C[];
extern char D_0096D180[];
extern char D_0096D181[];
extern char D_0096D182[];
extern char D_0096D183[];
extern char D_0096D184[];
extern char D_0096D188[];
extern char D_0096D1A0[];
extern char D_0096D1A4[];

s32 func_0095BF00(void) {
    func_00934540(0x10390);
    if (func_00934440(0x10390) != 1) {
        return 0;
    }
    if (M2C_FIELD(((void *)D_0053C300), s8 *, 9) != 2) {
        (*(s32 *)D_0096CFF0) = 4;
        (*(s32 *)D_0096CFF4) = 4;
    } else {
        if ((*(u8 *)D_00591F2C) == 3) {
            (*(s32 *)D_0096CFF0) = 1;
            (*(s32 *)D_0096CFF4) = 1;
        } else {
            (*(s32 *)D_0096CFF0) = 1;
            (*(s32 *)D_0096CFF4) = 0;
        }
        (*(s32 *)D_0096D000) = 0xFFFF;
        (*(s32 *)D_0096D010) = 0xFFFF;
        (*(s32 *)D_0096D004) = 0xFFFF;
        (*(s32 *)D_0096D014) = 0xFFFF;
        (*(s32 *)D_0096D008) = 0xFFFF;
        (*(s32 *)D_0096D018) = 0xFFFF;
        (*(s32 *)D_0096D00C) = 0xFFFF;
        (*(s32 *)D_0096D01C) = 0xFFFF;
        (*(s16 *)D_00591BB0) = 0x126;
        (*(s16 *)D_00591BB2) = 0x127;
        func_00954F60(0x10E, 0x126);
        func_00954F60(0x10F, 0x127);
        (*(s32 *)D_0096CFFC) = 0;
        (*(s32 *)D_0096CFF8) = 0;
        (*(s32 *)D_0096D02C) = -1;
        (*(s32 *)D_0096D028) = -1;
        (*(s32 *)D_0096D024) = 0;
        (*(s32 *)D_0096D020) = 0;
    }
    (*(s32 *)D_0096D1A4) = 0;
    (*(s32 *)D_0096D1A0) = 0;
    (*(s8 *)D_0096D181) = 0;
    (*(s8 *)D_0096D180) = 0;
    (*(s8 *)D_0096D183) = 0;
    (*(s8 *)D_0096D182) = 0;
    (*(s32 *)D_0096D188) = 0;
    (*(s32 *)D_0096D184) = 0;
    func_0095ACB0();
    return 1;
}
