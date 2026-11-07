/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct { s16 a, b; } P2;
extern P2 D_0058CF70[];

void func_00259CE0(P2 *arg0) {
    if (arg0 != NULL) {
        *arg0 = D_0058CF70[0];
    }
}
