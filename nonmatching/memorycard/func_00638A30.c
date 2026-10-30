/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_001C4698(void *, void *, M2C_UNK);         /* extern */
M2C_UNK func_001C4730(void *, void *, M2C_UNK);     /* extern */
u8 func_00623430();                                 /* extern */
extern char D_0065C2B0[];
extern char D_0065D0C0[];

void func_00638A30(s32 arg0) {
    if (arg0 == 0) {
        M2C_FIELD(((void *)D_0065D0C0), u8 *, 0x17) = func_00623430();
    }
    if (M2C_FIELD(((void *)D_0065C2B0), u8 *, 0x10) != M2C_FIELD(((void *)D_0065D0C0), u8 *, 0x17)) {
        M2C_FIELD(((void *)D_0065C2B0), u8 *, 0x10) = (u8) M2C_FIELD(((void *)D_0065D0C0), u8 *, 0x17);
        M2C_FIELD(((void *)D_0065C2B0), s8 *, 0) = 1;
        M2C_FIELD(((void *)D_0065C2B0), s8 *, 1) = 1;
        M2C_FIELD(((void *)D_0065C2B0), s8 *, 2) = 1;
        M2C_FIELD(((void *)D_0065C2B0), s8 *, 3) = 1;
        M2C_FIELD(((void *)D_0065C2B0), s8 *, 4) = 1;
    }
    if (M2C_FIELD(((void *)D_0065C2B0), u8 *, 5) != M2C_FIELD(((void *)D_0065D0C0), u8 *, 0xA)) {
        M2C_FIELD(((void *)D_0065C2B0), u8 *, 5) = (u8) M2C_FIELD(((void *)D_0065D0C0), u8 *, 0xA);
        M2C_FIELD(((void *)D_0065C2B0), s8 *, 0) = 1;
        M2C_FIELD(((void *)D_0065C2B0), s8 *, 4) = 1;
        M2C_FIELD(((void *)D_0065C2B0), s8 *, 2) = 1;
        M2C_FIELD(((void *)D_0065C2B0), s8 *, 1) = 1;
    }
    if (M2C_FIELD(((void *)D_0065C2B0), u8 *, 6) != M2C_FIELD(((void *)D_0065D0C0), u8 *, 0xD)) {
        M2C_FIELD(((void *)D_0065C2B0), u8 *, 6) = (u8) M2C_FIELD(((void *)D_0065D0C0), u8 *, 0xD);
        M2C_FIELD(((void *)D_0065C2B0), s8 *, 0) = 1;
        M2C_FIELD(((void *)D_0065C2B0), s8 *, 1) = 1;
        M2C_FIELD(((void *)D_0065C2B0), s8 *, 2) = 1;
    }
    if (M2C_FIELD(((void *)D_0065C2B0), u8 *, 7) != M2C_FIELD(((void *)D_0065D0C0), u8 *, 0xE)) {
        M2C_FIELD(((void *)D_0065C2B0), u8 *, 7) = (u8) M2C_FIELD(((void *)D_0065D0C0), u8 *, 0xE);
        M2C_FIELD(((void *)D_0065C2B0), s8 *, 1) = 1;
        M2C_FIELD(((void *)D_0065C2B0), s8 *, 0) = 1;
    }
    if (func_001C4698(((void *)D_0065C2B0) + 8, ((void *)D_0065D0C0) + 0xF, 8) != 0) {
        func_001C4730(((void *)D_0065C2B0) + 8, ((void *)D_0065D0C0) + 0xF, 8);
        M2C_FIELD(((void *)D_0065C2B0), s8 *, 2) = 1;
        M2C_FIELD(((void *)D_0065C2B0), s8 *, 0) = 1;
    }
}
