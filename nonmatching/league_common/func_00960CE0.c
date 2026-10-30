/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_001B7A60(M2C_UNK);                     /* extern */
M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
s32 func_00225720();                                /* extern */
s32 func_00225820();                                /* extern */
s32 func_00230410();                                /* extern */
M2C_UNK func_002FC740(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_0095FF50();                            /* extern */
M2C_UNK func_00960EA0();                            /* extern */
void *func_009614F0();                              /* extern */
M2C_UNK func_00967F70();                            /* extern */
M2C_UNK func_00967FA0(M2C_UNK);                     /* extern */
M2C_UNK func_0096DC70();                            /* extern */
M2C_UNK func_0097FBA0();                            /* extern */
extern void *D_003E77B0;
extern void *D_003E7B0C;
extern char D_00591DB4[];
extern char D_00591DB5[];

void func_00960CE0(void) {
    u8 temp_s0_2;
    u8 temp_s0_3;
    void *temp_s0;

    func_0096DC70();
    func_0097FBA0();
    func_00960EA0();
    temp_s0 = func_009614F0();
    func_001C48E8(D_003E7B0C, 0, 0x38);
    if (temp_s0 != NULL) {
        func_001C48E8(temp_s0, 0, 2);
    }
    (*(s8 *)D_00591DB5) = 0;
    (*(s8 *)D_00591DB4) = 0;
    func_002FC740(0, 0);
    func_002FC740(1, 0);
    func_0095FF50();
    func_001B7A60(0);
    if ((((M2C_FIELD(D_003E77B0, u32 *, 0) & 2) && (func_00230410() == 1)) || (M2C_FIELD(D_003E77B0, u32 *, 0x20) & 0x10)) && !(M2C_FIELD(D_003E77B0, u32 *, 0x20) & 0x100)) {
        M2C_FIELD(D_003E7B0C, s8 *, 0x2D) = 0;
        if ((M2C_FIELD(D_003E77B0, u16 *, 0x5FC) != 0xFFFF) && ((func_00225720() & 0xFFFF) != 0xFFFF)) {
            temp_s0_2 = M2C_FIELD(D_003E77B0, u8 *, 0x2C);
            if (temp_s0_2 == (func_00225820() & 0xFF)) {
                M2C_FIELD(D_003E7B0C, s8 *, 0x2D) = 0;
            }
            temp_s0_3 = M2C_FIELD(D_003E77B0, u8 *, 0x2D);
            if (temp_s0_3 == (func_00225820() & 0xFF)) {
                M2C_FIELD(D_003E7B0C, s8 *, 0x2D) = 1;
            }
        }
    }
    func_00967F70();
    func_00967FA0(1);
}
