/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00147ED0(s32);
extern void func_00153FA0(void *);
M2C_UNK func_00145590(void *);                      /* extern */
extern char D_00521DE0[];

void func_001A9510(void) {
    M2C_UNK *var_s0;
    s32 var_s1;
    u8 temp_a0;
    void *temp_a0_2;

    var_s1 = 0;
    var_s0 = ((void *)D_00521DE0);
    do {
        temp_a0 = M2C_FIELD(var_s0, u8 *, 8);
        switch (temp_a0) {                          /* irregular */
        case 2:
            temp_a0_2 = M2C_FIELD(var_s0, void **, 0x14);
            if (temp_a0_2 != NULL) {
                func_00145590(temp_a0_2);
                func_00153FA0(M2C_FIELD(var_s0, void **, 0x14));
                M2C_FIELD(var_s0, void **, 0x14) = NULL;
                M2C_FIELD(var_s0, u8 *, 8) = 4U;
            }
            break;
        case 3:
            func_00147ED0(M2C_FIELD(var_s0, u8 *, 0xA) + 0x5AA);
            M2C_FIELD(var_s0, u8 *, 8) = 4U;
            break;
        }
        var_s1 += 1;
        var_s0 += 0x18;
    } while (var_s1 < 0x17);
}
