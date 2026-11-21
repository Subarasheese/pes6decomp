/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern s32 func_00207D10(void *);
extern void func_00B2ACF0(void **);
extern s32 func_00BA8570(void **);
extern s32 func_00BB7170(void **);

void func_00BB85C0(void **arg0) {
    func_00B2ACF0(arg0);
    if (func_00207D10(M2C_FIELD(*arg0, void **, 4)) != 0) {
        func_00BA8570(arg0);
        if (M2C_FIELD(M2C_FIELD(*arg0, void **, 4), u16 *, 0x30) == 0x44A) {
            return;
        }
        func_00BB7170(arg0);
    }
}
