/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern M2C_UNK (*D_00CE5BE0)(M2C_UNK *);
extern s32 (*D_00CE5BE4)(M2C_UNK (**)(M2C_UNK *));

s32 func_00BE5B00(void) {
    if (D_00CE5BE0 != NULL) {
        D_00CE5BE0(&D_00CE5BE0);
        D_00CE5BE0 = NULL;
    }
    if (D_00CE5BE4 == NULL) {
        return 0;
    }
    return D_00CE5BE4(&D_00CE5BE0);
}
