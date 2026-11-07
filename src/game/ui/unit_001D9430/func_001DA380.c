/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"
extern s32 D_0052AB90[];
extern char *D_0052ABAC[];

s32 func_001DA380(s32 a0) {
    s32 *r = NULL;
    if (D_0052ABAC[0] != 0 && a0 >= 0 && a0 < D_0052AB90[0]) {
        r = (s32 *)(D_0052ABAC[0] + a0 * 0x4C);
    }
    if (r != NULL && *r != 0) return 1;
    return 0;
}
