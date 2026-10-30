/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *Pes6Ball_Current;
extern char Pes6MatchPlayers[];
extern char D_00591E19[];
extern char D_00CBCDE8[];

void func_0080DDF0(void *arg0) {
    s32 temp_a1;
    s32 var_a2;

    temp_a1 = M2C_FIELD(arg0, s32 *, 8);
    if (temp_a1 == 0xFF) {
        var_a2 = 1;
    } else {
        var_a2 = temp_a1 % 23;
    }
    if (((u32) (M2C_FIELD(Pes6Ball_Current, u16 *, 0x84) - 0xA) < 2U) && (M2C_FIELD((((void *)Pes6MatchPlayers) + (var_a2 * 0x240)), u8 *, 0x16) == 0xD)) {
        M2C_FIELD(arg0, s32 *, 0x48) = 0x3F800000;
    }
    if (((s32) (*(u16 *)D_00CBCDE8) > 0) || ((*(u8 *)D_00591E19) == 1)) {
        M2C_FIELD(arg0, s32 *, 0x4C) = 0x3F800000;
    }
}
