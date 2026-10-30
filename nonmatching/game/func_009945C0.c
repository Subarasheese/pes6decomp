/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_009A7220(void);
extern void *D_003E7A08;
extern char D_00591F14[];

void func_009945C0(s8 arg0) {
    s32 temp_v0;

    if ((M2C_FIELD(D_003E7A08, s32 *, 4) == 0xB) && (M2C_FIELD(D_003E7A08, u8 *, 0x24) == arg0)) {
        M2C_FIELD(D_003E7A08, s32 *, 0x284) = 0x10;
        M2C_FIELD(D_003E7A08, s8 *, 0x28B) = 0;
        return;
    }
    if ((*(u8 *)D_00591F14) == 0) {
        M2C_FIELD(D_003E7A08, s32 *, 0x284) = 0xB;
        M2C_FIELD(D_003E7A08, s8 *, 0x28B) = 0;
        M2C_FIELD(D_003E7A08, s8 *, 0x2A4) = arg0;
        temp_v0 = func_009A7220();
        if ((temp_v0 == 8) || (temp_v0 == 7) || (temp_v0 == 6) || (temp_v0 == 5)) {
            M2C_FIELD(D_003E7A08, u8 *, 0x2A5) = (u8) ((M2C_FIELD(D_003E7A08, u8 *, 0x2A5) & ~1) | 1);
        }
        return;
    }
    M2C_FIELD(D_003E7A08, s32 *, 0x284) = 0x10;
    M2C_FIELD(D_003E7A08, s8 *, 0x28B) = 0;
}
