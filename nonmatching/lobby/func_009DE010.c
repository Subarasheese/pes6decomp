/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_002134A0(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_00213540(s32, M2C_UNK);                /* extern */
M2C_UNK func_002136B0(s32, u8);                     /* extern */
M2C_UNK func_008178F0(M2C_UNK);                     /* extern */
M2C_UNK func_00835C40();                            /* extern */
s32 func_009DDC90(void *, void *);                  /* extern */
u8 func_009DDD90(u8, void *);                       /* extern */
M2C_UNK func_009DE830(void *);                      /* extern */
M2C_UNK func_00D13D80(void *, M2C_UNK);             /* extern */
s32 func_00D14030();                                /* extern */
extern void *D_00A7DEC8;

u8 func_009DE010(void) {
    M2C_UNK var_a2;
    s32 temp_v0;
    s32 var_v0;
    u8 temp_a0;

    if (D_00A7DEC8 != NULL) {
        temp_a0 = M2C_FIELD(D_00A7DEC8, u8 *, 0x205);
        switch (temp_a0) {                          /* irregular */
        case 3:
            return M2C_FIELD(D_00A7DEC8, u8 *, 0x206);
        case 2:
            func_00D13D80(D_00A7DEC8 + 4, 0x201);
            temp_v0 = func_00D14030();
            if ((temp_v0 != 1) && (temp_v0 != 2)) {

            } else {
                func_00D13D80(D_00A7DEC8 + 4, 0x201);
                if (M2C_FIELD(D_00A7DEC8, u8 *, 0x208) != 0) {
                    M2C_FIELD(D_00A7DEC8, u8 *, 0x208) = 0U;
                    func_00835C40();
                    func_008178F0(1);
                }
                func_009DE830(D_00A7DEC8 + 4);
                func_00213540(M2C_FIELD(D_00A7DEC8, s32 *, 0), 0);
                if (M2C_FIELD(D_00A7DEC8, s8 *, 4) == 0) {
                    var_a2 = 1;
                } else {
                    var_a2 = 0;
                }
                func_002134A0(M2C_FIELD(D_00A7DEC8, s32 *, 0), 1, var_a2);
                if (M2C_FIELD(D_00A7DEC8, s8 *, 4) != 0) {
                    M2C_FIELD(D_00A7DEC8, u8 *, 0x207) = 1U;
                    func_002136B0(M2C_FIELD(D_00A7DEC8, s32 *, 0), M2C_FIELD(D_00A7DEC8, u8 *, 0x207));
                }
                M2C_FIELD(D_00A7DEC8, u8 *, 0x205) = 0U;
            }
block_35:
            return 0U;
        case 1:
            if (func_009DDC90(D_00A7DEC8 + 4, D_00A7DEC8) != 0) {
                func_009DE830(NULL);
                var_v0 = 1;
            } else {
                var_v0 = 0;
            }
            if (var_v0 != 0) {
                M2C_FIELD(D_00A7DEC8, u8 *, 0x205) = 2U;
                return 0U;
            }
            goto block_35;
        case 0:
            return func_009DDD90(temp_a0, D_00A7DEC8);
        default:
            return 2U;
        }
    } else {
        return 2U;
    }
}
