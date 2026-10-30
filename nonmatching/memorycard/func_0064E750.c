/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002E8C30(int);
extern int func_00363C30(void);
M2C_UNK func_001BC290(u8);                          /* extern */
M2C_UNK func_00363C40();                            /* extern */
M2C_UNK func_0064E930();                            /* extern */
extern u8 D_003E9E20;
extern char D_0065DE38[];
extern char D_0065DE40[];

void func_0064E750(void) {
    M2C_UNK *var_v1;
    s32 *temp_v0;
    s32 var_a0;
    s32 var_a1;

    func_001BC290(D_003E9E20);
    func_0064E930();
    if (func_00363C30() == 0) {
        if ((*(u8 *)D_0065DE38) == 0) {
            func_00363C40();
            (*(u8 *)D_0065DE38) = 1;
        }
    } else {
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
    func_002E8C30(0);
}
