/* compiler: mwcc-3.0.1b210 */
/* Written from the assembly (m2c gave up); compiles to the original instructions exactly. */
#include "pes6/m2c.h"

f32 sqrtf(f32);

/* Square root (sqrt.s): the EE takes the root of |x|, never a NaN. */
f32 func_001CD9E0(f32 x) {
    return sqrtf(x);
}
