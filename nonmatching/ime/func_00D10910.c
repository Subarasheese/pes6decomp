/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001BBC60(s32);
extern int func_003637B0(void);
s32 func_001BBEC0(M2C_UNK *, M2C_UNK *, M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
M2C_UNK func_001D5F80(M2C_UNK);                     /* extern */
extern char D_00D1F810[];
extern char D_00D376C8[];
extern char D_00D376D0[];
extern char D_00D376D8[];
extern char D_00D376E0[];
extern char D_00D376E8[];
extern char D_00D376F0[];
extern char D_00D37700[];
extern char D_00D37720[];
extern char D_00D37724[];
extern char D_00D37728[];
extern char D_00D3772C[];
extern char D_00D37730[];
extern char D_00D3776B[];
extern char D_00D3776C[];
extern char D_00D3776D[];
extern char D_00D3776E[];
extern char D_00D3776F[];
extern char D_00D37770[];
extern char D_00D37771[];
extern char D_00D37772[];
extern char D_00D37773[];
extern char D_00D37774[];
extern char D_00D37775[];
extern char D_00D377DC[];
extern char D_00D377E0[];
extern char D_00D377E4[];
extern char D_00D377E8[];
extern char D_00D377EC[];
extern char D_00D377ED[];
extern char D_00D377F0[];
extern M2C_UNK func_00D0CDD0;
extern M2C_UNK func_00D0EAF0;
extern M2C_UNK func_00D0EB60;
extern M2C_UNK func_00D0F420;

s32 func_00D10910(void) {
    s32 *temp_v0;
    s32 temp_v0_2;
    s32 var_a1;

    if ((*(s32 *)D_00D376E0) == 1) {
        return 0;
    }
    if (((*(s32 *)D_00D376D0) != 0) || ((*(s32 *)D_00D376D8) == 1)) {
        return 0;
    }
    (*(s32 *)D_00D376F0) = 0;
    var_a1 = 0;
    (*(s8 *)D_00D3776B) = 0;
    (*(s32 *)D_00D37720) = 0;
    (*(s8 *)D_00D3776C) = 0;
    (*(s8 *)D_00D3776D) = 0;
    (*(s8 *)D_00D37771) = 0;
    (*(s8 *)D_00D37772) = 0;
    (*(s8 *)D_00D37773) = 0;
    (*(s8 *)D_00D37774) = 0;
    (*(s8 *)D_00D37775) = 0;
    (*(s8 *)D_00D3776E) = 0;
    (*(s32 *)D_00D37724) = 0;
    (*(s8 *)D_00D3776F) = 0;
    (*(s8 *)D_00D37770) = 0;
    (*(s32 *)D_00D37728) = 0;
    (*(s32 *)D_00D3772C) = 0;
    (*(s32 *)D_00D37730) = 9;
    (*(s8 *)D_00D377EC) = 0;
    (*(s8 *)D_00D377ED) = 0;
    (*(s32 *)D_00D377F0) = 1;
    (*(s32 *)D_00D377DC) = 0;
    (*(s32 *)D_00D377E0) = 0;
    (*(s32 *)D_00D377E4) = 0;
    (*(s32 *)D_00D377E8) = 0;
    do {
        temp_v0 = ((void *)D_00D37700) + (var_a1 * 8);
        var_a1 += 1;
        *temp_v0 = 0x18;
    } while (var_a1 < 4);
    temp_v0_2 = func_001BBEC0(&func_00D0F420, &func_00D0EB60, &func_00D0EAF0, 0, 0, ((void *)D_00D1F810));
    (*(s32 *)D_00D376D0) = temp_v0_2;
    if (temp_v0_2 == 0) {
        (*(s32 *)D_00D376E8) = 0;
        return 0;
    }
    (*(s32 *)D_00D376E8) = 0;
    func_001BBC60(temp_v0_2);
    (*(s32 *)D_00D376E0) = 1;
    (*(s32 *)D_00D376D8) = 1;
    func_001D5F80(0x103A1);
    if (func_003637B0() != &func_00D0CDD0) {
        (*(s32 *)D_00D376C8) = func_003637B0();
    }
    return 1;
}
