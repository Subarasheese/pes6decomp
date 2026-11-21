/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern int D_00CE566C[];

int func_00BD0C40(int param_1, int param_2) {
    if (param_1 == 0) {
        return 0;
    }
    if (param_1 == 0xc) {
        return (int)*(char *)(D_00CE566C[0] + param_2);
    }
    return 1;
}
