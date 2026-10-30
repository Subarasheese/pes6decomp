/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_0027CB00();                            /* extern */
M2C_UNK func_008F69C0();                            /* extern */
s32 func_008FCDC0(M2C_UNK);                         /* extern */
s32 func_008FCE70(M2C_UNK);                         /* extern */
s32 func_008FCF00(M2C_UNK);                         /* extern */
extern char D_0090838C[];
extern char D_00908390[];
extern char D_00908398[];
extern char D_0090839C[];
extern char D_009083BC[];

void func_008F7E50(s32 arg0) {
    s32 var_a0;
    s32 var_s0;

    var_s0 = 0 | 0x1E000;
    if ((var_s0 & 0x8000) && (func_008FCE70(1) == 0)) {
        var_s0 &= 0xFFFF7FFF;
    }
    if ((var_s0 & 0x10000) && (func_008FCDC0(1) == 0)) {
        var_s0 &= 0xFFFEFFFF;
    }
    if ((var_s0 & 0x2000) && (func_008FCF00(1) == 0)) {
        var_s0 &= ~0x2000;
    }
    switch (arg0) {                                 /* irregular */
    case 0x10000:
        if (!(arg0 & var_s0)) {
            func_0027CB00();
            (*(s32 *)D_0090838C) = 0;
            (*(s32 *)D_00908390) = 0;
            var_a0 = (*(s32 *)D_009083BC) & ~arg0;
block_26:
            (*(s32 *)D_009083BC) = var_a0;
        }
        return;
    case 0x2000:
        if (!(arg0 & var_s0)) {
            func_008F69C0();
            (*(s32 *)D_00908398) = 0;
            (*(s32 *)D_0090839C) = 0;
            var_a0 = (*(s32 *)D_009083BC) & ~arg0;
            goto block_26;
        }
        break;
    case 0x1000:
        if (!(arg0 & var_s0) && ((*(s32 *)D_009083BC) & arg0)) {
            var_a0 = (*(s32 *)D_009083BC) & ~arg0;
            goto block_26;
        }
        break;
    }
}
