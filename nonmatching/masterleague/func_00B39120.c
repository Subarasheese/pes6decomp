/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001D7980(void *);
extern u32 func_00B3D3D0(void);
s32 func_00B39120(void) {
    u32 temp_v0;

    temp_v0 = func_00B3D3D0();
    if (temp_v0 != 0) {
        return func_001D7980(M2C_FIELD(temp_v0, void **, 4));
    }
    return 0;
}
