/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00A7DC10[];

s32 func_009B8570(void) {
    if ((*(s32 *)D_00A7DC10) != 0) {
        return (*(s32 *)D_00A7DC10) + 0xC8;
    }
    return 0;
}
