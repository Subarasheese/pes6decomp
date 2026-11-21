/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

extern void *func_00BDD038(void *);

s32 func_00BDCE98(void *arg0) {
    return M2C_FIELD(func_00BDD038(arg0), s32 *, 8);
}
