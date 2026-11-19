/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern char D_0050D184[];
extern char D_0050D188[];

void func_0014A380(char *arg0, s32 arg1) {
    char *n;
    char *nx;

    if (arg1 < *(s16 *)(arg0 + 0x16)) {
        n = *(char **)D_0050D188;
        *(char **)D_0050D188 = *(char **)(n + 4);
        *(char **)(n + 4) = *(char **)(arg0 + 4);
        *(char **)(n + 0) = arg0;
        nx = *(char **)(arg0 + 4);
        if (nx != NULL) {
            *(char **)nx = n;
        } else {
            *(char **)D_0050D184 = arg0;
        }
        *(char **)(arg0 + 4) = n;
        *(s32 *)(n + 0x10) = 0;
        *(s16 *)(n + 0x14) = *(s16 *)(arg0 + 0x14) + arg1;
        *(s16 *)(n + 0x16) = *(s16 *)(arg0 + 0x16) - arg1;
        *(s16 *)(n + 0x20) = 0;
        *(s16 *)(arg0 + 0x16) = arg1;
    }
}
