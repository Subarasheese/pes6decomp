/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CE3EF0[];
extern char D_00CE3EF8[];
extern char D_00CE4080[];
extern char D_00CE4084[];

void func_00B9CC20(void) {
    if ((*(u8 *)D_00CE3EF8) != (*(u8 *)D_00CE4084)) {
        M2C_FIELD(((void *)D_00CE3EF0), u8 *, 2) = 1U;
    }
    if (M2C_FIELD(((void *)D_00CE3EF0), u8 *, 6) != M2C_FIELD(((void *)D_00CE4080), u8 *, 2)) {
        M2C_FIELD(((void *)D_00CE3EF0), u8 *, 2) = 1U;
        M2C_FIELD(((void *)D_00CE3EF0), u8 *, 4) = 1U;
    }
    if ((M2C_FIELD(((void *)D_00CE3EF0), u8 *, 9) != M2C_FIELD(((void *)D_00CE4080), u8 *, 5)) || (M2C_FIELD(((void *)D_00CE3EF0), u8 *, 0xA) != M2C_FIELD(((void *)D_00CE4080), u8 *, 6))) {
        M2C_FIELD(((void *)D_00CE3EF0), u8 *, 2) = 1U;
        M2C_FIELD(((void *)D_00CE3EF0), u8 *, 3) = 1U;
        M2C_FIELD(((void *)D_00CE3EF0), u8 *, 4) = 1U;
    }
    if (M2C_FIELD(((void *)D_00CE3EF0), u8 *, 7) != M2C_FIELD(((void *)D_00CE4080), u8 *, 3)) {
        M2C_FIELD(((void *)D_00CE3EF0), u8 *, 2) = 1U;
    }
    if ((M2C_FIELD(((void *)D_00CE3EF0), u8 *, 6) != M2C_FIELD(((void *)D_00CE4080), u8 *, 2)) || (M2C_FIELD(((void *)D_00CE3EF0), u8 *, 7) != M2C_FIELD(((void *)D_00CE4080), u8 *, 3)) || (M2C_FIELD(((void *)D_00CE3EF0), u8 *, 8) != M2C_FIELD(((void *)D_00CE4080), u8 *, 4)) || (M2C_FIELD(((void *)D_00CE3EF0), u8 *, 9) != M2C_FIELD(((void *)D_00CE4080), u8 *, 5)) || (M2C_FIELD(((void *)D_00CE3EF0), u8 *, 0xA) != M2C_FIELD(((void *)D_00CE4080), u8 *, 6)) || (M2C_FIELD(((void *)D_00CE3EF0), s32 *, 0x14) != M2C_FIELD(((void *)D_00CE4080), s32 *, 8)) || (M2C_FIELD(((void *)D_00CE3EF0), s32 *, 0x18) != M2C_FIELD(((void *)D_00CE4080), s32 *, 0xC))) {
        M2C_FIELD(((void *)D_00CE3EF0), u8 *, 6) = (u8) M2C_FIELD(((void *)D_00CE4080), u8 *, 2);
        M2C_FIELD(((void *)D_00CE3EF0), u8 *, 3) = 1U;
        M2C_FIELD(((void *)D_00CE3EF0), u8 *, 7) = (u8) M2C_FIELD(((void *)D_00CE4080), u8 *, 3);
        M2C_FIELD(((void *)D_00CE3EF0), u8 *, 8) = (u8) M2C_FIELD(((void *)D_00CE4080), u8 *, 4);
        M2C_FIELD(((void *)D_00CE3EF0), u8 *, 9) = (u8) M2C_FIELD(((void *)D_00CE4080), u8 *, 5);
        M2C_FIELD(((void *)D_00CE3EF0), u8 *, 0xA) = (u8) M2C_FIELD(((void *)D_00CE4080), u8 *, 6);
        M2C_FIELD(((void *)D_00CE3EF0), s32 *, 0x14) = (s32) M2C_FIELD(((void *)D_00CE4080), s32 *, 8);
        M2C_FIELD(((void *)D_00CE3EF0), s32 *, 0x18) = (s32) M2C_FIELD(((void *)D_00CE4080), s32 *, 0xC);
    }
    if ((M2C_FIELD(((void *)D_00CE3EF0), u8 *, 3) == 1) || (M2C_FIELD(((void *)D_00CE3EF0), u8 *, 4) == 1) || (M2C_FIELD(((void *)D_00CE3EF0), u8 *, 2) == 1) || (M2C_FIELD(((void *)D_00CE3EF0), u8 *, 0xB) == 1)) {
        M2C_FIELD(((void *)D_00CE3EF0), s8 *, 1) = 1;
    }
    if (M2C_FIELD(((void *)D_00CE4080), u8 *, 0) == 0x50) {
        M2C_FIELD(((void *)D_00CE3EF0), s8 *, 0xD) = 1;
    }
}
