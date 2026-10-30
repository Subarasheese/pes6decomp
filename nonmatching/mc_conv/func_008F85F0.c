/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_0065C640[];
extern char D_0065C648[];
extern char D_008FEAA0[];
extern char D_008FEAA4[];

void func_008F85F0(void) {
    if ((*(u8 *)D_0065C648) != (*(u8 *)D_008FEAA4)) {
        M2C_FIELD(((void *)D_0065C640), u8 *, 2) = 1U;
    }
    if (M2C_FIELD(((void *)D_0065C640), u8 *, 6) != M2C_FIELD(((void *)D_008FEAA0), u8 *, 2)) {
        M2C_FIELD(((void *)D_0065C640), u8 *, 2) = 1U;
        M2C_FIELD(((void *)D_0065C640), u8 *, 4) = 1U;
    }
    if ((M2C_FIELD(((void *)D_0065C640), u8 *, 9) != M2C_FIELD(((void *)D_008FEAA0), u8 *, 5)) || (M2C_FIELD(((void *)D_0065C640), u8 *, 0xA) != M2C_FIELD(((void *)D_008FEAA0), u8 *, 6))) {
        M2C_FIELD(((void *)D_0065C640), u8 *, 2) = 1U;
        M2C_FIELD(((void *)D_0065C640), u8 *, 3) = 1U;
        M2C_FIELD(((void *)D_0065C640), u8 *, 4) = 1U;
    }
    if (M2C_FIELD(((void *)D_0065C640), u8 *, 7) != M2C_FIELD(((void *)D_008FEAA0), u8 *, 3)) {
        M2C_FIELD(((void *)D_0065C640), u8 *, 2) = 1U;
    }
    if ((M2C_FIELD(((void *)D_0065C640), u8 *, 6) != M2C_FIELD(((void *)D_008FEAA0), u8 *, 2)) || (M2C_FIELD(((void *)D_0065C640), u8 *, 7) != M2C_FIELD(((void *)D_008FEAA0), u8 *, 3)) || (M2C_FIELD(((void *)D_0065C640), u8 *, 8) != M2C_FIELD(((void *)D_008FEAA0), u8 *, 4)) || (M2C_FIELD(((void *)D_0065C640), u8 *, 9) != M2C_FIELD(((void *)D_008FEAA0), u8 *, 5)) || (M2C_FIELD(((void *)D_0065C640), u8 *, 0xA) != M2C_FIELD(((void *)D_008FEAA0), u8 *, 6)) || (M2C_FIELD(((void *)D_0065C640), s32 *, 0x14) != M2C_FIELD(((void *)D_008FEAA0), s8 *, 8)) || (M2C_FIELD(((void *)D_0065C640), s32 *, 0x18) != M2C_FIELD(((void *)D_008FEAA0), s8 *, 9))) {
        M2C_FIELD(((void *)D_0065C640), u8 *, 6) = (u8) M2C_FIELD(((void *)D_008FEAA0), u8 *, 2);
        M2C_FIELD(((void *)D_0065C640), u8 *, 3) = 1U;
        M2C_FIELD(((void *)D_0065C640), u8 *, 7) = (u8) M2C_FIELD(((void *)D_008FEAA0), u8 *, 3);
        M2C_FIELD(((void *)D_0065C640), u8 *, 8) = (u8) M2C_FIELD(((void *)D_008FEAA0), u8 *, 4);
        M2C_FIELD(((void *)D_0065C640), u8 *, 9) = (u8) M2C_FIELD(((void *)D_008FEAA0), u8 *, 5);
        M2C_FIELD(((void *)D_0065C640), u8 *, 0xA) = (u8) M2C_FIELD(((void *)D_008FEAA0), u8 *, 6);
        M2C_FIELD(((void *)D_0065C640), s32 *, 0x14) = (s32) M2C_FIELD(((void *)D_008FEAA0), s8 *, 8);
        M2C_FIELD(((void *)D_0065C640), s32 *, 0x18) = (s32) M2C_FIELD(((void *)D_008FEAA0), s8 *, 9);
    }
    if ((M2C_FIELD(((void *)D_0065C640), u8 *, 3) == 1) || (M2C_FIELD(((void *)D_0065C640), u8 *, 4) == 1) || (M2C_FIELD(((void *)D_0065C640), u8 *, 2) == 1) || (M2C_FIELD(((void *)D_0065C640), u8 *, 0xB) == 1)) {
        M2C_FIELD(((void *)D_0065C640), s8 *, 1) = 1;
    }
    if (M2C_FIELD(((void *)D_008FEAA0), u8 *, 0) == 6) {
        M2C_FIELD(((void *)D_0065C640), s8 *, 0xD) = 1;
    }
    if (M2C_FIELD(((void *)D_0065C640), u8 *, 0xE) != M2C_FIELD(((void *)D_008FEAA0), u8 *, 7)) {
        M2C_FIELD(((void *)D_0065C640), u8 *, 0xE) = (u8) M2C_FIELD(((void *)D_008FEAA0), u8 *, 7);
        M2C_FIELD(((void *)D_0065C640), s8 *, 5) = 1;
        M2C_FIELD(((void *)D_0065C640), s8 *, 1) = 1;
    }
}
