/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void func_001F1EA0(s8 *);
extern void func_0026B4C0(s32);
extern void func_0026B580(s32 *, s32, s32);

void func_0090EA00(s8 *arg0) {
    s8 *temp_a0;

    temp_a0 = M2C_FIELD(arg0, s8 **, 0);
    if (temp_a0 != NULL) {
        func_001F1EA0(temp_a0);
        func_0026B580((s32 *) (arg0 + 0x64), 0x10, -1);
        func_0026B4C0(M2C_FIELD(arg0, s32 *, 0x60));
        M2C_FIELD(arg0, s8 **, 0) = NULL;
    }
}
