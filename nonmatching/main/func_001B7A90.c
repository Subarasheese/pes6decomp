/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_001B70A0();                            /* extern */
M2C_UNK func_001C48E8(s32 *, M2C_UNK, M2C_UNK);     /* extern */
M2C_UNK func_001D7960(s32, M2C_UNK);                /* extern */
extern char D_00522980[];
extern char D_00522988[];
extern char D_0052298C[];

void func_001B7A90(void) {
    s32 *var_s0;
    s32 var_s1;

    func_001D7960((*(s32 *)D_00522980), 0);
    var_s1 = 0;
    var_s0 = ((void *)D_00522980);
    do {
        func_001C48E8(var_s0 + 0x70, 0, 0x80);
        var_s1 += 1;
        var_s0 += 0x80;
    } while (var_s1 < 0x18);
    func_001B70A0();
    if ((*(s32 *)D_00522988) == 0) {
        (*(s32 *)D_0052298C) = 0;
        func_001B70A0();
    }
    func_001B70A0();
}
