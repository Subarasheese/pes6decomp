/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_002DCA10(void);
extern int rand(void);
M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern s32 D_003E77F8;
extern s32 D_003EA28C;
extern s32 D_003EA290;
extern s32 D_003EA294;
extern s32 D_003EA298;
extern s32 D_003EA2AC;
extern s32 D_003EA2B0;
extern s32 D_003EA2B4;
extern s32 D_003EA2B8;
extern s32 D_003EA2BC;
extern s8 D_003EA2C0;
extern s32 D_003EA2C4;
extern M2C_UNK *D_003EA2C8;
extern s32 D_003EA2CC;
extern s16 D_003EA2D0;
extern s16 D_003EA2D4;
extern s16 D_003EA2D8;
extern s32 D_003EA2DC;
extern char D_00888F20[];
extern char D_008AB7F0[];
extern char D_008AB810[];
extern char D_008AF950[];
extern char D_008AF956[];
extern char D_008B09E0[];
extern char D_008B0E20[];

s32 func_00846C50(void) {
    s32 var_s1;
    s8 *var_s0;

    var_s1 = 0;
    var_s0 = ((void *)D_008AF950);
    do {
        *var_s0 = rand();
        var_s1 += 1;
        var_s0 += 1;
    } while (var_s1 < 0x10);
    (*(s8 *)D_008AF956) = 0;
    D_003EA2C0 = 5;
    D_003EA2BC = 0;
    D_003EA28C = 0;
    D_003EA2B8 = 0;
    D_003EA2B4 = 0;
    D_003EA2DC = 0;
    func_001C48E8(((void *)D_008AB7F0), 0, 0x1C);
    func_001C48E8(((void *)D_008B09E0), 0, 0x440);
    func_001C48E8(((void *)D_008B0E20), 0, 0x54);
    func_001C48E8(((void *)D_008AB810), 0, 0x140);
    D_003E77F8 = -1;
    D_003EA2CC = -1;
    D_003EA2C8 = ((void *)D_00888F20);
    D_003EA2D8 = 1;
    D_003EA2C4 = 0;
    D_003EA2AC = 0;
    D_003EA298 = 0;
    D_003EA290 = 0;
    D_003EA294 = 0;
    D_003EA2B0 = 0;
    D_003EA2D4 = 0;
    D_003EA2D0 = 0;
    func_002DCA10();
    return 0;
}
