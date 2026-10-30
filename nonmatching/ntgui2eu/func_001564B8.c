/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_005FCD38[];
extern char D_005FCD40[];

void func_001564B8(void *arg0) {
    s32 temp_a0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0x1304);
    if (temp_a0 == 2) {
        M2C_FIELD(arg0, u8 *, 0x1315) = 0U;
        M2C_FIELD(arg0, u8 *, 0x1310) = 0U;
    }
    if (M2C_FIELD(arg0, u8 *, 0x1315) == 1) {
        M2C_FIELD(arg0, s32 *, 0x131C) = 0x5AE;
        M2C_FIELD(arg0, s32 *, 0x1300) = -1;
        M2C_FIELD(arg0, u8 *, 0x1310) = 0U;
        M2C_FIELD(arg0, s8 *, 0x1316) = 0;
        M2C_FIELD(arg0, s8 *, 0x1317) = 0;
        M2C_FIELD(arg0, s8 *, 0x1318) = 0;
        M2C_FIELD(arg0, u8 *, 0xE00) = (u8) M2C_FIELD(((void *)D_005FCD38), u8 *, 0);
        M2C_FIELD(arg0, u8 *, 0xF00) = (u8) M2C_FIELD(((void *)D_005FCD38), u8 *, 0);
        M2C_FIELD(arg0, s8 *, 0x1313) = 1;
        M2C_FIELD(arg0, u8 *, 0x1000) = (u8) M2C_FIELD(((void *)D_005FCD38), u8 *, 0);
        M2C_FIELD(arg0, s8 *, 0x1314) = 4;
        M2C_FIELD(arg0, s32 *, 0x130C) = 0;
        M2C_FIELD(arg0, s8 *, 0x1200) = (s8) M2C_FIELD(((void *)D_005FCD40), s8 *, 0);
        M2C_FIELD(arg0, s8 *, 0x1201) = (s8) M2C_FIELD(((void *)D_005FCD40), s8 *, 1);
        M2C_FIELD(arg0, u8 *, 0x200) = (u8) M2C_FIELD(((void *)D_005FCD38), u8 *, 0);
        M2C_FIELD(arg0, u8 *, 0x300) = (u8) M2C_FIELD(((void *)D_005FCD38), u8 *, 0);
        M2C_FIELD(arg0, u8 *, 0x400) = (u8) M2C_FIELD(((void *)D_005FCD38), u8 *, 0);
        goto block_7;
    }
    M2C_FIELD(arg0, s8 *, 0x1318) = 0xFF;
    M2C_FIELD(arg0, s8 *, 0x1316) = 0xFF;
    M2C_FIELD(arg0, s8 *, 0x1317) = 0xFF;
    M2C_FIELD(arg0, s32 *, 0x131C) = -1;
    if (temp_a0 == 2) {
        M2C_FIELD(arg0, s32 *, 0x1308) = -1;
        M2C_FIELD(arg0, s8 *, 0x1313) = 1;
        M2C_FIELD(arg0, s8 *, 0x1314) = 4;
        M2C_FIELD(arg0, s8 *, 0x1200) = (s8) M2C_FIELD(((void *)D_005FCD40), s8 *, 0);
        M2C_FIELD(arg0, s8 *, 0x1201) = (s8) M2C_FIELD(((void *)D_005FCD40), s8 *, 1);
        M2C_FIELD(arg0, u8 *, 0x200) = (u8) M2C_FIELD(((void *)D_005FCD38), u8 *, 0);
        M2C_FIELD(arg0, u8 *, 0x300) = (u8) M2C_FIELD(((void *)D_005FCD38), u8 *, 0);
        M2C_FIELD(arg0, u8 *, 0x400) = (u8) M2C_FIELD(((void *)D_005FCD38), u8 *, 0);
    } else {
        M2C_FIELD(arg0, s32 *, 0x130C) = -1;
        M2C_FIELD(arg0, s32 *, 0x1300) = -1;
        M2C_FIELD(arg0, u8 *, 0xE00) = (u8) M2C_FIELD(((void *)D_005FCD38), u8 *, 0);
        M2C_FIELD(arg0, u8 *, 0xF00) = (u8) M2C_FIELD(((void *)D_005FCD38), u8 *, 0);
        M2C_FIELD(arg0, s8 *, 0x1313) = 0;
        M2C_FIELD(arg0, u8 *, 0x1000) = (u8) M2C_FIELD(((void *)D_005FCD38), u8 *, 0);
        M2C_FIELD(arg0, s8 *, 0x1314) = 0;
        M2C_FIELD(arg0, s8 *, 0x1200) = (s8) M2C_FIELD(((void *)D_005FCD38), u8 *, 0);
        M2C_FIELD(arg0, u8 *, 0xA00) = (u8) M2C_FIELD(((void *)D_005FCD38), u8 *, 0);
        M2C_FIELD(arg0, u8 *, 0xB00) = (u8) M2C_FIELD(((void *)D_005FCD38), u8 *, 0);
block_7:
        M2C_FIELD(arg0, u8 *, 0x700) = (u8) M2C_FIELD(((void *)D_005FCD38), u8 *, -0x32C8);
        M2C_FIELD(arg0, u8 *, 0x800) = (u8) M2C_FIELD(((void *)D_005FCD38), u8 *, -0x32C8);
        M2C_FIELD(arg0, u8 *, 0x900) = (u8) M2C_FIELD(((void *)D_005FCD38), u8 *, -0x32C8);
    }
    if (M2C_FIELD(arg0, u8 *, 0x1310) == 1) {
        M2C_FIELD(arg0, u8 *, 0x200) = (u8) M2C_FIELD(((void *)D_005FCD38), u8 *, -0x32C8);
        M2C_FIELD(arg0, u8 *, 0x300) = (u8) M2C_FIELD(((void *)D_005FCD38), u8 *, -0x32C8);
        M2C_FIELD(arg0, u8 *, 0x400) = (u8) M2C_FIELD(((void *)D_005FCD38), u8 *, -0x32C8);
    } else {
        M2C_FIELD(arg0, u8 *, 0x1100) = (u8) M2C_FIELD(((void *)D_005FCD38), u8 *, -0x32C8);
    }
    if (((s32) M2C_FIELD(arg0, u8 *, 0x1310) & 0xFFFF00) == 0x10100) {
        M2C_FIELD(arg0, u8 *, 0x500) = (u8) M2C_FIELD(((void *)D_005FCD38), u8 *, -0x32C8);
        M2C_FIELD(arg0, u8 *, 0x600) = (u8) M2C_FIELD(((void *)D_005FCD38), u8 *, -0x32C8);
        if ((M2C_FIELD(arg0, s32 *, 0x1304) != 2) && (M2C_FIELD(arg0, u8 *, 0x1315) != 1)) {
            M2C_FIELD(arg0, s8 *, 0x1312) = 0xFF;
            M2C_FIELD(arg0, s8 *, 0x1311) = 0xFF;
        }
    }
}
