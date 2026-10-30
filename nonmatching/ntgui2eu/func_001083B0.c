/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0019DBD0(M2C_UNK *);                   /* extern */
extern char D_002BA0C0[];
extern char D_005F7710[];

void func_001083B0(void) {
    func_0019DBD0(((void *)D_005F7710));
    if (M2C_FIELD(((void *)D_002BA0C0), s32 *, 0x5C60) > 0) {
        M2C_FIELD(((void *)D_002BA0C0), s32 *, 0x5C60) = -1;
        if (M2C_FIELD(((void *)D_002BA0C0), M2C_UNK (**)(M2C_UNK, M2C_UNK), 0x5C68) != NULL) {
            M2C_FIELD(((void *)D_002BA0C0), M2C_UNK (**)(M2C_UNK, M2C_UNK), 0x5C68)(0, 0);
        }
    }
}
