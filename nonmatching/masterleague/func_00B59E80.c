/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_00225820();                                /* extern */
s32 func_00229870();                                /* extern */
s32 func_0094C730();                                /* extern */
M2C_UNK func_00955FA0(M2C_UNK);                     /* extern */
M2C_UNK func_00958000(M2C_UNK);                     /* extern */
M2C_UNK func_0095A980();                            /* extern */
s32 func_00984AD0(M2C_UNK, s32);                    /* extern */
s32 func_0099B570(M2C_UNK);                         /* extern */
M2C_UNK func_00B38AA0(u8);                          /* extern */
M2C_UNK func_00B565E0(M2C_UNK);                     /* extern */
s32 func_00B56890();                                /* extern */
s32 func_00B568D0();                                /* extern */
void *func_00B59340();                              /* extern */
extern void *D_003E77B0;
extern void *D_003E7B0C;

s32 func_00B59E80(void) {
    s32 temp_s0;
    s32 temp_s0_2;
    void *temp_v0;

    temp_v0 = func_00B59340();
    if (temp_v0 == NULL) {

    } else if (func_00B56890() & 0xFF) {

    } else if ((((func_00B568D0() & 0xFF) == 8) && (M2C_FIELD(temp_v0, s32 *, 0x70) == 0)) || ((M2C_FIELD(temp_v0, u8 *, 0x8C) == 8) && (M2C_FIELD(temp_v0, s32 *, 0x70) == 1))) {
        func_00B565E0(5);
        M2C_FIELD(temp_v0, s32 *, 0x6C) = 1;
        if (M2C_FIELD(D_003E77B0, u32 *, 0x20) & 8) {
            func_00958000(2);
            func_00B38AA0(M2C_FIELD(D_003E7B0C, u8 *, 0x25));
        } else if ((func_00984AD0(0, func_00225820()) != 0) && (temp_s0 = func_0099B570(0) & 0xFF, (temp_s0 == func_00229870()))) {
            func_0095A980();
            func_00955FA0(0);
        } else if ((func_00984AD0(2, func_00225820()) != 0) && (temp_s0_2 = func_0099B570(2) & 0xFF, (temp_s0_2 == func_00229870()))) {
            func_0095A980();
            func_00955FA0(0);
        } else if (((func_0094C730() & 0xFF) != 0x19) && ((func_0094C730() & 0xFF) != 0x1A)) {
            func_00958000(0);
        }
    } else {
        func_00B565E0(3);
        func_00955FA0(0);
    }
    return 0;
}
