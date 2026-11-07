/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 *D_005E2464[];

s32 func_002A6D40(u8 group, u8 index) {
    s32 *table = D_005E2464[group];

    if (table == NULL) {
        return 0;
    }
    return table[index];
}
