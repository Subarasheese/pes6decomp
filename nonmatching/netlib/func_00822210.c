/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00821D50(void *);                      /* extern */
extern void *D_008A4398;
extern char D_008A5F70[];

s32 func_00822210(void) {
    if (D_008A4398 == NULL) {
        return 1;
    }
    if (((void *)D_008A5F70) != NULL) {
        if (M2C_FIELD(D_008A4398, s32 *, 0x13ACC) != 0x106) {

        } else {
            func_00821D50(D_008A4398 + 0x13ACC);
        }
        return 4;
    }
    return 1;
}
