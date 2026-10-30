/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_00210DF0();                                /* extern */
void *func_00229380();                              /* extern */
M2C_UNK func_00239FF0();                            /* extern */
M2C_UNK func_00AE4610();                            /* extern */
M2C_UNK func_00AE4960(M2C_UNK);                     /* extern */
M2C_UNK func_00AE4A40(M2C_UNK);                     /* extern */
extern char D_00591C09[];

void func_0097EC20(void) {
    s32 temp_a1;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;

    func_00239FF0();
    if (func_00210DF0() == 1) {
        switch ((*(u8 *)D_00591C09)) {                       /* irregular */
        case 1:
            func_00AE4A40(1);
            func_00AE4610();
            break;
        case 14:
            func_00AE4960(1);
            break;
        }
    }
    temp_v0 = func_00229380();
    if (temp_v0 != NULL) {
        M2C_FIELD(temp_v0, s8 *, 1) = 0;
    }
    temp_v0_2 = func_00229380();
    if (temp_v0_2 != NULL) {
        M2C_FIELD(temp_v0_2, s8 *, 2) = 0;
    }
    temp_v0_3 = func_00229380();
    if (temp_v0_3 != NULL) {
        temp_a1 = 0 & 1;
        M2C_FIELD(temp_v0_3, u8 *, 6) = (u8) ((M2C_FIELD(temp_v0_3, u8 *, 6) & ~1) | temp_a1);
        M2C_FIELD(temp_v0_3, u8 *, 6) = (u8) ((M2C_FIELD(temp_v0_3, u8 *, 6) & ~2) | (temp_a1 * 2));
        M2C_FIELD(temp_v0_3, u8 *, 6) = (u8) ((M2C_FIELD(temp_v0_3, u8 *, 6) & ~4) | (temp_a1 * 4));
        M2C_FIELD(temp_v0_3, u8 *, 6) = (u8) ((M2C_FIELD(temp_v0_3, u8 *, 6) & ~8) | (temp_a1 * 8));
        M2C_FIELD(temp_v0_3, u8 *, 6) = (u8) ((M2C_FIELD(temp_v0_3, u8 *, 6) & ~0x10) | (temp_a1 * 0x10));
        M2C_FIELD(temp_v0_3, u8 *, 6) = (u8) ((M2C_FIELD(temp_v0_3, u8 *, 6) & ~0x20) | (temp_a1 << 5));
        M2C_FIELD(temp_v0_3, u8 *, 6) = (u8) ((M2C_FIELD(temp_v0_3, u8 *, 6) & ~0x40) | (temp_a1 << 6));
    }
}
