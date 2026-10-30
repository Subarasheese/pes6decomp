/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001E4F30(void *, void *);
M2C_UNK func_001EBF50(void *, void *, f32 *, M2C_UNK); /* extern */
extern char D_00399370[];
extern char D_00399374[];
extern char D_00399378[];
extern char D_0039937C[];

void func_001E2E50(void *arg0) {
    f32 sp30;
    f32 sp34;
    f32 sp38;
    f32 sp3C;
    s8 temp_v0;
    void *var_s0;

    var_s0 = M2C_FIELD(arg0, void **, 8);
    sp30 = (*(f32 *)D_00399370);
    sp34 = (*(f32 *)D_00399374);
    sp38 = (*(f32 *)D_00399378);
    sp3C = (*(f32 *)D_0039937C);
    sp30 = M2C_FIELD(arg0, f32 *, 0x1C);
    sp34 = M2C_FIELD(arg0, f32 *, 0x20);
    sp38 = M2C_FIELD(arg0, f32 *, 0x54);
    M2C_FIELD(arg0, u16 *, 0x46) = 0U;
    do {
        temp_v0 = func_001E4F30(var_s0, &sp30);
        M2C_FIELD(var_s0, s8 *, 0xA6) = temp_v0;
        if (!(temp_v0 & 0xFF)) {

        } else {
            func_001EBF50(var_s0 + 0x50, var_s0 + 0x10, &sp30, 4);
            M2C_FIELD(arg0, u16 *, 0x46) = (u16) (M2C_FIELD(arg0, u16 *, 0x46) + 1);
        }
        var_s0 = M2C_FIELD(var_s0, void **, 0);
    } while (var_s0 != NULL);
}
