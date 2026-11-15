/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
s32 Pes6Texture_GetPixels();                                /* extern */

s32 func_0014AEB0(s32 arg0) {
    if (arg0 == 0) {
        return 0;
    }
    return Pes6Texture_GetPixels();
}
