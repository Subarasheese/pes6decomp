/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00207D10(void *);
M2C_UNK func_00209A00(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_009BD890(void *);                      /* extern */
u8 func_009C7D90(void *);                           /* extern */
M2C_UNK func_00A02030(void *);                      /* extern */
M2C_UNK func_00A9E2C0(void *, M2C_UNK);             /* extern */

void func_009C6A80(void *arg0) {
    s16 var_v0_2;
    s32 temp_v1;
    s32 var_v0;

    if (M2C_FIELD(arg0, u16 *, 0x18) != 0) {
        if (func_00207D10(M2C_FIELD(arg0, void **, 4)) != 0) {
            func_00A02030(arg0);
        }
    } else {
        func_00209A00(M2C_FIELD(arg0, void **, 4), 0x158, 0);
        M2C_FIELD(M2C_FIELD(arg0, void **, 4), s8 *, 0x2D) = 0;
        M2C_FIELD(arg0, s16 *, 0x1A) = 0x81;
        M2C_FIELD(arg0, s8 *, 0x66) = 0;
        M2C_FIELD(arg0, u16 *, 0x18) = (u16) (M2C_FIELD(arg0, u16 *, 0x18) + 1);
    }
    if ((M2C_FIELD(arg0, u8 *, 0x24) == 0) && !(M2C_FIELD(arg0, s32 *, 0xB0) & 0x100)) {
        temp_v1 = M2C_FIELD(arg0, s32 *, 0xB4);
        if (temp_v1 & 0xA000) {
            var_v0 = (s32) M2C_FIELD(arg0, f32 *, 0xE0);
            if (var_v0 <= 0) {
                var_v0 = -var_v0;
            }
            if (!((f32) var_v0 <= 9881.0f)) {
                var_v0_2 = 0x94;
                goto block_13;
            }
            goto block_10;
        }
block_10:
        if (temp_v1 & 0x4000) {
            M2C_FIELD(arg0, u8 *, 0x48) = func_009C7D90(arg0);
            if (M2C_FIELD(arg0, u8 *, 0x48) != 0) {
                var_v0_2 = 0x92;
block_13:
                M2C_FIELD(arg0, s16 *, 0x1A) = var_v0_2;
            }
        }
    }
    func_009BD890(arg0);
    M2C_FIELD(arg0, s32 *, 0xA0) = (s32) (M2C_FIELD(arg0, s32 *, 0xA0) + 1);
    func_00A9E2C0(arg0, 0);
}
