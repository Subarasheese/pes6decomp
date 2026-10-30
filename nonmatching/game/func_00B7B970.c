/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00207D10(void *);
M2C_UNK func_00207390(void *, M2C_UNK);             /* extern */
M2C_UNK func_00208610(void *);                      /* extern */
M2C_UNK func_00209A00(void *, M2C_UNK, M2C_UNK);    /* extern */
s32 func_009BAE30(void *);                          /* extern */
s32 func_009E1C90(M2C_UNK);                         /* extern */
s32 func_00A07A50();                                /* extern */
s32 func_00B79380(s32);                             /* extern */
M2C_UNK func_00C1EE80(void *);                      /* extern */

void func_00B7B970(void *arg0) {
    s32 temp_a0_2;
    u16 temp_v1;
    u16 temp_v1_2;
    void *temp_a0;

    if (func_00207D10(M2C_FIELD(arg0, void **, 4)) == 0) {

    } else {
        M2C_FIELD(M2C_FIELD(arg0, void **, 4), s8 *, 0x5B) = 0;
        if ((func_009E1C90(1) & 0xFF) != 1) {
            goto block_6;
        }
        if (M2C_FIELD(arg0, u8 *, 0x10) != 0) {
            M2C_FIELD(arg0, s8 *, 0x16) = 7;
            M2C_FIELD(arg0, s16 *, 0x18) = 0;
block_6:
            temp_a0 = M2C_FIELD(arg0, void **, 4);
            temp_v1 = M2C_FIELD(temp_a0, u16 *, 0x30);
            switch (temp_v1) {                      /* switch 1; irregular */
            case 0x2A3:                             /* switch 1 */
            case 0x2A1:                             /* switch 1 */
                func_00208610(temp_a0);
                func_00207390(M2C_FIELD(arg0, void **, 4), 0xA);
                break;
            case 0x1FD:                             /* switch 1 */
                if (func_009BAE30(arg0) == 0) {
                    func_00209A00(M2C_FIELD(arg0, void **, 4), 0x1BF, 0);
                    func_00207390(M2C_FIELD(arg0, void **, 4), 0xA);
                } else {
                default:                            /* switch 1 */
                    func_00208610(M2C_FIELD(arg0, void **, 4));
                    func_00207390(M2C_FIELD(arg0, void **, 4), 6);
                }
                break;
            }
            temp_v1_2 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0x30);
            switch (temp_v1_2) {                    /* switch 2; irregular */
            case 0x0:                               /* switch 2 */
            case 0x1BF:                             /* switch 2 */
                M2C_FIELD(arg0, s32 *, 0x1C) = 0;
                break;
            case 0x114:                             /* switch 2 */
                M2C_FIELD(arg0, u16 *, 0x28) = (u16) M2C_FIELD(arg0, u16 *, 0x26);
                break;
            }
        } else {
            func_00C1EE80(arg0);
        }
        temp_a0_2 = func_009E1C90(1) & 0xFF;
        if (temp_a0_2 != 1) {
            if (func_00B79380(temp_a0_2) != 0) {
                M2C_FIELD(arg0, s8 *, 0x16) = 0xFD;
                M2C_FIELD(arg0, s16 *, 0x18) = 0;
                return;
            }
            if (func_00A07A50() != 0) {
                if (M2C_FIELD(arg0, u8 *, 0x10) != 0) {
                    M2C_FIELD(arg0, s8 *, 0x16) = 7;
                    M2C_FIELD(arg0, s16 *, 0x18) = 0;
                } else {
                    func_00C1EE80(arg0);
                }
            } else {
                M2C_FIELD(arg0, s8 *, 0x16) = 0;
                M2C_FIELD(arg0, s16 *, 0x18) = 0;
            }
        }
    }
}
