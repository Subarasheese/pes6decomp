/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00AE2A60(void *);                          /* extern */
extern char D_00B02680[];
extern void *D_00B02688;

s32 func_00AE8E10(void) {
    s32 temp_v0;

    temp_v0 = func_00AE2A60(D_00B02688 + 0x1400);
    switch (temp_v0) {                              /* irregular */
    case 7:
    case 13:
        (*(s32 *)D_00B02680) = temp_v0;
        return 1;
    case 3:
        M2C_FIELD(D_00B02688, u8 *, 4) = (u8) ((M2C_FIELD(D_00B02688, u8 *, 4) & ~1) | 1);
        return 1;
    default:
        return temp_v0;
    }
}
