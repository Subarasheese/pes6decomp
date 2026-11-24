/* compiler: mwcc-3.0.1b210 */
#include "types.h"
extern s32 D_003EA4D4, D_003EA4D8;
extern u8 D_003EA4DC;
extern char D_008EE180[], D_008EE188[];
extern const char D_008EC9F8[];
extern const char *func_001F08B0(s32);
extern s32 sprintf(char *, const char *, ...);
void func_008B2C70(u8 mode, s32 option) {
    switch ((u8)mode) {
    case 5:
        D_003EA4DC = 1;
        D_003EA4D8 = 23;
        break;
    case 6:
        D_003EA4DC = 0;
        D_003EA4D8 = 23;
        break;
    default:
        D_003EA4DC = 0;
        D_003EA4D8 = 33;
        break;
    }
    sprintf(D_008EE188, D_008EC9F8, func_001F08B0(0x670014), func_001F08B0(0x670015));
    sprintf(D_008EE180, D_008EC9F8, func_001F08B0(0x670016), func_001F08B0(0x670017));
    if (option)
        D_003EA4D4 = 0x3f0027;
    else
        D_003EA4D4 = 0x3f000f;
}
