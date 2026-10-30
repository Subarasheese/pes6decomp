/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0010AE28(M2C_UNK *, M2C_UNK, M2C_UNK, s32, s32); /* extern */
M2C_UNK func_0010AE80(M2C_UNK *, s32, s32);         /* extern */
M2C_UNK func_0010AEE0(M2C_UNK *, s32, s32);         /* extern */
extern s32 D_006025AC;
extern s32 D_006025B0;
extern s32 D_006025B4;
extern char D_011ABAF8[];
extern char D_011AE9D8[];

void func_00103628(void) {
    s32 temp_a2;
    s32 temp_s0;

    M2C_FIELD(((void *)D_011AE9D8), s32 *, 0) = 0x309B;
    temp_s0 = D_006025B0 + D_006025B4;
    M2C_FIELD(((void *)D_011AE9D8), s32 *, 0x28) = 0x309C;
    M2C_FIELD(((void *)D_011AE9D8), s32 *, 4) = 0;
    M2C_FIELD(((void *)D_011AE9D8), s32 *, 0x2C) = 0;
    func_0010AE28(((void *)D_011AE9D8), 2, 0x309C, D_006025B4, D_006025B0);
    temp_a2 = D_006025AC < 2;
    if (D_006025AC != 1) {
        if (temp_a2 == 0) {
            if (D_006025AC == 2) {
                func_0010AE80(((void *)D_011ABAF8), temp_s0, temp_a2);
                return;
            }
            /* Duplicate return node #16. Try simplifying control flow for better match */
            func_0010AE80(((void *)D_011ABAF8), 0, temp_a2);
            return;
        }
        if (D_006025AC == 0) {
            func_0010AEE0(((void *)D_011ABAF8), temp_s0, temp_a2);
            return;
        }
        /* Duplicate return node #16. Try simplifying control flow for better match */
        func_0010AE80(((void *)D_011ABAF8), 0, temp_a2);
        return;
    }
    func_0010AE80(((void *)D_011ABAF8), 0, temp_a2);
}
