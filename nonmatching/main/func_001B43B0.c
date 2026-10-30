/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0017BD70(s32, M2C_UNK, M2C_UNK);       /* extern */

void func_001B43B0(void *arg0, s32 arg1) {
    if (M2C_FIELD(arg0, u8 *, 0x201) == 0) {
        if (arg1 >= 3) {
            func_0017BD70(M2C_FIELD(arg0, s32 *, 0x10), 0x13, 0x20000000);
            func_0017BD70(M2C_FIELD(arg0, s32 *, 0x10), 0x14, 0x20001111);
        } else {
            func_0017BD70(M2C_FIELD(arg0, s32 *, 0x10), 0x13, 0x20001111);
            func_0017BD70(M2C_FIELD(arg0, s32 *, 0x10), 0x14, 0x20000000);
        }
        if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x14), u8 *, 8) == 2) {
            if (arg1 >= 3) {
                func_0017BD70(M2C_FIELD(arg0, s32 *, 0x10), 0xF, 0x20001100);
                func_0017BD70(M2C_FIELD(arg0, s32 *, 0x10), 0x1D, 0x20000011);
            } else {
                func_0017BD70(M2C_FIELD(arg0, s32 *, 0x10), 0xF, 0x20001111);
                func_0017BD70(M2C_FIELD(arg0, s32 *, 0x10), 0x1D, 0x20000000);
            }
        }
        if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x14), u8 *, 0xC) == 2) {
            if (arg1 >= 3) {
                func_0017BD70(M2C_FIELD(arg0, s32 *, 0x10), 0xB, 0x20001100);
                func_0017BD70(M2C_FIELD(arg0, s32 *, 0x10), 0x1A, 0x20000011);
            } else {
                func_0017BD70(M2C_FIELD(arg0, s32 *, 0x10), 0xB, 0x20001111);
                func_0017BD70(M2C_FIELD(arg0, s32 *, 0x10), 0x1A, 0x20000000);
            }
        }
    }
}
