/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern u8 *D_00520080[];
extern u8 D_0051FF47[];

void func_001887A0(u8 *a, u8 *b) {
    u8 *block;

    if (D_0051FF47[0] == 0) {
        block = D_00520080[0] + 0x14;
    } else {
        block = D_00520080[0] + 0x1E;
    }
    *a = block[8];
    *b = block[9];
}
