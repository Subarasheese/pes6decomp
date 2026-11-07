/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void *func_00989410(void);
void func_0026E840(s32);
s32 func_0095ED20(void);

s32 func_00988F40(void) {
    void *p;

    p = func_00989410();
    if (p == NULL) {
        return 0;
    }
    if (func_0095ED20() == 0) {
        return 0;
    }
    M2C_FIELD(p, s32 *, 0x488) = 2;
    func_0026E840(0x84008401);
    return 0;
}
