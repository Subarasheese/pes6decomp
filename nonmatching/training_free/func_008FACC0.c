/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0026B580(void *, s32, s32);
extern int func_002DCA30(void);
extern int func_00308400(void);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_0081D240(M2C_UNK);                     /* extern */
extern void *D_003EA6C0;

s32 func_008FACC0(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3) {
    if (func_002DCA30() != 0) {
        if (func_00308400() == 0) {
            if (M2C_FIELD(D_003EA6C0, u8 *, 0x17C) == 0) {
                func_0026E840(0x8C008005);
                return 0;
            }
            goto block_7;
        }
        return 0;
    }
block_7:
    func_0026E840(0x8C008004);
    M2C_FIELD(D_003EA6C0, s8 *, 0x16A) = -1;
    func_0026B580(D_003EA6C0, 5, arg3);
    if (func_002DCA30() != 0) {
        func_0081D240(0);
    }
    return 2;
}
