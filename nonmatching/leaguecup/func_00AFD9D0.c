/* compiler: mwcc-3.0.1b198 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_00AF81F0();                            /* extern */
M2C_UNK func_00AF84F0();                            /* extern */
M2C_UNK func_00AF8E60();                            /* extern */
M2C_UNK func_00AF9010();                            /* extern */
M2C_UNK func_00AF91C0();                            /* extern */
M2C_UNK func_00AF99A0(u8, s32, u16, s32);           /* extern */
M2C_UNK func_00AFAF60();                            /* extern */
M2C_UNK func_00AFDFC0(M2C_UNK);                     /* extern */
s32 func_00B013F0(u8, s32);                         /* extern */
M2C_UNK func_00B01470(u8);                          /* extern */
void *func_00B035D0();                              /* extern */

s32 func_00AFD9D0(void) {
    s32 temp_a0;
    u8 temp_v1;
    void *temp_v0;

    temp_v0 = func_00B035D0();
    if (temp_v0 != NULL) {
        temp_a0 = M2C_FIELD(temp_v0, s32 *, 0x5E4);
        if (temp_a0 != 5) {
            if (M2C_FIELD(temp_v0, u8 *, 0x29F9C) != 1) {
                switch (temp_a0) {                  /* irregular */
                case 7:
                    break;
                case 6:
                    if (M2C_FIELD(temp_v0, s32 *, 0x29F98) == 1) {

                    } else {
                    default:
                        if ((u32) (temp_a0 - 3) >= 2U) {
                            if (M2C_FIELD(temp_v0, s16 *, 0x5CC) == 0) {
                                temp_v1 = M2C_FIELD(temp_v0, u8 *, 0x5C4);
                                if (temp_v1 != (M2C_FIELD(temp_v0, u8 *, 0x29A50) - 1)) {
                                    M2C_FIELD(temp_v0, u8 *, 0x5C4) = (u8) (temp_v1 + 1);
                                } else {
                                    M2C_FIELD(temp_v0, u8 *, 0x5C4) = 0U;
                                }
                                func_0026E840(0x8400F803);
                                func_00AFAF60();
                                func_00B01470(M2C_FIELD(temp_v0, u8 *, 0x5C4));
                                func_00AF99A0(M2C_FIELD(temp_v0, u8 *, 0x5C5), func_00B013F0(M2C_FIELD(temp_v0, u8 *, 0x5C4), (M2C_FIELD(temp_v0, u8 *, 0x5C7) + M2C_FIELD(temp_v0, u8 *, 0x5D0)) & 0xFF) & 0xFFFF, M2C_FIELD(temp_v0, u16 *, 0x5D4), M2C_FIELD(temp_v0, s32 *, 0x5E8));
                                func_00AF9010();
                                func_00AF8E60();
                                if (M2C_FIELD(temp_v0, s32 *, 0x29DF0) == 0) {
                                    func_00AF84F0();
                                } else {
                                    func_00AF81F0();
                                }
                                func_00AF91C0();
                                if ((M2C_FIELD(temp_v0, s32 *, 0x29F98) == 2) && (M2C_FIELD(temp_v0, u8 *, 0x5C4) == 0)) {
                                    M2C_FIELD(temp_v0, s32 *, 0x29F98) = 0;
                                }
                            }
                        } else {
                            func_00AFDFC0(1);
                        }
                    }
                    break;
                }
            }
        }
    }
    return 0;
}
