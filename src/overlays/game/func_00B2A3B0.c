/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 func_00B29E20();
extern s32 D_005E381C[];

s32 func_00B2A3B0(void) {
    return (func_00B29E20() != 0) ? D_005E381C[0] : 0;
}
