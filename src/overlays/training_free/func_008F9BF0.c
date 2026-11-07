/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void func_002CAFA0(int);
extern char D_003AE99A[];

void func_008F9BF0(void) {
    switch ((*(u8 *)D_003AE99A)) {
    case 1:
        func_002CAFA0((s32) (*(u8 *)D_003AE99A));
    default:
        (*(u8 *)D_003AE99A) -= 1;
    case 0:
        break;
    }
}
