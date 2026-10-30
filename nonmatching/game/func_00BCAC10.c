/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00186220(void);
extern void func_00270580(int);
extern void func_0027A7B0(s32);
extern void func_001A58E0(void *, signed char);
M2C_UNK func_00B25F80(M2C_UNK);                     /* extern */
M2C_UNK func_00B25FD0();                            /* extern */
M2C_UNK func_00BA1620();                            /* extern */
extern void *Pes6Ball_Current;
extern s32 D_003EA780;
extern s32 D_003EA784;
extern char Pes6MatchPlayers[];
extern char D_00CBD312[];

void func_00BCAC10(void) {
    M2C_UNK *var_s0;
    s32 var_s1;
    void *temp_v0;

    func_00B25F80(0);
    func_00B25FD0();
    D_003EA784 = 0;
    func_00186220();
    func_0027A7B0(1);
    func_00BA1620();
    (*(s8 *)D_00CBD312) = 0;
    var_s1 = 0;
    var_s0 = ((void *)Pes6MatchPlayers);
    M2C_FIELD(Pes6Ball_Current, s8 *, 0xC) = 0;
    do {
        M2C_FIELD(M2C_FIELD(var_s0, void **, 4), u8 *, 0x2C) = 0U;
        temp_v0 = M2C_FIELD(var_s0, void **, 4);
        func_001A58E0(M2C_FIELD(temp_v0, void **, 0), (s8) M2C_FIELD(temp_v0, u8 *, 0x2C));
        var_s1 = (var_s1 + 1) & 0xFF;
        var_s0 += 0x240;
    } while (var_s1 < 0x17);
    func_00270580(0);
    D_003EA780 = 0;
}
