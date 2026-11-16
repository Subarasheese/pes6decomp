/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void func_00305E60(void *, void *);
s32 func_00BD9770();
extern void func_002FE950(void);

s32 func_002FE8B0(void *arg0) {
    if (func_00BD9770() != 0) {
        return 0;
    }
    func_00305E60(arg0, (void *) func_002FE950);
    return 1;
}
