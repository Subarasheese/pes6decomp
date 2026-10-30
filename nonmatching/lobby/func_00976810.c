/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
s32 func_0081EB60(M2C_UNK);                         /* extern */
s32 func_0081EC20(M2C_UNK);                         /* extern */
M2C_UNK func_009B6B60(M2C_UNK);                     /* extern */
s32 func_009B6BB0();                                /* extern */
M2C_UNK func_009B6BC0(M2C_UNK);                     /* extern */
M2C_UNK func_009B6BE0(M2C_UNK);                     /* extern */
extern char D_00A68D44[];

s32 func_00976810(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x5D) != 0) {
        return 1;
    }
    func_009B6B60(1);
    func_009B6BC0(0);
    if (func_0081EC20(0x4000) == 0) {
        if (func_0081EC20(0x1000) == 0) {
            if (func_0081EB60(0x10) == 0) {
                if (func_0081EB60(0x40) != 0) {
                    func_009B6BE0(0x40);
                }
            } else {
                func_009B6BE0(0x10);
            }
            return 0;
        }
        func_009B6B60(0);
        func_0026E840(0x84008401);
        return 1;
    }
    (*(s32 *)D_00A68D44) = func_009B6BB0();
    func_0026E840(0x84028400);
    if ((*(s32 *)D_00A68D44) == 0) {
        func_009B6B60(0);
        return 3;
    }
    M2C_FIELD((arg0 + 0x10), s32 *, 0x34) = (s32) (*(s32 *)D_00A68D44);
    func_009B6B60(0);
    return 2;
}
