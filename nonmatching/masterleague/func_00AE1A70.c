/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern u8 D_003E7CA4;
extern u8 D_003E7CA5;
extern u8 D_003E7CA6;
extern u8 D_003E7CA8;
extern u8 D_003E7CA9;
extern u8 D_003E7CAA;
extern u8 D_003E7CAC;
extern u8 D_003E7CAD;
extern u8 D_003E7CAE;
extern u8 D_003E7CB0;
extern u8 D_003E7CB1;
extern u8 D_003E7CB2;
extern u8 D_003E7CB4;
extern u8 D_003E7CB5;
extern u8 D_003E7CB6;
extern u8 D_003E7CB8;
extern u8 D_003E7CB9;
extern u8 D_003E7CBA;
extern s32 D_003EADA4;

void func_00AE1A70(s32 arg0, void *arg1) {
    s32 temp_v1;

    M2C_FIELD(arg1, s8 *, 3) = 0x60;
    if (D_003EADA4 != 0) {
        temp_v1 = arg0 & 0xFF;
        switch (temp_v1) {                          /* irregular */
        case 0:
            M2C_FIELD(arg1, u8 *, 0) = (u8) D_003E7CA4;
            M2C_FIELD(arg1, u8 *, 1) = (u8) D_003E7CA5;
            M2C_FIELD(arg1, u8 *, 2) = (u8) D_003E7CA6;
            return;
        case 1:
            M2C_FIELD(arg1, u8 *, 0) = (u8) D_003E7CA8;
            M2C_FIELD(arg1, u8 *, 1) = (u8) D_003E7CA9;
            M2C_FIELD(arg1, u8 *, 2) = (u8) D_003E7CAA;
            return;
        case 2:
            M2C_FIELD(arg1, u8 *, 0) = (u8) D_003E7CAC;
            M2C_FIELD(arg1, u8 *, 1) = (u8) D_003E7CAD;
            M2C_FIELD(arg1, u8 *, 2) = (u8) D_003E7CAE;
            return;
        case 3:
            M2C_FIELD(arg1, u8 *, 0) = (u8) D_003E7CB0;
            M2C_FIELD(arg1, u8 *, 1) = (u8) D_003E7CB1;
            M2C_FIELD(arg1, u8 *, 2) = (u8) D_003E7CB2;
            return;
        default:
            M2C_FIELD(arg1, u8 *, 0) = (u8) D_003E7CB8;
            M2C_FIELD(arg1, u8 *, 1) = (u8) D_003E7CB9;
            M2C_FIELD(arg1, u8 *, 2) = (u8) D_003E7CBA;
            break;
        case 4:
            M2C_FIELD(arg1, u8 *, 0) = (u8) D_003E7CB4;
            M2C_FIELD(arg1, u8 *, 1) = (u8) D_003E7CB5;
            M2C_FIELD(arg1, u8 *, 2) = (u8) D_003E7CB6;
            return;
        }
    }
}
