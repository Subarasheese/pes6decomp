/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


u8 func_008502E0(u64, s32, s32, u8);                /* extern */
extern char Pes6MatchPlayers[];
extern char D_008B14CD[];
extern char D_008B14E0[];

u8 func_0084D040(s32 arg0) {
    s32 temp_a2;
    s32 temp_v1;
    s32 var_a0;
    u8 temp_a3;

    temp_v1 = arg0 & 0xFF;
    if (temp_v1 != 0xFF) {
        var_a0 = temp_v1 % 23;
    } else {
        var_a0 = 1;
    }
    temp_a3 = M2C_FIELD((((void *)Pes6MatchPlayers) + (var_a0 * 0x240)), u8 *, 0x12);
    temp_a2 = (temp_a3 & 1) * 2;
    (*(u8 *)D_008B14CD) = ((*(u8 *)D_008B14CD) & ~2) | temp_a2;
    (*(u8 *)D_008B14E0) = func_008502E0((u64) ((s64) (*(u8 *)D_008B14CD) << 0x3E) >> 0x3F, arg0, temp_a2, temp_a3);
    return (*(u8 *)D_008B14E0);
}
