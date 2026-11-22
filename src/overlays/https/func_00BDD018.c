/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

extern s32 func_00B9DF70(void *);

s32 func_00BDD018(void *arg0) {
    return func_00B9DF70(*M2C_FIELD(arg0, void ***, 4));
}
