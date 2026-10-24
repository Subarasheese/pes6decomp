/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern u32 D_0051FFC8[];
void func_0018E140(void);

void func_00186470(void) {
    if (D_0051FFC8[0] & 0x100) {
        func_0018E140();
    }
}
