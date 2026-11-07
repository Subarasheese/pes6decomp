/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern u8 D_003E9E84[2];
extern u8 D_003E98D0;

void func_002FC740(u8 index, u8 value) {
    D_003E9E84[index] = value;
    D_003E98D0 = D_003E9E84[0] == 1 || D_003E9E84[1] == 1;
}
