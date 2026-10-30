/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_008B4920();                                /* extern */
s32 func_008B93A0();                                /* extern */
s64 func_008B9660();                                /* extern */
s32 func_008BC3B0();                                /* extern */
s32 func_008BF0E0();                                /* extern */
M2C_UNK func_008E09A0(void *, M2C_UNK, M2C_UNK);    /* extern */

void func_0036EDE0(void *arg0) {
    if (func_008BF0E0() != 0) {
        func_008E09A0(arg0 + 0x26DC, 0xA, 0);
        func_008E09A0(arg0 + 0x26DC, 0xB, 0);
        func_008E09A0(arg0 + 0x26DC, 0xC, 0);
    }
    if ((M2C_FIELD(arg0, u8 *, 0x946) != 0) || (((s64) (func_008B9660() << 0x30) >> 0x30) == 8)) {
        func_008E09A0(arg0 + 0x26DC, 9, 0);
        func_008E09A0(arg0 + 0x26DC, 0xA, 0);
        func_008E09A0(arg0 + 0x26DC, 0xB, 0);
        func_008E09A0(arg0 + 0x26DC, 0xC, 0);
        func_008E09A0(arg0 + 0x26DC, 0xD, 0);
        if (M2C_FIELD(arg0, u8 *, 0x946) == 0) {
            M2C_FIELD(arg0, s8 *, 0x5B) = 1;
        } else {
            func_008E09A0(arg0 + 0x26DC, 8, 0);
        }
    }
    if (func_008B93A0() == 0) {
        func_008E09A0(arg0 + 0x26DC, 7, 0);
    }
    if ((func_008BC3B0() != 0) || (func_008B4920() != 0)) {
        func_008E09A0(arg0 + 0x26DC, 0xD, 0);
    }
    if ((func_008BC3B0() != 0) && (M2C_FIELD(arg0, u8 *, 0) == 1)) {
        func_008E09A0(arg0 + 0x26DC, 8, 0);
        func_008E09A0(arg0 + 0x26DC, 9, 0);
    }
}
