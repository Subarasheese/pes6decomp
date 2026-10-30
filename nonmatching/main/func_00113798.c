/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00372AA4[];
extern M2C_UNK (*D_003F35C8)(s32, M2C_UNK);
extern char D_003F35D0[];

void func_00113798(void) {
    if (D_003F35C8 != NULL) {
        if ((*(s32 *)D_00372AA4) == 0) {
            D_003F35C8((*(s32 *)D_003F35D0), D_003F35C8);
        }
    }
}
