/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
typedef struct {
    s16 first;
    s16 second;
} Pair;
Pair func_00264240(void *object) {
    Pair result;
    result.first = M2C_FIELD(object,u16 *,0x1BC);
    result.second = M2C_FIELD(object,u16 *,0x1BE);
    return result;
}
