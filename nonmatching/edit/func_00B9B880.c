/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00B91100(void);
extern char D_00CE3F40[];
extern char D_00CE3F50[];

void func_00B9B880(void) {
    if ((*(s32 *)D_00CE3F50) == 0) {
        if (M2C_FIELD(((void *)D_00CE3F40), s32 *, 0x14) != 0) {
            M2C_FIELD(((void *)D_00CE3F40), s32 *, 8) = 3;
            M2C_FIELD(((void *)D_00CE3F40), s32 *, 0x28) = 0x61;
            func_00B91100();
            return;
        }
        M2C_FIELD(((void *)D_00CE3F40), s32 *, 8) = 4;
        M2C_FIELD(((void *)D_00CE3F40), s32 *, 0x28) = 0x10;
        return;
    }
    switch (M2C_FIELD(((void *)D_00CE3F40), s32 *, 0x10)) {  /* switch 1; irregular */
    case 1:                                         /* switch 1 */
        switch (M2C_FIELD(((void *)D_00CE3F40), s32 *, 0x14)) { /* switch 2; irregular */
        case 0:                                     /* switch 2 */
            M2C_FIELD(((void *)D_00CE3F40), s32 *, 8) = 4;
            M2C_FIELD(((void *)D_00CE3F40), s32 *, 0x28) = 0x10;
            return;
        case 1:                                     /* switch 2 */
            M2C_FIELD(((void *)D_00CE3F40), s32 *, 8) = 4;
            M2C_FIELD(((void *)D_00CE3F40), s32 *, 0x28) = 0x81;
            func_00B91100();
            return;
        default:                                    /* switch 2 */
            M2C_FIELD(((void *)D_00CE3F40), s32 *, 8) = 3;
            M2C_FIELD(((void *)D_00CE3F40), s32 *, 0x28) = 0x10;
            return;
        }
        break;
    case 4:                                         /* switch 1 */
        if (M2C_FIELD(((void *)D_00CE3F40), s32 *, 0x14) != 0) {
            M2C_FIELD(((void *)D_00CE3F40), s32 *, 8) = 3;
            M2C_FIELD(((void *)D_00CE3F40), s32 *, 0x28) = 0x91;
            func_00B91100();
            return;
        }
        M2C_FIELD(((void *)D_00CE3F40), s32 *, 8) = 2;
        M2C_FIELD(((void *)D_00CE3F40), s32 *, 0x28) = 0x10;
        return;
    case 5:                                         /* switch 1 */
        if (M2C_FIELD(((void *)D_00CE3F40), s32 *, 0x14) != 0) {
            M2C_FIELD(((void *)D_00CE3F40), s32 *, 8) = 3;
            M2C_FIELD(((void *)D_00CE3F40), s32 *, 0x28) = 0xA1;
            func_00B91100();
            return;
        }
        M2C_FIELD(((void *)D_00CE3F40), s32 *, 8) = 2;
        M2C_FIELD(((void *)D_00CE3F40), s32 *, 0x28) = 0x10;
        return;
    }
}
