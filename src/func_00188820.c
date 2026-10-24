/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern u8 *D_00520080[];
extern u8 D_0051FF47[];

void func_00188820(s16 *a, s16 *b, s16 *c) {
    s16 *block;

    if (D_0051FF47[0] == 0) {
        block = (s16 *)(D_00520080[0] + 0x14);
    } else {
        block = (s16 *)(D_00520080[0] + 0x1E);
    }
    *a = block[0];
    *b = block[1];
    *c = block[2];
}
