/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0021DF90(s32);
extern char Pes6MatchSelect_Loader[];
extern char D_00537B20[];

s32 func_0020D6D0(void) {
    s32 temp_a0;
    s32 var_v0;

    var_v0 = 0;
    if (!((*(u8 *)D_00537B20) & 1)) {
        M2C_FIELD(((void *)Pes6MatchSelect_Loader), s32 *, 4) = 0x17;
        M2C_FIELD(((void *)Pes6MatchSelect_Loader), s32 *, 0) = 0;
        M2C_FIELD(((void *)Pes6MatchSelect_Loader), u8 *, 0x10) = (u8) ((M2C_FIELD(((void *)Pes6MatchSelect_Loader), u8 *, 0x10) & ~1) | 1);
        temp_a0 = 0 & 1;
        M2C_FIELD(((void *)Pes6MatchSelect_Loader), s32 *, 8) = func_0021DF90(0xB);
        M2C_FIELD(((void *)Pes6MatchSelect_Loader), u8 *, 0x10) = (u8) ((M2C_FIELD(((void *)Pes6MatchSelect_Loader), u8 *, 0x10) & ~2) | (temp_a0 * 2));
        M2C_FIELD(((void *)Pes6MatchSelect_Loader), s32 *, 0xC) = 0;
        var_v0 = 1;
        M2C_FIELD(((void *)Pes6MatchSelect_Loader), u8 *, 0x10) = (u8) ((M2C_FIELD(((void *)Pes6MatchSelect_Loader), u8 *, 0x10) & ~4) | (temp_a0 * 4));
        M2C_FIELD(((void *)Pes6MatchSelect_Loader), u8 *, 0x10) = (u8) ((M2C_FIELD(((void *)Pes6MatchSelect_Loader), u8 *, 0x10) & ~8) | (temp_a0 * 8));
        M2C_FIELD(((void *)Pes6MatchSelect_Loader), u8 *, 0x10) = (u8) ((M2C_FIELD(((void *)Pes6MatchSelect_Loader), u8 *, 0x10) & ~0x10) | (temp_a0 * 0x10));
    }
    return var_v0;
}
