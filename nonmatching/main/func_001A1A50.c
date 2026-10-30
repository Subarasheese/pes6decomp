/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00153FA0(void *);
M2C_UNK func_00145590(void *);                      /* extern */
extern void *D_00520358;
extern char D_00520360[];
extern char D_00520374[];

void func_001A1A50(void) {
    M2C_UNK *var_s0;
    s32 var_s1;
    s32 var_s1_2;
    void **var_s0_2;
    void *temp_a0;
    void *temp_a0_2;

    var_s1 = 0;
    (*(s16 *)D_00520374) = 0;
    var_s0 = ((void *)D_00520360);
    do {
        temp_a0 = M2C_FIELD(var_s0, void **, 0x18);
        if (temp_a0 != NULL) {
            func_00153FA0(temp_a0);
            M2C_FIELD(var_s0, void **, 0x18) = NULL;
        }
        var_s1 += 1;
        var_s0 += 4;
    } while (var_s1 < 0xB);
    var_s1_2 = 0;
    var_s0_2 = &D_00520358;
    do {
        temp_a0_2 = *var_s0_2;
        if (temp_a0_2 != NULL) {
            func_00145590(temp_a0_2);
            func_00153FA0(*var_s0_2);
            *var_s0_2 = NULL;
        }
        var_s1_2 += 1;
        var_s0_2 += 4;
    } while (var_s1_2 < 2);
}
