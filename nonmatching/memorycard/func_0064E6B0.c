/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00363BD0(void);
M2C_UNK func_001BC270(u8);                          /* extern */
M2C_UNK func_0064E870(s32, s32);                    /* extern */
extern u8 D_003E9E20;
extern char D_0065DE38[];
extern char D_0065DE40[];

void func_0064E6B0(void) {
    M2C_UNK *var_v1;
    s32 *temp_v0;
    s32 var_a0;
    s32 var_a1;

    if ((*(u8 *)D_0065DE38) == 1) {
        func_00363BD0();
        (*(u8 *)D_0065DE38) = 0;
    }
    var_a0 = 0;
    var_v1 = ((void *)D_0065DE40);
    do {
        var_a1 = 0;
        if (0 < 4) {
            do {
                temp_v0 = var_v1 + (var_a1 * 4);
                var_a1 += 1;
                *temp_v0 = 0;
            } while (var_a1 < 4);
        }
        var_a0 += 1;
        var_v1 += 0x10;
    } while (var_a0 < 8);
    func_0064E870(var_a0, var_a1);
    func_001BC270(D_003E9E20);
}
