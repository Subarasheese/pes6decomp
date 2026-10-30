/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00153FA0(void *);
extern void func_001BC360(void);
M2C_UNK func_00C75330(void *);                      /* extern */
extern void *D_00923FCC;

void func_00914A20(void) {
    s32 var_s1;

    var_s1 = 0;
    do {
        func_001BC360();
        func_001BC360();
        var_s1 += 1;
    } while (var_s1 < 8);
    func_00C75330(D_00923FCC + 8);
    func_00153FA0(D_00923FCC);
    D_00923FCC = NULL;
}
