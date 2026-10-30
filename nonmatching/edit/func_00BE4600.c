/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_001C4698(void *, s32, M2C_UNK);            /* extern */
M2C_UNK func_001C4730(s32, void *, M2C_UNK);        /* extern */
M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK sprintf(M2C_UNK *, s32, s32);         /* extern */
s32 func_001F08B0(M2C_UNK);                         /* extern */
s32 func_00222AB0(s32);                             /* extern */
s32 func_00228710(s32);                             /* extern */
M2C_UNK func_00BC3FB0(M2C_UNK);                     /* extern */
s32 func_00BC4F70(M2C_UNK, M2C_UNK);                /* extern */
s32 func_00BC4F80(M2C_UNK, M2C_UNK *);              /* extern */
M2C_UNK func_00C1B380(M2C_UNK);                     /* extern */
extern M2C_UNK *D_003EB058;
extern s32 D_003EB05C;
extern s32 D_003EB060;
extern char D_00CBE1C0[];

s32 func_00BE4600(void *arg0, s32 arg1) {
    s32 temp_s0;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 var_v0;

    switch (D_003EB060) {                           /* irregular */
    case 1:
        temp_v0 = func_00222AB0((arg1 & 0xFFFF) - 0x8000);
        if (func_001C4698(arg0, temp_v0, 0x7C) != 0) {
            func_001C4730(temp_v0, arg0, 0x7C);
            func_00C1B380(8);
        }
        D_003EB060 = 2;
    case 2:
        if (D_003EB05C == 0) {
            func_001C48E8(((void *)D_00CBE1C0), 0, 0x100);
            temp_v0_2 = arg1 & 0xFFFF;
            if ((temp_v0_2 >= 0x8098) && (temp_v0_2 < 0x80B8)) {
                temp_s0 = func_001F08B0(0xEC0011);
                sprintf(((void *)D_00CBE1C0), temp_s0, func_00228710(arg1) & 0xFFFF);
                D_003EB058 = ((void *)D_00CBE1C0);
            }
            D_003EB05C = 1;
        }
        temp_v0_3 = func_00BC4F80(0xEC0009, D_003EB058);
        if (temp_v0_3 != 0) {
            D_003EB058 = NULL;
            D_003EB05C = 0;
        }
        if (temp_v0_3 != 0) {
            D_003EB060 = 0;
            return 1;
        }
block_32:
    default:
        return 0;
    case 0:
        if ((M2C_FIELD(arg0, s8 *, 0) == 0) && (M2C_FIELD(arg0, s8 *, 1) == 0)) {
            var_v0 = 0;
        } else {
            var_v0 = 1;
        }
        if (var_v0 == 0) {
            D_003EB060 = 3;
        } else {
            func_00BC3FB0(3);
            D_003EB060 = 1;
        }
        goto block_32;
    case 3:
        if (func_00BC4F70(0xEC000F, 0) != 0) {
            D_003EB060 = 0;
            return 2;
        }
        goto block_32;
    }
}
