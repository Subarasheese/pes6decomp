/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0099D910();                                /* extern */
extern char Pes6MatchSquads[];

void func_0099D520(void *arg0) {
    s32 temp_a3;
    u8 temp_v1;

    temp_a3 = func_0099D910() & 0xFF;
    M2C_FIELD(arg0, u8 *, 0x1CA) = (u8) (M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900))), u8 *, 0x7F) & 0x7F);
    temp_v1 = M2C_FIELD(arg0, u8 *, 0x1CA);
    M2C_FIELD(arg0, u8 *, 0x1CA) = (u8) (((temp_v1 * temp_a3) / 9) + ((u32) (temp_v1 * temp_a3) >> 0x1F));
    if ((s32) M2C_FIELD(arg0, u8 *, 0x1CA) >= 0x64) {
        M2C_FIELD(arg0, u8 *, 0x1CA) = 0x63U;
    }
}
