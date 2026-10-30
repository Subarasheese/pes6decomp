/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s16 func_008440F0(void);
s64 func_00844050(M2C_UNK);                         /* extern */
M2C_UNK func_00846B60();                            /* extern */
M2C_UNK func_00848CA0();                            /* extern */
M2C_UNK func_00850B00();                            /* extern */
M2C_UNK func_00853F40();                            /* extern */
s64 func_00858C40(M2C_UNK);                         /* extern */
extern char D_008B144E[];
extern char D_008B156C[];
extern char D_008B156D[];
extern char D_008B156F[];
extern char D_008B1570[];
extern char D_008B1571[];
extern char D_008B1572[];
extern void *D_00CB3300;

void func_0084FC30(s32 arg0) {
    s32 temp_a0;
    s32 temp_a1;
    s8 var_a0;

    if ((*(u8 *)D_008B156C) == 0) {
        (*(u8 *)D_008B156C) = 1;
        (*(u8 *)D_008B156D) += 1;
        func_008440F0();
        if ((((s64) (func_00858C40(0) << 0x30) >> 0x30) == 1) || (((s64) (func_00844050(1) << 0x30) >> 0x30) != 0)) {
            func_00848CA0();
        }
        func_00850B00();
        func_00853F40();
        if (arg0 == 0) {
            temp_a0 = (*(s8 *)D_008B144E) & 1;
            temp_a1 = M2C_FIELD(D_00CB3300, s16 *, 0x2FC) >= M2C_FIELD(D_00CB3300, s16 *, 8);
            if (temp_a1 == temp_a0) {
                (*(u8 *)D_008B1570) += 1;
                if (M2C_FIELD((((temp_a1 & 0xFF) * 0x2F4) + D_00CB3300), s16 *, 0xC) == 0) {
                    var_a0 = 1;
                } else {
                    var_a0 = 2;
                }
                goto block_14;
            }
            if (temp_a1 == (temp_a0 ^ 1)) {
                (*(u8 *)D_008B1571) += 1;
                if (M2C_FIELD((((temp_a1 & 0xFF) * 0x2F4) + D_00CB3300), s16 *, 0xC) == 0) {
                    var_a0 = 3;
                } else {
                    var_a0 = 4;
                }
block_14:
                (*(s8 *)D_008B156F) = var_a0;
            } else {
                (*(s8 *)D_008B156F) = 5;
                (*(u8 *)D_008B1572) += 1;
            }
            return;
        }
        func_00846B60();
        (*(s8 *)D_008B156F) = 6;
    }
}
