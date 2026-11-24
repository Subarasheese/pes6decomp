/* compiler: mwcc-3.0.1b210 */
#include "pes6/overlay_module.h"
extern u32 func_001CDA50(s32);
s32 func_00342410(void) {
    s32 moduleIds[] = {29, 30, 31, 32, 34, 28, 29, 29, 29, 33};
    return moduleIds[func_001CDA50(0)];
}
