/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C4730(M2C_UNK *, s8 *, M2C_UNK);    /* extern */
M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_00C13B90(M2C_UNK *);                   /* extern */
extern M2C_UNK *D_003EA7C0;
extern char D_00C9F200[];
extern char D_00CBFAA0[];
extern char D_00CCACC4[];
extern char D_00CCAD44[];

void func_00C13A20(void) {
    s8 sp10;
    s32 var_v1;
    s8 *var_a0;
    s8 *var_a1;

    var_a1 = ((void *)D_00C9F200);
    var_a0 = &sp10;
    var_v1 = 0x23;
    do {
        var_v1 -= 1;
        *var_a0 = *var_a1;
        var_a1 += 1;
        var_a0 += 1;
    } while (var_v1 > 0);
    D_003EA7C0 = ((void *)D_00CBFAA0);
    func_001C48E8(((void *)D_00CBFAA0), 0, 0xB2B0);
    func_001C4730(((void *)D_00CCACC4), &sp10, 0x23);
    func_00C13B90(((void *)D_00CCAD44));
}
