/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern int D_00A68CA8[];

void func_00969BE0(void) {
    if (D_00A68CA8[0] != 0) {
        *(u32 *)(D_00A68CA8[0] + 0x180) = 1;
    }
}
