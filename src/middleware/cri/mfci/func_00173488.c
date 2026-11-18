/* compiler: ee-gcc-2.96 */
#include "pes6/m2c.h"

extern void func_00172E10(void *, void *);
extern char D_003CB4D8[];

s8 func_00173488(void *arg0) {
    if (arg0 == NULL) {
        func_00172E10(arg0, ((void *)D_003CB4D8));
        return 0;
    }
    return M2C_FIELD(arg0, s8 *, 1);
}
