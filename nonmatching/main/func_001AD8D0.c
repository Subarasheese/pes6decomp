/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0017DEC0(void *, s32);
extern void func_001AC370(int);
extern void func_001AC360(int);
s32 func_001454C0(s32);                             /* extern */

void func_001AD8D0(void *arg0) {
    s32 var_s0;

    var_s0 = 0x26D4;
    if (M2C_FIELD(arg0, s32 *, 0x2C) != 0) {
        var_s0 = 0x26D8;
    }
    if (func_001454C0(var_s0) != 0) {
        func_001AC370((s32) arg0);
        func_001AC370((s32) arg0);
        func_001AC360((s32) arg0);
        if (M2C_FIELD(arg0, s32 *, 0xC) == 0) {
            return;
        }
        if (func_001454C0(var_s0 + 2) != 0) {
            func_001AC360((s32) arg0);
            func_001AC360((s32) arg0);
            if (M2C_FIELD(arg0, s32 *, 0xC) == 1) {
                func_0017DEC0(M2C_FIELD(arg0, void **, 0x10), 2);
                func_0017DEC0(M2C_FIELD(arg0, void **, 0x10), 2);
                func_0017DEC0(M2C_FIELD(arg0, void **, 0x10), 3);
                func_0017DEC0(M2C_FIELD(arg0, void **, 0x10), 3);
                func_0017DEC0(M2C_FIELD(arg0, void **, 0x10), 4);
                func_0017DEC0(M2C_FIELD(arg0, void **, 0x10), 4);
            }
        }
        return;
    }
    func_001AC370((s32) arg0);
    func_001AC370((s32) arg0);
}
