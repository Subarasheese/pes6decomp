/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0036E0E0(void *, u8);                  /* extern */
M2C_UNK func_0036E490(void *, u8);                  /* extern */
M2C_UNK func_0036E8C0(void *);                      /* extern */
s32 func_008BD440(void *, s32);                     /* extern */
s32 func_008E0990(s32, M2C_UNK);                    /* extern */

void func_0036DFC0(void *arg0, void *arg1, void *arg2, void *arg3) {
    s32 temp_v1;

    if (func_008E0990(arg0 + 0x26DC, 0xD) != 0) {
        if (M2C_FIELD(arg2, u8 *, 0xD) == 0) {
            M2C_FIELD(arg1, s8 *, 0x7CD) = 0;
        } else {
            M2C_FIELD(arg1, s8 *, 0x7CD) = 1;
            M2C_FIELD(arg3, s32 *, 0x34) = 0x011D002A;
        }
    }
    if (M2C_FIELD(arg2, u8 *, 2) == 0) {
        if (M2C_FIELD(arg2, u8 *, 3) != 0) {
            M2C_FIELD(arg3, s32 *, 0xC) = 0x011D001A;
            func_0036E490(arg1, M2C_FIELD(arg0, u8 *, 0x946));
        }
    } else {
        M2C_FIELD(arg3, s32 *, 8) = 0x011D0019;
        func_0036E0E0(arg1, M2C_FIELD(arg0, u8 *, 0x946));
    }
    if (M2C_FIELD(arg2, u8 *, 7) != 0) {
        temp_v1 = M2C_FIELD(arg0, s32 *, 0x3220);
        if ((temp_v1 != 0) && (func_008BD440(arg1, temp_v1 + 0x208) != 0)) {
            M2C_FIELD(arg3, s32 *, 0x1C) = 0x011D001E;
        }
    }
    if (M2C_FIELD(arg2, u8 *, 4) != 0) {
        M2C_FIELD(arg3, s32 *, 0x10) = 0x011D001B;
        func_0036E8C0(arg1);
    }
}
