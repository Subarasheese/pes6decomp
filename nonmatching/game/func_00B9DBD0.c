/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002079F0(void *);
M2C_UNK func_00BD3CF0(void *, f32, f32);            /* extern */
M2C_UNK func_00BD4040(void *, M2C_UNK);             /* extern */
extern char D_00591BE4[];

void func_00B9DBD0(void *arg0) {
    void *temp_a1;
    void *temp_v0;

    temp_a1 = M2C_FIELD(arg0, void **, 0);
    if ((M2C_FIELD(temp_a1, u8 *, 0x4F) == 0) && (M2C_FIELD(temp_a1, u8 *, 0x50) == 0)) {
        if ((M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x12) == 4) && (func_002079F0(M2C_FIELD(temp_a1, void **, 4)) != 0)) {
            func_00BD4040(arg0, 2);
            M2C_FIELD(M2C_FIELD(arg0, void **, 0), s16 *, 0x18) = 0xC0;
        }
    } else if (M2C_FIELD(temp_a1, u8 *, 0x50) != 0) {
        M2C_FIELD(temp_a1, u8 *, 0x50) = (u8) (M2C_FIELD(temp_a1, u8 *, 0x50) - 1);
    } else {
        M2C_FIELD(temp_a1, u8 *, 0x4F) = (u8) (M2C_FIELD(temp_a1, u8 *, 0x4F) - 1);
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), s8 *, 0x50) = (s8) ((*(u8 *)D_00591BE4) - 1);
    }
    temp_v0 = M2C_FIELD(arg0, void **, 0);
    func_00BD3CF0(arg0, M2C_FIELD(temp_v0, f32 *, 0x6C), M2C_FIELD(temp_v0, f32 *, 0x70));
}
