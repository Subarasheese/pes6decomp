/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_001A4728();                                /* extern */
M2C_UNK func_001A4778();                            /* extern */
M2C_UNK func_001AE7D8(s32, M2C_UNK, s32);           /* extern */
extern char D_005CBBB8[];
extern char D_005CBBBC[];

s32 func_001A6720(s32 arg0, s32 arg1) {
    s32 temp_s2;
    s32 temp_s3;

    temp_s3 = (*(s32 *)D_005CBBB8);
    temp_s2 = func_001A4728();
    (*(s32 *)D_005CBBBC) = arg1;
    (*(s32 *)D_005CBBB8) = arg0;
    func_001AE7D8(arg0, 0, arg1 * 0x10);
    if (temp_s2 != 0) {
        func_001A4778();
    }
    return temp_s3;
}
