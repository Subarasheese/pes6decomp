/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_008CB0C0(void *);                          /* extern */
M2C_UNK func_008CB0D0(void *, s8);                  /* extern */
M2C_UNK func_008CB5D0(M2C_UNK);                     /* extern */
M2C_UNK func_008D02E0(s32);                         /* extern */
M2C_UNK func_008D03C0(s32, M2C_UNK);                /* extern */
M2C_UNK func_008D0900(void *, s32, s32);            /* extern */
M2C_UNK func_008D0A20(s32);                         /* extern */
M2C_UNK func_008D1EF0(void *, M2C_UNK);             /* extern */

void func_008CD1A0(void *arg0) {
    M2C_UNK (*temp_v1)(s32, u8);
    u8 temp_s1;
    u8 temp_s1_2;

    if (arg0 != NULL) {
        func_008CB5D0(0);
        func_008D03C0(arg0 + 0x480, 5);
        func_008D02E0(arg0 + 0x480);
        func_008D0A20(arg0 + 0x480);
        temp_s1 = M2C_FIELD(arg0, u8 *, 0x15);
        if (temp_s1 != 0) {
            temp_s1_2 = ((temp_s1 - 1) & 0xFF) + 1;
            func_008D0900(arg0 + 0x480, func_008CB0C0(arg0) & 0xFF, temp_s1_2 & 0xFF);
            M2C_FIELD(arg0, u8 *, 0x15) = temp_s1_2;
        }
        func_008CB0D0(arg0, M2C_FIELD(M2C_FIELD(arg0, void **, 0x474), s8 *, 0x21));
        func_008D1EF0(arg0 + 0x480, 1);
        temp_v1 = M2C_FIELD(arg0, M2C_UNK (**)(s32, u8), 0x108);
        if (temp_v1 != NULL) {
            temp_v1(M2C_FIELD(arg0, s32 *, 0x10C), M2C_FIELD(arg0, u8 *, 4));
        }
    }
}
