/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern M2C_UNK (*D_00A7DDE0)(M2C_UNK *);
extern char D_00A7DDE8[];

s32 func_009CDA20(void) {
    D_00A7DDE0(&D_00A7DDE0);
    return (*(s32 *)D_00A7DDE8);
}
