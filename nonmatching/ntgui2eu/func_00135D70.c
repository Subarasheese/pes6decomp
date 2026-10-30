/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_001610E8();                                /* extern */
extern char D_005BC204[];

s32 func_00135D70(void) {
    return (*(s32 *)D_005BC204) | func_001610E8();
}
