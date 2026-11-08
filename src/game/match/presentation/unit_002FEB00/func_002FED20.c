/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void func_002D4BE0(s32);
extern void func_00305E60(void *, char *);
extern s32 func_00BD97D0(void);
extern char func_002FED80[];

s32 func_002FED20(void *arg0) {
    void *temp_s0;

    temp_s0 = M2C_FIELD(arg0, void **, 0x18);
    if (func_00BD97D0() != 0) {
        return 0;
    }
    func_002D4BE0(M2C_FIELD(temp_s0, s32 *, 0x18));
    func_00305E60(arg0, func_002FED80);
    return 1;
}
