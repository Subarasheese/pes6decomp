/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0099DFF0(s32, s32, s32, u8);               /* extern */
extern char D_00591E7C[];
extern char Pes6MatchSquads[];

void func_00A10160(void *arg0) {
    s32 temp_a1;
    s32 temp_a2_2;
    s32 temp_a3;
    u16 temp_a2;
    u8 temp_a4;
    void *temp_v1;

    temp_v1 = M2C_FIELD(arg0, void **, 4);
    temp_a2 = M2C_FIELD(temp_v1, u16 *, 0x30);
    if ((temp_a2 != 0x56) && (temp_a2 != 0x55) && ((M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900))), u8 *, 0x9E) & 0x7F) >= 0x55)) {
        temp_a4 = M2C_FIELD(temp_v1, u8 *, 0x2D);
        temp_a3 = (temp_a4 != 0) ? -1 : 1;
        temp_a2_2 = temp_a3 << 0xD;
        temp_a1 = (M2C_FIELD(arg0, u16 *, 0x30) - temp_a2_2) & 0xFFFF;
        if ((*(s32 *)D_00591E7C) == 0) {

        } else if ((temp_a1 & 0xFFFF) == (func_0099DFF0(temp_a1, temp_a2_2, temp_a3, temp_a4) & 0xFFFF)) {
            M2C_FIELD(arg0, u8 *, 0x50) = (u8) (M2C_FIELD(arg0, u8 *, 0x50) | 2);
        }
    }
}
