/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern f32 D_005E218C[];
extern f32 D_005E217C[];
extern u8 D_005E2133[];

void func_002A8B80(f32 value) {
    value = value > D_005E218C[0] ? value : D_005E218C[0];
    D_005E217C[0] = value;
    D_005E2133[0] |= 0xB;
}
