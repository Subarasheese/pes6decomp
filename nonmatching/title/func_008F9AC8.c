/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_008F8298(void *);                          /* extern */
s32 func_008F86F8(void *, M2C_UNK);                 /* extern */
s32 func_008F87E0(void *, M2C_UNK);                 /* extern */
M2C_UNK func_008FAA70(void *, M2C_UNK);             /* extern */
M2C_UNK func_008FABD0(void *, M2C_UNK *);           /* extern */
M2C_UNK func_008FABD8();                            /* extern */
M2C_UNK func_00900500(void *, M2C_UNK *, s32);      /* extern */
M2C_UNK func_00900558(void *, M2C_UNK *, s32);      /* extern */
extern char D_00901DE8[];
extern char D_00901E10[];

s32 func_008F9AC8(void *arg0, M2C_UNK arg1, s32 *arg2, s32 *arg3, void *arg4) {
    s32 temp_v0;
    s32 temp_v0_2;

    M2C_FIELD(arg0, s32 *, 0x12C) = 0;
    func_008FABD8();
loop_2:
    if ((func_008F87E0(arg0, 0x18) != 1) && (M2C_FIELD(arg0, s32 *, 0x878) == 0)) {
        func_008FAA70(arg0, 8);
        goto loop_2;
    }
    temp_v0 = func_008F87E0(arg0, 0x20);
    if ((u32) (temp_v0 - 0x101) >= 0xAFU) {
        func_00900558(arg0, ((void *)D_00901DE8), temp_v0);
        return 2;
    }
    func_008FABD0(arg0, ((void *)D_00901DE8));
    M2C_FIELD(arg0, s32 *, 0x1C4) = func_008F86F8(arg0, 5);
    if (func_008F86F8(arg0, 1) != 0) {
        func_008F86F8(arg0, 1);
        func_008FAA70(arg0, 7);
loop_10:
        if (func_008F86F8(arg0, 1) != 0) {
            func_008FAA70(arg0, 8);
            goto loop_10;
        }
    }
    temp_v0_2 = func_008F8298(arg0);
    *arg3 = temp_v0_2;
    if (M2C_FIELD(arg0, s32 *, 0x12C) != 0) {
        func_00900500(arg0, ((void *)D_00901E10), temp_v0_2);
        return 1;
    }
    *arg2 = ((((temp_v0 & 0xFF) - 1) * M2C_FIELD(arg0, s32 *, 0x13C)) + temp_v0_2) - 1;
    *arg3 = 1;
    M2C_FIELD(arg0, s32 *, 0x1C0) = 1;
    M2C_FIELD(arg4, s32 *, 8) = 0;
    M2C_FIELD(arg4, s32 *, 0x14) = 0;
    M2C_FIELD(arg4, s32 *, 0x10) = 0;
    M2C_FIELD(arg4, s32 *, 4) = 0;
    M2C_FIELD(arg4, s32 *, 0) = 0;
    M2C_FIELD(arg4, s32 *, 0x1C) = 0;
    M2C_FIELD(arg4, s32 *, 0x18) = 0;
    M2C_FIELD(arg4, s32 *, 0xC) = 0;
    return 0;
}
