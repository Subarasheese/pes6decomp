/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void func_008D3CB0(char *);

void func_008B38E0(char *arg0) {
    func_008D3CB0(arg0 + 0x1D8C);
    M2C_FIELD(arg0, s8 *, 0x29) = 0;
}
