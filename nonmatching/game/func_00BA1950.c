/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00147ED0(s32);
extern void func_00147F00(void);
extern void func_001AC550(void *);
s32 func_001454C0(M2C_UNK);                         /* extern */
M2C_UNK func_001AB650(void *);                      /* extern */

void func_00BA1950(void *arg0) {
    s32 sp2C;
    void *temp_s0;

    temp_s0 = *M2C_FIELD(arg0, void ***, 4);
    func_001AB650(temp_s0);
    func_001AC550(temp_s0);
    sp2C = 0x8D19;
    if (func_001454C0(0x8D19) != 0) {
        func_00147ED0(sp2C);
        func_00147F00();
    }
}
