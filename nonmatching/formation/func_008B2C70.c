/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK sprintf(M2C_UNK *, M2C_UNK *, s32, s32); /* extern */
s32 func_001F08B0(M2C_UNK);                         /* extern */
extern s32 D_003EA4D4;
extern s32 D_003EA4D8;
extern s8 D_003EA4DC;
extern char D_008EC9F8[];
extern char D_008EE180[];
extern char D_008EE188[];

void func_008B2C70(s32 arg0, s32 arg1) {
    s32 temp_s1;
    s32 temp_s1_2;
    s32 temp_v1;
    s32 var_v0;
    s32 var_v1;

    temp_v1 = arg0 & 0xFF;
    switch (temp_v1) {                              /* irregular */
    case 5:
        var_v0 = 0x17;
        D_003EA4DC = 1;
        break;
    default:
        var_v0 = 0x21;
        D_003EA4DC = 0;
        break;
    case 6:
        var_v0 = 0x17;
        D_003EA4DC = 0;
        break;
    }
    D_003EA4D8 = var_v0;
    temp_s1 = func_001F08B0(0x670014);
    sprintf(((void *)D_008EE188), ((void *)D_008EC9F8), temp_s1, func_001F08B0(0x670015));
    temp_s1_2 = func_001F08B0(0x670016);
    sprintf(((void *)D_008EE180), ((void *)D_008EC9F8), temp_s1_2, func_001F08B0(0x670017));
    if (arg1 == 0) {
        var_v1 = 0x3F000F;
    } else {
        var_v1 = 0x3F0027;
    }
    D_003EA4D4 = var_v1;
}
