/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

u8 *func_00221230(s32);                             /* extern */
M2C_UNK func_002472F0(M2C_UNK *);                   /* extern */
extern char D_003AA1F0[];
extern char D_003AA1F1[];
extern char D_003AA200[];
extern char D_003AA201[];
extern char D_003AA235[];
extern char D_003AA269[];
extern char D_003AA29D[];
extern char D_003AA2D1[];
extern char D_003AA305[];
extern char D_003AA339[];
extern char D_003AA36D[];
extern s8 D_003E7504;
extern s8 D_003E7505;

void func_0024E090(s64 arg0) {
    M2C_UNK *var_s1;
    s32 var_s2;
    s64 temp_s0;
    s8 temp_a0;
    u8 *temp_v0;

    temp_s0 = (s64) (arg0 << 0x38) >> 0x38;
    if (temp_s0 != 0) {
        (*(s8 *)D_003AA1F0) = 1;
        (*(s8 *)D_003AA1F1) = 1;
    } else {
        (*(s8 *)D_003AA1F0) = 1;
    }
    var_s2 = 0;
    var_s1 = ((void *)D_003AA200);
    do {
        temp_v0 = func_00221230(var_s2);
        temp_a0 = M2C_FIELD(temp_v0, s8 *, 2);
        var_s2 += 1;
        M2C_FIELD(var_s1, s8 *, 3) = temp_a0;
        M2C_FIELD(var_s1, u8 *, 2) = (u8) M2C_FIELD(temp_v0, u8 *, 0);
        var_s1 += 0x34;
    } while (var_s2 < 8);
    (*(s8 *)D_003AA201) = 0;
    (*(s8 *)D_003AA235) = 0;
    (*(s8 *)D_003AA269) = 0;
    (*(s8 *)D_003AA29D) = 0;
    (*(s8 *)D_003AA2D1) = 0;
    (*(s8 *)D_003AA305) = 0;
    (*(s8 *)D_003AA339) = 0;
    (*(s8 *)D_003AA36D) = 0;
    if (temp_s0 == 0) {
        (*(s8 *)D_003AA201) = -1;
    } else {
        (*(s8 *)D_003AA201) = -1;
        (*(s8 *)D_003AA235) = 1;
    }
    func_002472F0(((void *)D_003AA200));
    if (temp_s0 != 0) {
        D_003E7504 = 0;
        D_003E7505 = 1;
        return;
    }
    D_003E7504 = 0;
    D_003E7505 = 0;
}
