/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001B4D20(void *);
M2C_UNK func_001B8380(M2C_UNK);                     /* extern */
M2C_UNK func_0023F510(M2C_UNK);                     /* extern */
M2C_UNK func_008B2880();                            /* extern */
M2C_UNK func_008B2E20(s32);                         /* extern */
M2C_UNK func_008B32E0(s32);                         /* extern */
extern void *D_003EAB74;
extern s32 D_003EAB80;
extern char D_00967C30[];
extern char D_00967C40[];

void func_0093C1C0(void) {
    s32 *var_s0;
    s32 *var_s1_2;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 var_s0_2;
    s32 var_s1;

    if (D_003EAB80 != 0) {
        var_s1 = 0;
        var_s0 = ((void *)D_00967C30);
        do {
            temp_a0 = *var_s0;
            if (temp_a0 != 0) {
                func_008B2E20(temp_a0);
            }
            var_s1 += 1;
            var_s0 += 4;
        } while (var_s1 < 2);
        var_s0_2 = 0;
        var_s1_2 = ((void *)D_00967C40);
        do {
            temp_a0_2 = *var_s1_2;
            if (temp_a0_2 != 0) {
                func_008B32E0(temp_a0_2);
            }
            var_s0_2 += 1;
            var_s1_2 += 4;
        } while (var_s0_2 < 0x15);
        D_003EAB80 = 0;
    }
    func_008B2880();
    func_001B4D20(D_003EAB74);
    func_0023F510(2);
    func_001B8380(1);
}
