/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0019DBD0(M2C_UNK *);                   /* extern */
extern char D_002BA0C0[];
extern char D_005F7700[];

void func_00108360(void) {
    func_0019DBD0(((void *)D_005F7700));
    if (M2C_FIELD(((void *)D_002BA0C0), s32 *, 0x5C60) > 0) {
        M2C_FIELD(((void *)D_002BA0C0), s32 *, 0x5C60) = -1;
        if (M2C_FIELD(((void *)D_002BA0C0), M2C_UNK (**)(M2C_UNK, M2C_UNK *), 0x5C68) != NULL) {
            M2C_FIELD(((void *)D_002BA0C0), M2C_UNK (**)(M2C_UNK, M2C_UNK *), 0x5C68)(0, ((void *)D_002BA0C0));
        }
    }
}
