/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
s32 func_0081EB60(M2C_UNK);                         /* extern */
s32 func_0081EC20(M2C_UNK);                         /* extern */
s32 func_0093C0C0();                                /* extern */
s32 func_0093CC30();                                /* extern */
s32 func_0093CC60();                                /* extern */
void *func_00969AF0();                              /* extern */
s32 func_00969B90();                                /* extern */
M2C_UNK func_009717C0(M2C_UNK);                     /* extern */
s32 func_009B1990();                                /* extern */
M2C_UNK func_009B4D10(M2C_UNK);                     /* extern */
M2C_UNK func_009B4D20(M2C_UNK);                     /* extern */
s32 func_009B4D50();                                /* extern */
M2C_UNK func_009B4DC0(M2C_UNK, s32);                /* extern */

void func_0096E270(void) {
    s32 temp_s1;
    s32 temp_v0;
    void *temp_s0;

    temp_s0 = func_00969AF0();
    if (func_0081EC20(0x4000) == 0) {
        if (func_0081EC20(0x1000) == 0) {
            if (func_0081EB60(0x10) == 0) {
                if (func_0081EB60(0x40) != 0) {
                    func_009B4DC0(0x40, func_009B1990());
                }
            } else {
                func_009B4DC0(0x10, func_009B1990());
            }
        } else {
            M2C_FIELD(temp_s0, s32 *, 0x18) = 1;
            func_0026E840(0x84008401);
            func_009717C0(3);
        }
    } else {
        temp_v0 = func_009B4D50();
        M2C_FIELD(temp_s0, s32 *, 0x20) = temp_v0;
        switch (temp_v0) {                          /* irregular */
        case 2:
            func_009717C0(2);
            break;
        case 0:
            if (func_0093C0C0() >= 0x1E) {
                func_0026E840(0x8C008005);
                M2C_FIELD(temp_s0, s32 *, 0) = 0x020D0037;
                func_009B4D20(1);
                func_009717C0(4);
            } else {
                temp_s1 = func_0093CC30();
                if (func_0093CC60() < temp_s1) {
                    func_009B4D10(0);
                    func_009717C0(2);
                } else {
                    func_0026E840(0x8C008005);
                    M2C_FIELD(temp_s0, s32 *, 0) = 0x020D002B;
                    func_009B4D20(1);
                    func_009717C0(4);
                }
            }
            break;
        case 1:
            func_009B4D10(0);
            func_009717C0(2);
            break;
        }
        func_0026E840(0x84028400);
    }
    if (func_00969B90() != 0) {
        func_009717C0(3);
        M2C_FIELD(temp_s0, s32 *, 0x18) = 1;
    }
}
