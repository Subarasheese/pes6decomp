/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00BF6280(void);
s32 func_009E1C90(M2C_UNK);                         /* extern */
extern s32 Pes6Ball_Current;
extern char D_005924B0[];
extern char D_005926DC[];
extern char D_00CBCDE8[];

s32 func_009BAE30(void *arg0) {
    s32 temp_v1;
    s32 var_v0;
    u16 temp_v1_2;

    if ((s32) (*(u16 *)D_00CBCDE8) > 0) {
        goto block_20;
    }
    temp_v1 = func_009E1C90(1) & 0xFF;
    switch (temp_v1) {                              /* irregular */
    case 1:
        var_v0 = (s32) M2C_FIELD((((*(u8 *)D_005926DC) * 4) + Pes6Ball_Current), f32 *, 0x47C);
        if (var_v0 <= 0) {
            var_v0 = -var_v0;
        }
        if ((f32) var_v0 <= 13529.0f) {
            temp_v1_2 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0x30);
            if ((temp_v1_2 != 0x24C) && (temp_v1_2 != 0x251) && (temp_v1_2 != 0x24F)) {
                return 1;
            }
            goto block_20;
        }
    case 5:
block_20:
        return 0;
    case 12:
        if (func_00BF6280() != 0) {
            goto block_20;
        }
        if (M2C_FIELD(arg0, u8 *, 0x12) == (*(u8 *)D_005924B0)) {
            return 1;
        }
        goto block_20;
    default:
        return 0;
    }
}
