/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 func_00332FA0(void);
extern int func_003387D0(void *, int, int);

s32 func_0031A420(void *arg0) {
    if (func_00332FA0() != 0) {
        return 0;
    }
    func_003387D0(arg0, 0x31A660, 0x3E1510);
    return 1;
}
