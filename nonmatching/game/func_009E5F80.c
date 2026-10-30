/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_002DCA30(void);
M2C_UNK func_00849DA0();                            /* extern */
M2C_UNK func_0099B4F0();                            /* extern */
M2C_UNK func_009E1D30(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_009E3990();                            /* extern */
s32 func_00BBB8C0(M2C_UNK, M2C_UNK *, u8, s32, s32, s32); /* extern */
M2C_UNK func_00BF4000(M2C_UNK);                     /* extern */
extern char D_00591A90[];
extern char D_00591E14[];
extern char D_00591F24[];
extern char Pes6MatchSquads[];
extern char D_00CBBDF0[];
extern char D_00CBBDF1[];
extern char D_00CBBDF2[];
extern char D_00CBBDF3[];
extern char D_00CBBDF4[];
extern char D_00CBBDF6[];
extern char D_00CBBDF7[];
extern char D_00CBBDFB[];
extern char D_00CBBDFC[];
extern char D_00CBBDFD[];
extern char D_00CBBDFE[];
extern char D_00CBBE00[];
extern char D_00CBBE06[];
extern char D_00CBBE07[];
extern char D_00CBBE08[];
extern char D_00CBBE09[];
extern char D_00CBCDE8[];

void func_009E5F80(void) {
    M2C_UNK *var_a0;
    M2C_UNK *var_a1;
    s32 var_a3;
    s32 var_a4;
    s32 var_a5;
    u8 var_a2;

    (*(s8 *)D_00591F24) = 8;
    var_a5 = 0;
    (*(s32 *)D_00591E14) = 0;
    (*(s16 *)D_00CBCDE8) = 0;
    (*(s8 *)D_00CBBDF0) = 0;
    (*(s8 *)D_00CBBDF2) = 0;
    (*(s8 *)D_00CBBDF1) = 0;
    (*(s8 *)D_00CBBDFD) = 0;
    (*(s8 *)D_00CBBDF6) = 0;
    (*(s8 *)D_00CBBDF7) = 0;
    (*(s8 *)D_00CBBE00) = 0xFF;
    var_a1 = ((void *)Pes6MatchSquads);
    (*(s8 *)D_00CBBDFB) = 0;
    var_a0 = ((void *)D_00591A90);
    (*(s8 *)D_00CBBDFC) = 0;
    (*(s8 *)D_00CBBDF3) = 0;
    (*(s8 *)D_00CBBDF4) = 0;
    (*(s8 *)D_00CBBE07) = 0;
    (*(s8 *)D_00CBBE08) = 0;
    (*(s8 *)D_00CBBE09) = 0;
    (*(u8 *)D_00CBBDFE) = 0xB;
    var_a2 = (*(u8 *)D_00CBBDFE);
    do {
        var_a3 = 0;
        var_a4 = 0;
loop_2:
        if (M2C_FIELD((var_a1 + (M2C_FIELD((var_a0 + var_a4), u8 *, 7) * 0x348)), u8 *, 0xD4) != 0) {
            var_a3 += 1;
        }
        var_a4 += 1;
        if (var_a4 < 0xB) {
            goto loop_2;
        }
        if (var_a3 < (var_a2 & 0xFF)) {
            var_a2 = var_a3 & 0xFF;
        }
        var_a5 += 1;
        var_a1 += 0x6900;
        var_a0 += 0x8B;
    } while (var_a5 < 2);
    (*(u8 *)D_00CBBDFE) = var_a2;
    (*(s8 *)D_00CBBE06) = 1;
    if (func_00BBB8C0(3, var_a1, var_a2, var_a3, var_a4, var_a5) > 0) {
        (*(s8 *)D_00CBBE06) = -1;
    }
    func_009E3990();
    if (func_002DCA30() != 0) {
        func_00849DA0();
    }
    func_0099B4F0();
    func_00BF4000(0);
    func_009E1D30(2, 1);
}
