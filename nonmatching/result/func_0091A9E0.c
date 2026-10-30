/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001BC360(void);
extern void func_0020A540(void);
extern void func_00153FA0(void *);
M2C_UNK func_00910060();                            /* extern */
M2C_UNK func_00C75330(void *);                      /* extern */
extern void *D_00923FCC;

void func_0091A9E0(void) {
    s32 var_s0;
    s32 var_s1;
    s32 var_s1_2;

    var_s1 = 0;
    do {
        func_001BC360();
        func_001BC360();
        var_s1 += 1;
    } while (var_s1 < 8);
    func_00910060();
    var_s0 = 0;
    var_s1_2 = 0;
    do {
        func_00C75330(D_00923FCC + var_s1_2 + 8);
        var_s0 += 1;
        var_s1_2 += 0x40;
    } while (var_s0 < 8);
    func_00C75330(D_00923FCC);
    func_0020A540();
    func_00153FA0(D_00923FCC);
    D_00923FCC = NULL;
}
