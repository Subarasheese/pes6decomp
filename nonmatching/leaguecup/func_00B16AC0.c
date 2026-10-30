/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern u8 D_003E7C3C;
extern u8 D_003E7C3D;
extern u8 D_003E7C3E;
extern u8 D_003E7C40;
extern u8 D_003E7C41;
extern u8 D_003E7C42;
extern u8 D_003E7C44;
extern u8 D_003E7C45;
extern u8 D_003E7C46;
extern u8 D_003E7C48;
extern u8 D_003E7C49;
extern u8 D_003E7C4A;
extern u8 D_003E7C4C;
extern u8 D_003E7C4D;
extern u8 D_003E7C4E;
extern u8 D_003E7C50;
extern u8 D_003E7C51;
extern u8 D_003E7C52;
extern s32 D_003EAD78;

void func_00B16AC0(s32 arg0, void *arg1) {
    s32 temp_v1;

    M2C_FIELD(arg1, s8 *, 3) = 0x60;
    if (D_003EAD78 != 0) {
        temp_v1 = arg0 & 0xFF;
        switch (temp_v1) {                          /* irregular */
        case 0:
            M2C_FIELD(arg1, u8 *, 0) = (u8) D_003E7C3C;
            M2C_FIELD(arg1, u8 *, 1) = (u8) D_003E7C3D;
            M2C_FIELD(arg1, u8 *, 2) = (u8) D_003E7C3E;
            return;
        case 1:
            M2C_FIELD(arg1, u8 *, 0) = (u8) D_003E7C40;
            M2C_FIELD(arg1, u8 *, 1) = (u8) D_003E7C41;
            M2C_FIELD(arg1, u8 *, 2) = (u8) D_003E7C42;
            return;
        case 2:
            M2C_FIELD(arg1, u8 *, 0) = (u8) D_003E7C44;
            M2C_FIELD(arg1, u8 *, 1) = (u8) D_003E7C45;
            M2C_FIELD(arg1, u8 *, 2) = (u8) D_003E7C46;
            return;
        case 3:
            M2C_FIELD(arg1, u8 *, 0) = (u8) D_003E7C48;
            M2C_FIELD(arg1, u8 *, 1) = (u8) D_003E7C49;
            M2C_FIELD(arg1, u8 *, 2) = (u8) D_003E7C4A;
            return;
        default:
            M2C_FIELD(arg1, u8 *, 0) = (u8) D_003E7C50;
            M2C_FIELD(arg1, u8 *, 1) = (u8) D_003E7C51;
            M2C_FIELD(arg1, u8 *, 2) = (u8) D_003E7C52;
            break;
        case 4:
            M2C_FIELD(arg1, u8 *, 0) = (u8) D_003E7C4C;
            M2C_FIELD(arg1, u8 *, 1) = (u8) D_003E7C4D;
            M2C_FIELD(arg1, u8 *, 2) = (u8) D_003E7C4E;
            return;
        }
    }
}
