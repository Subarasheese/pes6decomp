/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_008A3A18[];
extern char D_008A3A28[];
extern char D_008A3A30[];
extern char D_008A3A50[];

s32 func_00816DC0(void) {
    (*(s32 *)D_008A3A30) = 0;
    (*(s32 *)D_008A3A28) = 0;
    (*(s32 *)D_008A3A18) = 0;
    if (((void *)D_008A3A50) != NULL) {
        M2C_FIELD(((void *)D_008A3A50), s8 *, 1) = 0;
        M2C_FIELD(((void *)D_008A3A50), s8 *, 0) = 1;
        M2C_FIELD(((void *)D_008A3A50), s8 *, 2) = 0;
        M2C_FIELD(((void *)D_008A3A50), s8 *, 3) = 0;
        M2C_FIELD(((void *)D_008A3A50), s8 *, 4) = 0;
        M2C_FIELD(((void *)D_008A3A50), s8 *, 5) = 0;
        M2C_FIELD(((void *)D_008A3A50), s8 *, 0x20C) = 0;
    }
    return 1;
}
