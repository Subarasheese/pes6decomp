/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void *func_00229310(void);
s32 func_0097D080(M2C_UNK);
extern s32 D_003EAD94;

s32 func_00B27890(void) {
    func_00229310();
    if (D_003EAD94 == 0) {
        return 0;
    }
    return (func_0097D080(2) & 0xFF) == 1;
}
