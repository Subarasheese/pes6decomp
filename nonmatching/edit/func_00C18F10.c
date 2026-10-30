/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(s32 *, M2C_UNK, M2C_UNK);     /* extern */
M2C_UNK func_001DC980(s32);                         /* extern */
extern char D_00CF2040[];
extern char D_00CF2110[];

void func_00C18F10(void) {
    s32 *var_s1;
    s32 *var_s1_2;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 var_s0;
    s32 var_s0_2;

    var_s0 = 0;
    var_s1 = ((void *)D_00CF2040);
    do {
        temp_a0 = *var_s1;
        if (temp_a0 != 0) {
            func_001DC980(temp_a0);
        }
        var_s0 += 1;
        var_s1 += 0x34;
    } while (var_s0 < 4);
    func_001C48E8(((void *)D_00CF2040), 0, 0xD0);
    var_s0_2 = 0;
    var_s1_2 = ((void *)D_00CF2110);
    do {
        temp_a0_2 = *var_s1_2;
        if (temp_a0_2 != 0) {
            func_001DC980(temp_a0_2);
        }
        var_s0_2 += 1;
        var_s1_2 += 0x34;
    } while (var_s0_2 < 4);
    func_001C48E8(((void *)D_00CF2110), 0, 0xD0);
}
