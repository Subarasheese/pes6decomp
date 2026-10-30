/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0099D3F0();                                /* extern */
void **func_00B2A420(u8);                           /* extern */
s32 func_00BBB8C0(M2C_UNK);                         /* extern */
extern char D_00591DD1[];
extern char D_00591E4D[];
extern char D_00591E58[];
extern char D_00591E60[];
extern char D_0059237C[];
extern char Pes6MatchSquads[];

s32 func_00BF6950(void) {
    void **temp_s0;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v1;

    temp_s0 = func_00B2A420((*(u8 *)D_00591E4D));
    if ((func_00BBB8C0(0x64) < 0xB) && (M2C_FIELD(*temp_s0, s32 *, 0x90) != 4)) {
        goto block_2;
    }
    if (((func_00BBB8C0(0x64) >= 0x29) || (M2C_FIELD(*temp_s0, s32 *, 0x90) != 4)) && ((func_00BBB8C0(0x64) >= 0x1F) || (temp_v0 = *temp_s0, (((M2C_FIELD(((M2C_FIELD(temp_v0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(temp_v0, u8 *, 0x12) * 0x6900))), u8 *, 0x89) & 7) < 6) != 0)))) {
        return 0;
    }
block_2:
    if ((*(u8 *)D_0059237C) != 0) {
        return 0;
    }
    if ((*(u8 *)D_00591DD1) != 0) {
        return 0;
    }
    if (func_0099D3F0() != 0) {
        return 0;
    }
    if ((*(f32 *)D_00591E58) <= 0.0f) {
        goto block_16;
    }
    if ((*(f32 *)D_00591E60) <= 0.0f) {
block_16:
        if (((*(f32 *)D_00591E58) < 0.0f) && ((*(f32 *)D_00591E60) < 0.0f)) {
            goto block_18;
        }
        temp_v0_2 = *temp_s0;
        if (!(M2C_FIELD(((M2C_FIELD(temp_v0_2, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(temp_v0_2, u8 *, 0x12) * 0x6900))), u8 *, 0x68) & 1 & 1)) {
            return 0;
        }
        goto block_22;
    }
block_18:
    temp_v1 = *temp_s0;
    if ((M2C_FIELD(((M2C_FIELD(temp_v1, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(temp_v1, u8 *, 0x12) * 0x6900))), u8 *, 0x68) & 1 & 1) == 1) {
        return 0;
    }
block_22:
    return 1;
}
