/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001A58E0(void *, signed char);
extern u8 D_003EA674;
extern void *D_00908CA4;
extern void *D_00908CA8;
extern void *D_00908CAC;
extern void *D_00908CB0;
extern void *D_00908CB4;
extern void *D_00908CB8;
extern void *D_00908CBC;
extern void *D_00908CC0;
extern void *D_00908CC4;
extern void *D_00908CC8;
extern void *D_00908CCC;
extern void *D_00908CEC;
extern void *D_00908CF0;

void func_008F98E0(void) {
    M2C_FIELD(D_00908CB0, s32 *, 0xE4) = 0x429F9999;
    M2C_FIELD(D_00908CB4, s32 *, 0xE4) = 0x429F9999;
    M2C_FIELD(D_00908CB8, s32 *, 0xE4) = 0x429F9999;
    M2C_FIELD(D_00908CBC, s32 *, 0xE4) = 0x429F9999;
    M2C_FIELD(D_00908CC0, s32 *, 0xE4) = 0x429F9999;
    M2C_FIELD(D_00908CC8, s32 *, 0xE4) = 0x429F9999;
    M2C_FIELD(D_00908CCC, s32 *, 0xE4) = 0x429F9999;
    M2C_FIELD(D_00908CEC, s32 *, 0xE4) = 0xC29F9999;
    M2C_FIELD(D_00908CF0, s32 *, 0xE4) = 0xC29F9999;
    if (D_003EA674 == 0xC) {
        M2C_FIELD(D_00908CA4, s32 *, 0xE0) = 0x4298999A;
        M2C_FIELD(D_00908CA4, s32 *, 0xE8) = 0x4522D800;
        M2C_FIELD(D_00908CA4, s16 *, 0x26) = 0xC000;
        M2C_FIELD(D_00908CA8, s32 *, 0xE0) = 0xC31A4CCD;
        M2C_FIELD(D_00908CA8, s32 *, 0xE8) = 0x45181333;
        M2C_FIELD(D_00908CA8, s16 *, 0x26) = 0xCD0E;
        M2C_FIELD(D_00908CAC, s32 *, 0xE0) = 0x43164CCD;
        M2C_FIELD(D_00908CAC, s32 *, 0xE8) = 0x4518F4CD;
        M2C_FIELD(D_00908CAC, s16 *, 0x26) = 0xC000;
        M2C_FIELD(M2C_FIELD(D_00908CC4, void ***, 4), s8 *, 0x2C) = 0;
        func_001A58E0(*M2C_FIELD(D_00908CC4, void ***, 4), 0);
    }
}
