/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002BB8F0(float);
extern void func_002727C0(s32);
extern u8 func_00BF6270(void);
M2C_UNK func_001C48E8(u8 *, M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK func_002BB870(u8, M2C_UNK);                 /* extern */
M2C_UNK func_002BC2B0();                            /* extern */
s8 func_00BBB8C0(M2C_UNK);                          /* extern */
extern char Pes6MatchPlayers[];
extern char D_00591BE4[];
extern char D_00592740[];
extern char D_00CBCB18[];
extern char D_00CBCB28[];
extern char D_00CBCB29[];
extern char D_00CBCB2C[];
extern char D_00CBCB2E[];

void func_00B37370(void) {
    f32 var_f12;
    s32 temp_v1;
    s32 var_a0;
    u32 temp_lo;
    u8 temp_a1;

    (*(s8 *)D_00CBCB2E) = 0;
    func_002727C0(0x13);
    func_001C48E8(((void *)D_00CBCB28), 0, 8);
    func_002BC2B0();
    temp_lo = (u32) (*(u32 *)D_00CBCB18) / (u8) (*(u8 *)D_00591BE4);
    if ((s32) temp_lo < 0) {
        var_f12 = 2.0f * (f32) ((temp_lo >> 1) | (temp_lo & 1));
    } else {
        var_f12 = (f32) temp_lo;
    }
    func_002BB8F0(var_f12);
    (*(s8 *)D_00CBCB2C) = func_00BBB8C0(3);
    temp_a1 = func_00BF6270() & 0xFF;
    if (temp_a1 != 0) {
        temp_v1 = temp_a1 & 0xFF;
        if (temp_v1 < 0x17) {
            if (temp_v1 == 0xFF) {
                var_a0 = 1;
            } else {
                var_a0 = temp_v1 % 23;
            }
            if (M2C_FIELD(M2C_FIELD((((void *)Pes6MatchPlayers) + (var_a0 * 0x240)), void **, 4), u8 *, 0x2C) != 0) {
                (*(u8 *)D_00CBCB28) = temp_a1;
            }
        }
    }
    func_002BB870((*(u8 *)D_00CBCB28), 0x64);
    func_002BB870((*(u8 *)D_00CBCB29), 0x5A);
    (*(s8 *)D_00592740) = 3;
}
