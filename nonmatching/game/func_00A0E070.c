/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00AFBA70(u8);                              /* extern */
extern void *Pes6Ball_Current;
extern char Pes6MatchPlayers[];
extern char D_00591E19[];

s32 func_00A0E070(u8 *arg0) {
    s32 var_a0;
    u16 temp_v1_2;
    u8 temp_v1;
    void *temp_a0;

    if ((func_00AFBA70(*arg0) & 0xFF) == 0xFF) {
        var_a0 = 1;
    } else {
        var_a0 = (s32) (func_00AFBA70(*arg0) & 0xFF) % 23;
    }
    temp_a0 = ((void *)Pes6MatchPlayers) + (var_a0 * 0x240);
    temp_v1 = M2C_FIELD(temp_a0, u8 *, 0x16);
    switch (temp_v1) {                              /* irregular */
    case 0x84:
    case 0x9E:
    case 0x30:
    case 0x83:
block_20:
        return 1;
    case 0x89:
        if ((M2C_FIELD(temp_a0, u8 *, 0) == (*(u8 *)D_00591E19)) && ((u32) M2C_FIELD(temp_a0, u32 *, 0x114) < 0x100U) && (M2C_FIELD(Pes6Ball_Current, s32 *, 0x50) < 0x1000)) {
            return 0;
        }
        goto block_20;
    default:
        temp_v1_2 = M2C_FIELD(M2C_FIELD(temp_a0, void **, 4), u16 *, 0x30);
        if ((temp_v1_2 != 0x1B8) && (temp_v1_2 != 0x27C)) {
            return 0;
        }
        goto block_20;
    }
}
