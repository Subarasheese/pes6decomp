/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_005E2200[];
extern char D_005E2208[];

f32 func_002A88E0(void) {
    if (!((*(f32 *)D_005E2208) <= 0.0f)) {
        return (*(f32 *)D_005E2208);
    }
    if ((*(f32 *)D_005E2208) == 0.0f) {
        return (*(f32 *)D_005E2200);
    }
    return -(*(f32 *)D_005E2208);
}
