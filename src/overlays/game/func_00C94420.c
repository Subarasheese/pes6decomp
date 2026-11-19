/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

/* Word i of the table D_00CCD94C points to. */
extern char D_00CCD94C[];

s32 func_00C94420(s32 i) {
    return (*(s32 **)D_00CCD94C)[i];
}
