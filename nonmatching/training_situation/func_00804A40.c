/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_001D5A10(M2C_UNK);                         /* extern */
M2C_UNK func_001D7840(s32, M2C_UNK);                /* extern */
M2C_UNK func_001D7D60(s32, M2C_UNK);                /* extern */
s32 func_00CE3CD0(s32, M2C_UNK32);                  /* extern */
M2C_UNK func_00CE4030(s32, s32, M2C_UNK, M2C_UNK32 *, M2C_UNK); /* extern */
M2C_UNK func_00CEFE00();                            /* extern */
extern s32 D_003E7E1C;
extern char D_00813D90[];
extern char D_00813D94[];
extern char D_00813D98[];
extern char D_00813D9C[];
extern char D_00813DA0[];
extern char D_00813DA4[];
extern char D_008168E0[];
extern char D_008168E4[];

void func_00804A40(s32 arg0) {
    M2C_UNK32 sp40;
    f32 sp44;
    f32 sp48;
    f32 sp4C;
    f32 sp50;
    f32 sp54;
    M2C_UNK32 *var_s1;
    s32 var_v0;
    u32 var_s2;

    sp40 = (*(M2C_UNK32 *)D_00813D90);
    sp44 = (*(f32 *)D_00813D94);
    sp48 = (*(f32 *)D_00813D98);
    sp4C = (*(f32 *)D_00813D9C);
    sp50 = (*(f32 *)D_00813DA0);
    sp54 = (*(f32 *)D_00813DA4);
    if ((*(s32 *)D_008168E0) == 0) {
        (*(s32 *)D_008168E0) = 1;
        func_00CE4030(func_001D5A10(0x1259B), D_003E7E1C + 8, 6, &sp40, 0);
        var_s2 = 0;
        var_s1 = &sp40;
        do {
            func_001D7840(func_00CE3CD0(D_003E7E1C + 8, *var_s1), 3);
            var_s2 += 1;
            var_s1 += 4;
        } while (var_s2 < 6U);
        switch (arg0) {                             /* irregular */
        case 1:
            var_v0 = func_00CE3CD0(D_003E7E1C + 8, 4);
block_18:
            (*(s32 *)D_008168E4) = var_v0;
            break;
        case 0:
            var_v0 = func_00CE3CD0(D_003E7E1C + 8, 5);
            goto block_18;
        case 3:
            var_v0 = func_00CE3CD0(D_003E7E1C + 8, 1);
            goto block_18;
        case 2:
            (*(s32 *)D_008168E4) = func_00CE3CD0(0xA, 6);
            func_00CEFE00();
            break;
        }
        func_001D7D60(func_00CE3CD0(D_003E7E1C + 8, 0), 1);
        func_001D7D60((*(s32 *)D_008168E4), 1);
    }
}
