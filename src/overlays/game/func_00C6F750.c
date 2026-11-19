/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

/* Word i of the table D_00CCBC84 points to. */
extern char D_00CCBC84[];

s32 func_00C6F750(s32 i) {
    return (*(s32 **)D_00CCBC84)[i];
}
