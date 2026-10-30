/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_0065C340[];
extern char D_0065C348[];
extern char D_008FEA80[];
extern char D_008FEA84[];

void func_008F6AD0(void) {
    if ((*(u8 *)D_0065C348) != (*(u8 *)D_008FEA84)) {
        M2C_FIELD(((void *)D_0065C340), u8 *, 2) = 1U;
    }
    if (M2C_FIELD(((void *)D_0065C340), u8 *, 6) != M2C_FIELD(((void *)D_008FEA80), u8 *, 2)) {
        M2C_FIELD(((void *)D_0065C340), u8 *, 2) = 1U;
        M2C_FIELD(((void *)D_0065C340), u8 *, 4) = 1U;
    }
    if ((M2C_FIELD(((void *)D_0065C340), u8 *, 9) != M2C_FIELD(((void *)D_008FEA80), u8 *, 5)) || (M2C_FIELD(((void *)D_0065C340), u8 *, 0xA) != M2C_FIELD(((void *)D_008FEA80), u8 *, 6))) {
        M2C_FIELD(((void *)D_0065C340), u8 *, 2) = 1U;
        M2C_FIELD(((void *)D_0065C340), u8 *, 3) = 1U;
        M2C_FIELD(((void *)D_0065C340), u8 *, 4) = 1U;
    }
    if (M2C_FIELD(((void *)D_0065C340), u8 *, 7) != M2C_FIELD(((void *)D_008FEA80), u8 *, 3)) {
        M2C_FIELD(((void *)D_0065C340), u8 *, 2) = 1U;
    }
    if ((M2C_FIELD(((void *)D_0065C340), u8 *, 6) != M2C_FIELD(((void *)D_008FEA80), u8 *, 2)) || (M2C_FIELD(((void *)D_0065C340), u8 *, 7) != M2C_FIELD(((void *)D_008FEA80), u8 *, 3)) || (M2C_FIELD(((void *)D_0065C340), u8 *, 8) != M2C_FIELD(((void *)D_008FEA80), u8 *, 4)) || (M2C_FIELD(((void *)D_0065C340), u8 *, 9) != M2C_FIELD(((void *)D_008FEA80), u8 *, 5)) || (M2C_FIELD(((void *)D_0065C340), u8 *, 0xA) != M2C_FIELD(((void *)D_008FEA80), u8 *, 6)) || (M2C_FIELD(((void *)D_0065C340), s32 *, 0x14) != M2C_FIELD(((void *)D_008FEA80), s8 *, 8)) || (M2C_FIELD(((void *)D_0065C340), s32 *, 0x18) != M2C_FIELD(((void *)D_008FEA80), s8 *, 9))) {
        M2C_FIELD(((void *)D_0065C340), u8 *, 6) = (u8) M2C_FIELD(((void *)D_008FEA80), u8 *, 2);
        M2C_FIELD(((void *)D_0065C340), u8 *, 3) = 1U;
        M2C_FIELD(((void *)D_0065C340), u8 *, 7) = (u8) M2C_FIELD(((void *)D_008FEA80), u8 *, 3);
        M2C_FIELD(((void *)D_0065C340), u8 *, 8) = (u8) M2C_FIELD(((void *)D_008FEA80), u8 *, 4);
        M2C_FIELD(((void *)D_0065C340), u8 *, 9) = (u8) M2C_FIELD(((void *)D_008FEA80), u8 *, 5);
        M2C_FIELD(((void *)D_0065C340), u8 *, 0xA) = (u8) M2C_FIELD(((void *)D_008FEA80), u8 *, 6);
        M2C_FIELD(((void *)D_0065C340), s32 *, 0x14) = (s32) M2C_FIELD(((void *)D_008FEA80), s8 *, 8);
        M2C_FIELD(((void *)D_0065C340), s32 *, 0x18) = (s32) M2C_FIELD(((void *)D_008FEA80), s8 *, 9);
    }
    if ((M2C_FIELD(((void *)D_0065C340), u8 *, 3) == 1) || (M2C_FIELD(((void *)D_0065C340), u8 *, 4) == 1) || (M2C_FIELD(((void *)D_0065C340), u8 *, 2) == 1) || (M2C_FIELD(((void *)D_0065C340), u8 *, 0xB) == 1)) {
        M2C_FIELD(((void *)D_0065C340), s8 *, 1) = 1;
    }
    if (M2C_FIELD(((void *)D_008FEA80), u8 *, 0) == 6) {
        M2C_FIELD(((void *)D_0065C340), s8 *, 0xD) = 1;
    }
    if (M2C_FIELD(((void *)D_0065C340), u8 *, 0xE) != M2C_FIELD(((void *)D_008FEA80), u8 *, 7)) {
        M2C_FIELD(((void *)D_0065C340), u8 *, 0xE) = (u8) M2C_FIELD(((void *)D_008FEA80), u8 *, 7);
        M2C_FIELD(((void *)D_0065C340), s8 *, 5) = 1;
        M2C_FIELD(((void *)D_0065C340), s8 *, 1) = 1;
    }
}
