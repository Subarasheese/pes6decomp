/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
extern int func_002D33C0(int);
extern void func_0026E840(unsigned int);
extern void *D_003E7614;
int func_002D6300(void) {
    if (func_002D33C0(1) != 0) {
        return 0;
    }
    M2C_FIELD(D_003E7614, int *, 0x58) = 0;
    func_0026E840(0x22000107);
    return 1;
}
