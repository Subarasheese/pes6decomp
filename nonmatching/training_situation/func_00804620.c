/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00264790(void *, u8);
extern void func_0017E120(int);
M2C_UNK func_002D49B0(M2C_UNK);                     /* extern */
M2C_UNK func_003425A0(M2C_UNK *);                   /* extern */
M2C_UNK func_003710E0(M2C_UNK);                     /* extern */
M2C_UNK func_0099B4F0();                            /* extern */
M2C_UNK func_009E1D30(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_00B29630(M2C_UNK);                     /* extern */
M2C_UNK func_00B297C0(M2C_UNK);                     /* extern */
M2C_UNK func_00B29950(M2C_UNK);                     /* extern */
M2C_UNK func_00C8A470();                            /* extern */
extern char Pes6MatchPlayers[];
extern char D_0059228C[];
extern char D_00592290[];

void func_00804620(void *arg0) {
    M2C_UNK *var_a0;
    u32 var_v1;

    func_009E1D30(0, 0);
    func_0017E120(1);
    func_00C8A470();
    func_00B29950(1);
    func_00B297C0(1);
    func_00B29630(1);
    (*(s32 *)D_0059228C) = 0x7FF;
    (*(s32 *)D_00592290) = 0x7FF;
    func_003710E0(0);
    func_0099B4F0();
    var_v1 = 0;
    var_a0 = ((void *)Pes6MatchPlayers);
    do {
        M2C_FIELD(var_a0, s8 *, 0x1DD) = 0;
        var_v1 += 7;
        M2C_FIELD(var_a0, s8 *, 0x41D) = 0;
        M2C_FIELD(var_a0, s8 *, 0x65D) = 0;
        M2C_FIELD(var_a0, s8 *, 0x89D) = 0;
        M2C_FIELD(var_a0, s8 *, 0xADD) = 0;
        M2C_FIELD(var_a0, s8 *, 0xD1D) = 0;
        M2C_FIELD(var_a0, s8 *, 0xF5D) = 0;
        var_a0 += 0xFC0;
    } while (var_v1 < 0x10U);
    M2C_FIELD(var_a0, s8 *, 0x1DD) = 0;
    M2C_FIELD(var_a0, s8 *, 0x41D) = 0;
    func_003425A0(var_a0);
    func_002D49B0(1);
    M2C_FIELD(arg0, s32 *, 0x4E8) = 0;
    func_00264790(arg0, 6U);
}
