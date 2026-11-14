/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_0014A5A0(void *, void *);              /* extern */
extern char D_0050AE30[];
extern void *D_0050AE3C;

void func_001494F0(void) {
    void *temp_a2;
    void *var_a1;

    var_a1 = D_0050AE3C;
loop_1:
    temp_a2 = M2C_FIELD(var_a1, void **, 0xC);
    if (M2C_FIELD(var_a1, u16 *, 0x20) != 0) {
block_4:
        var_a1 = temp_a2;
        goto loop_1;
    }
    if (var_a1 != ((u8 *)D_0050AE30)) {
        goto block_4;
    }
    func_0014A5A0(var_a1, temp_a2);
}
