/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_001C4730(M2C_UNK *, s32, M2C_UNK);     /* extern */
M2C_UNK func_001C48E8(s32 *, M2C_UNK, M2C_UNK);     /* extern */
void *func_00221230(M2C_UNK);                       /* extern */
s32 func_00221280(M2C_UNK, s8 *, s8, s8, u8);       /* extern */
M2C_UNK func_002453F0(s8 *);                        /* extern */
s8 func_008BC880(M2C_UNK);                          /* extern */
s8 func_008BE710(M2C_UNK);                          /* extern */
M2C_UNK func_0094BFA0();                            /* extern */
extern char D_00591C09[];
extern char D_00967F20[];
extern char D_00967F21[];
extern char D_00967F22[];
extern char D_00967F23[];
extern char D_009680C0[];
extern char D_009680C1[];
extern char D_009680C2[];
extern char D_009680C4[];
extern char D_009680C8[];
extern char D_009680D0[];
extern char D_009680D4[];
extern char D_009680D8[];
extern char D_009680E0[];
extern char D_009680E4[];
extern char D_009680E8[];
extern char D_009680EC[];
extern char D_0096816C[];
extern char D_0096816D[];
extern char D_0096816E[];
extern char D_0096816F[];
extern char D_00968184[];

void func_0094E330(void) {
    s32 var_s1;
    s8 *var_s0;
    s8 temp_a2;
    s8 temp_a3;
    u8 temp_a4;
    void *temp_v0;

    func_001C48E8(((void *)D_009680C4), 0, 0x20);
    func_001C48E8(((void *)D_009680EC), 0, 0x80);
    (*(s32 *)D_009680C8) = 0;
    (*(s32 *)D_009680C4) = 0;
    (*(s32 *)D_009680D8) = 0;
    (*(s32 *)D_009680D4) = 0;
    (*(s32 *)D_009680D0) = 0;
    (*(s32 *)D_009680E0) = 0;
    (*(s8 *)D_009680E4) = 0;
    (*(s32 *)D_009680E8) = 0;
    (*(s8 *)D_009680C1) = 0xFF;
    (*(s8 *)D_009680C2) = 0;
    (*(s8 *)D_00967F23) = 0;
    (*(s8 *)D_00967F22) = 1;
    if ((*(u8 *)D_00591C09) == 2) {
        (*(s8 *)D_00967F20) = func_008BC880(3);
        (*(s8 *)D_009680C0) = func_008BC880(2);
        (*(s8 *)D_00967F21) = func_008BC880(6);
        (*(s8 *)D_00967F22) = func_008BC880(7);
        if ((func_008BC880(1) == 6) || (func_008BC880(1) == 0)) {
            goto block_6;
        }
    } else {
        (*(s8 *)D_00967F20) = 2;
        (*(s8 *)D_009680C0) = func_008BE710(3);
        (*(s8 *)D_00967F21) = func_008BE710(5);
        (*(s8 *)D_00967F22) = func_008BE710(6);
        if (func_008BE710(1) == 5) {
block_6:
            (*(s8 *)D_00967F23) = 1;
        }
    }
    func_0094BFA0();
    var_s1 = 0;
    var_s0 = ((void *)D_00967F20);
    do {
        func_001C48E8((s32 *) (var_s0 + 0x24C), 0, 0x80);
        M2C_FIELD(var_s0, s8 *, 0x24C) = 6;
        M2C_FIELD(var_s0, s8 *, 0x24E) = 0;
        M2C_FIELD(var_s0, s8 *, 0x24D) = 0;
        M2C_FIELD(var_s0, s8 *, 0x24F) = 0xA;
        func_002453F0(var_s0 + 0x264);
        func_001C48E8((s32 *) (var_s0 + 0x2A8), 0, 0x20);
        var_s1 += 1;
        var_s0 += 0x80;
    } while (var_s1 < 0x20);
    temp_v0 = func_00221230(0);
    temp_a4 = M2C_FIELD(temp_v0, u8 *, 0);
    (*(u8 *)D_0096816C) = temp_a4;
    temp_a3 = M2C_FIELD(temp_v0, s8 *, 2);
    (*(s8 *)D_0096816E) = temp_a3;
    temp_a2 = M2C_FIELD(temp_v0, s8 *, 1);
    (*(s8 *)D_0096816D) = temp_a2;
    (*(s8 *)D_0096816F) = M2C_FIELD(temp_v0, s8 *, 3);
    func_001C4730(((void *)D_00968184), func_00221280(0, ((void *)D_0096816D), temp_a2, temp_a3, temp_a4), 0x36);
}
