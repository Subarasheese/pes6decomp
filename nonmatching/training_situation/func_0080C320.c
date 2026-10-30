/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *Pes6Ball_Current;
extern char Pes6MatchPlayers[];
extern char D_00591E4C[];
extern char D_00592810[];
extern char D_00CBCDE8[];

void func_0080C320(void *arg0) {
    s32 var_a2;

    if ((*(u8 *)D_00592810) == 0xFF) {
        var_a2 = 1;
    } else {
        var_a2 = (s32) (*(u8 *)D_00592810) % 23;
    }
    if (((u32) (M2C_FIELD(Pes6Ball_Current, u16 *, 0x84) - 0xA) < 2U) && (M2C_FIELD((((void *)Pes6MatchPlayers) + (var_a2 * 0x240)), u8 *, 0x16) == 0xD)) {
        M2C_FIELD(arg0, s32 *, 0x48) = 0x3F800000;
    }
    if ((M2C_FIELD(Pes6Ball_Current, u16 *, 0x84) == 0xF) || ((s32) (*(u16 *)D_00CBCDE8) > 0)) {
        M2C_FIELD(arg0, s32 *, 0x4C) = 0x3F800000;
    }
    if ((*(u8 *)D_00591E4C) == (*(u8 *)D_00592810)) {
        M2C_FIELD(arg0, s32 *, 0x50) = 0x3F800000;
    }
}
