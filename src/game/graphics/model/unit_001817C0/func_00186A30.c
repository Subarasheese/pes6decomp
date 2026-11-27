/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
f32 Pes6StadiumShadow_Sample();                                /* extern */

f32 func_00186A30(void) {
    return 1.0f - Pes6StadiumShadow_Sample();
}
