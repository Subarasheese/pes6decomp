/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0017E150(int);
M2C_UNK func_008234C0();                            /* extern */
s32 func_008256C0();                                /* extern */
s32 func_009EE580(void *);                          /* extern */
M2C_UNK func_00B79620(s32);                         /* extern */
s32 func_00B79670(u8);                              /* extern */
M2C_UNK func_00BE9ED0(M2C_UNK);                     /* extern */
extern char Pes6MatchPlayers[];
extern char D_00591E4D[];

void func_008236D0(void) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_a0;
    void *temp_s0;

    temp_v0 = func_008256C0();
    if ((temp_v0 != 4) && (temp_v0 != 3)) {
        return;
    }
    func_00BE9ED0(4);
    func_008234C0();
    if ((*(u8 *)D_00591E4D) == 0xFF) {
        var_a0 = 1;
    } else {
        var_a0 = (s32) (*(u8 *)D_00591E4D) % 23;
    }
    temp_s0 = ((void *)Pes6MatchPlayers) + (var_a0 * 0x240);
    M2C_FIELD(temp_s0, s32 *, 0x90) = func_009EE580(temp_s0);
    temp_v0_2 = func_00B79670(M2C_FIELD(temp_s0, u8 *, 0));
    if (temp_v0_2 != 0) {
        func_00B79620(temp_v0_2);
        func_0017E150(0);
    }
}
