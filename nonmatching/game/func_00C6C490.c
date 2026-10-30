/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001520C0(void);
M2C_UNK func_002562B0(M2C_UNK);                     /* extern */
M2C_UNK func_0027D650(M2C_UNK);                     /* extern */
M2C_UNK func_009A6D50(s32, M2C_UNK, void *, M2C_UNK); /* extern */
s32 func_00BBB7F0(M2C_UNK);                         /* extern */
extern void *Pes6Ball_Current;
extern char D_00591E4C[];
extern char D_00591F38[];
extern char D_005926D8[];
extern char D_005926E4[];
extern char D_00592742[];

void func_00C6C490(s32 arg0) {
    f32 var_f0;
    s32 temp_v0;

    (*(s8 *)D_00591E4C) = 0;
    M2C_FIELD(Pes6Ball_Current, s32 *, 0x74) = func_00BBB7F0(0x800);
    temp_v0 = M2C_FIELD(Pes6Ball_Current, s32 *, 0);
    if ((temp_v0 < 0x1800) && (temp_v0 < 0x800)) {
        M2C_FIELD(Pes6Ball_Current, s32 *, 0) = 0x800;
    }
    if (func_001520C0() != 0) {
        func_002562B0(4);
    }
    func_0027D650(0xD);
    M2C_FIELD(Pes6Ball_Current, s16 *, 0x6A) = 0;
    if ((s32) (*(u8 *)D_005926E4) < 0) {
        var_f0 = 2.0f * (f32) (((u8) (*(u8 *)D_005926E4) >> 1) | ((*(u8 *)D_005926E4) & 1));
    } else {
        var_f0 = (f32) (*(u8 *)D_005926E4);
    }
    (*(f32 *)D_005926D8) = var_f0;
    M2C_FIELD(Pes6Ball_Current, s8 *, 0x67) = 1;
    (*(s32 *)D_00591F38) = 0x7FFF;
    (*(s8 *)D_00592742) = 0;
    func_009A6D50(arg0, 0x7FFF, Pes6Ball_Current, 1);
}
