/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

extern void *func_00BDD048(void *);

s32 func_00BDCF58(void *arg0) {
    return M2C_FIELD(func_00BDD048(arg0), s32 *, 8);
}
