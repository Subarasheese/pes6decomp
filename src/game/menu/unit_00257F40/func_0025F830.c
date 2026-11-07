/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
extern char D_0058D30C[];
extern char D_0058D30D[];

void func_0025F830(void *arg0) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, u8 *, 0) = (u8) (*(u8 *)D_0058D30C);
        M2C_FIELD(arg0, u8 *, 1) = (u8) (*(u8 *)D_0058D30D);
    }
}
