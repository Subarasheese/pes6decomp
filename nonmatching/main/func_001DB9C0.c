/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_001E62C0(void);
s32 func_001E7D10(void *, M2C_UNK);                 /* extern */
M2C_UNK func_001EBBB0(void *, void *, f32 *, void *, void *, M2C_UNK); /* extern */
s32 func_001F5140(M2C_UNK, u8, u8);                 /* extern */

void func_001DB9C0(void *arg0) {
    f32 sp80;
    f32 sp84;
    f32 sp88;
    s32 sp8C;
    u8 temp_a1;
    void *temp_s6;
    void *var_s4;

    var_s4 = M2C_FIELD(arg0, void **, 0);
    temp_s6 = M2C_FIELD(arg0, void **, 0x20);
    if ((var_s4 != NULL) && ((func_001E62C0() & 2) == 2)) {
        do {
            if ((M2C_FIELD(var_s4, u8 *, 0xDC) != 0) && ((M2C_FIELD(arg0, u8 *, 0x2F) | M2C_FIELD(var_s4, u8 *, 0xDF)) & 1)) {
                sp80 = M2C_FIELD(arg0, f32 *, 0x10) + M2C_FIELD(var_s4, f32 *, 0x20);
                sp84 = M2C_FIELD(arg0, f32 *, 0x14) + M2C_FIELD(var_s4, f32 *, 0x24);
                sp8C = 0x3F800000;
                sp88 = M2C_FIELD(arg0, f32 *, 0x18) + M2C_FIELD(var_s4, f32 *, 0x28);
                func_001EBBB0(var_s4 + 0x70, var_s4 + 0x30, &sp80, var_s4 + 0xC0, var_s4 + 0xD0, 4);
                if (!(M2C_FIELD(var_s4, u8 *, 0xDD) & 1)) {

                } else if (func_001E7D10(var_s4 + 0x70, 0) == 1) {
                    M2C_FIELD(var_s4, u8 *, 0xDD) = (u8) (M2C_FIELD(var_s4, u8 *, 0xDD) | 2);
                }
                M2C_FIELD(var_s4, u8 *, 0xDF) = (u8) (M2C_FIELD(var_s4, u8 *, 0xDF) & 0xFE);
            }
            var_s4 = M2C_FIELD(var_s4, void **, 4);
        } while (var_s4 != NULL);
        M2C_FIELD(arg0, u8 *, 0x2F) = (u8) (M2C_FIELD(arg0, u8 *, 0x2F) & 0xFE);
        if (((s32) M2C_FIELD(arg0, u8 *, 0x2F) >> 1) & 1) {
            temp_a1 = M2C_FIELD(arg0, u8 *, 0x2C);
            M2C_FIELD(temp_s6, s32 *, 0x18) = func_001F5140(1, temp_a1, temp_a1);
            M2C_FIELD(arg0, u8 *, 0x2F) = (u8) (M2C_FIELD(arg0, u8 *, 0x2F) & 0xFD);
        }
        M2C_FIELD(arg0, u8 *, 0x2F) = 0U;
    }
}
