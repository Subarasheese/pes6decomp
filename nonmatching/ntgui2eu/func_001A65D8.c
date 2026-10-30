/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_001A4728();                                /* extern */
M2C_UNK func_001A4778();                            /* extern */
M2C_UNK func_001A5AA8(s32);                         /* extern */
extern char D_012073C0[];

s32 func_001A65D8(u32 arg0) {
    s32 temp_s1;
    s32 temp_s2;
    s32 temp_v0;

    temp_s1 = (arg0 >> 8) * 0x10;
    temp_s2 = func_001A4728();
    if (((s32) arg0 < 0) || ((arg0 ^ M2C_FIELD(temp_s1, s32 *, 4)) & 0xFF)) {
        if (temp_s2 != 0) {
            func_001A4778();
        }
        return 0x80008002;
    }
    func_001A5AA8(M2C_FIELD(temp_s1, s32 *, 4));
    temp_v0 = (*(s32 *)D_012073C0);
    (*(s32 *)D_012073C0) = temp_s1;
    M2C_FIELD(temp_s1, s32 *, 0) = temp_v0;
    M2C_FIELD(temp_s1, s32 *, 4) = 0;
    if (temp_s2 != 0) {
        func_001A4778();
    }
    return 0;
}
