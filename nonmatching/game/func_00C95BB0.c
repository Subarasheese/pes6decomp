/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002BB820(int, int);
extern u8 func_00BF6270(void);
M2C_UNK func_002BB870(u8, M2C_UNK);                 /* extern */
M2C_UNK func_002BBF20(M2C_UNK *);                   /* extern */
M2C_UNK func_002BC000(u8, M2C_UNK *, s32);          /* extern */
M2C_UNK func_002BC2B0(u8, M2C_UNK *, s32);          /* extern */
extern char D_003B91B0[];
extern char Pes6MatchPlayers[];
extern char D_00592740[];

void func_00C95BB0(void) {
    s32 temp_a2;
    s32 var_a0;
    u8 *temp_s0;

    if (func_00BF6270() == 0xFF) {
        var_a0 = 1;
    } else {
        var_a0 = func_00BF6270() % 23;
    }
    temp_a2 = var_a0 * 0x240;
    temp_s0 = ((void *)Pes6MatchPlayers) + temp_a2;
    switch ((*(u8 *)D_00592740)) {                           /* irregular */
    case 0:
        func_002BC2B0((*(u8 *)D_00592740), ((void *)Pes6MatchPlayers), temp_a2);
        func_002BB870(*temp_s0, 0x64);
        func_002BB820((s32) *temp_s0, 0x1D);
        func_002BBF20(((void *)D_003B91B0));
        (*(u8 *)D_00592740) = 1;
        return;
    case 1:
        func_002BC000((*(u8 *)D_00592740), ((void *)Pes6MatchPlayers), temp_a2);
        return;
    }
}
