/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_001B9B30(s32, M2C_UNK, M2C_UNK, M2C_UNK);  /* extern */
M2C_UNK func_009712F0(s32, M2C_UNK, M2C_UNK);       /* extern */
s32 func_00971580(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK *); /* extern */
M2C_UNK func_00971B80(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_00971CE0(s32, M2C_UNK);                /* extern */
s32 func_00971E80(s32, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_00973AA0(s32, M2C_UNK);                /* extern */
s32 func_00973CD0(s32, M2C_UNK);                    /* extern */
void *func_00989410();                              /* extern */
extern char D_009C60A0[];

void func_009883D0(void) {
    s32 temp_v0_2;
    void *temp_v0;

    temp_v0 = func_00989410();
    if (temp_v0 != NULL) {
        temp_v0_2 = func_00973CD0(M2C_FIELD(temp_v0, s32 *, 0), 0);
        func_00973AA0(temp_v0_2, 0);
        func_00973AA0(temp_v0_2, 1);
        M2C_FIELD(temp_v0, s32 *, 8) = temp_v0_2;
        M2C_FIELD(temp_v0, s32 *, 4) = func_00971E80(temp_v0_2, 0, 0xFFFF, 0, 0xA);
        func_00973AA0(temp_v0_2, 0);
        func_00973AA0(temp_v0_2, 1);
        M2C_FIELD(temp_v0, s32 *, 0x254) = func_001B9B30(M2C_FIELD(temp_v0, s32 *, 0), 2, 0x11, 0x12);
        M2C_FIELD(temp_v0, s32 *, 0x490) = func_00971580(0, 0, 0, ((void *)D_009C60A0), ((void *)D_009C60A0));
        if ((s32) M2C_FIELD(temp_v0, u8 *, 0x473) < 2) {
            func_009712F0(M2C_FIELD(temp_v0, s32 *, 0x490), 2, 0);
        }
        if (M2C_FIELD((M2C_FIELD(temp_v0, u8 *, 0x472) + temp_v0), u8 *, 0x46E) == 0) {
            func_00971CE0(M2C_FIELD(temp_v0, s32 *, 4), 0);
        }
        func_00971B80(M2C_FIELD(temp_v0, s32 *, 4), 2, 0);
    }
}
