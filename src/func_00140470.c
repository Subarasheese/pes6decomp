/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_004FDC04[];
extern u8 D_004FDC10[];

s32 func_00140470(void) {
    s32 *table = (s32 *)M2C_FIELD(D_004FDC04, u8 **, 0);

    return table[D_004FDC10[0] + 6];
}
