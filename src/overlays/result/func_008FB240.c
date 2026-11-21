/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern int *D_00921C88[];
int func_008FB240(unsigned char a, unsigned char b) {
    int *p = D_00921C88[a];
    if (!p)
        return 0;
    return p[b];
}
