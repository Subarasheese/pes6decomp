/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern u8 D_003EA674;
extern void *D_00908CA0;
extern void *D_00908CC0;
extern void *D_00908CC4;
extern void *D_00908CC8;
extern void *D_00908CCC;
extern void *D_00908CD0;
extern void *D_00908CD4;
extern void *D_00908CD8;
extern void *D_00908CDC;
extern void *D_00908CF0;

void func_008F96E0(void) {
    M2C_FIELD(D_00908CA0, s32 *, 0xE4) = 0xC2936666;
    M2C_FIELD(D_00908CC0, s32 *, 0xE4) = 0xC3176667;
    M2C_FIELD(D_00908CC4, s32 *, 0xE4) = 0xC3176667;
    M2C_FIELD(D_00908CC8, s32 *, 0xE4) = 0xC317B333;
    M2C_FIELD(D_00908CCC, s32 *, 0xE4) = 0xC317B333;
    M2C_FIELD(D_00908CD0, s32 *, 0xE4) = 0xC317B333;
    M2C_FIELD(D_00908CD4, s32 *, 0xE4) = 0xC31B4CCD;
    M2C_FIELD(D_00908CD8, s32 *, 0xE4) = 0xC3224CCD;
    M2C_FIELD(D_00908CDC, s32 *, 0xE4) = 0xC3224CCD;
    M2C_FIELD(D_00908CF0, s32 *, 0xE4) = 0xC2936666;
    if (D_003EA674 == 0xC) {
        M2C_FIELD(D_00908CF0, s32 *, 0xE8) = 0x4512E000;
    }
}
