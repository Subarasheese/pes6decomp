/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7F10(void *);
M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
s32 func_0081B350(void *, s32);                     /* extern */

void *func_0081B560(s32 arg0, void *arg1) {
    if (arg1 == NULL) {
        goto block_13;
    }
    func_001C48E8(arg1, 0, 0x74);
    M2C_FIELD(arg1, s32 *, 0) = 0;
    M2C_FIELD(arg1, s32 *, 4) = 0;
    M2C_FIELD(arg1, void **, 8) = NULL;
    M2C_FIELD(arg1, void **, 0xC) = NULL;
    M2C_FIELD(arg1, s32 *, 0x10) = 0;
    M2C_FIELD(arg1, s32 *, 0x14) = 0;
    M2C_FIELD(arg1, s8 *, 0x26) = 0;
    M2C_FIELD(arg1, s8 *, 0x27) = 0;
    M2C_FIELD(arg1, s32 *, 0x18) = 0;
    M2C_FIELD(arg1, s32 *, 0x1C) = 0;
    M2C_FIELD(arg1, s8 *, 0x25) = 1;
    M2C_FIELD(arg1, s8 *, 0x2A) = 0;
    M2C_FIELD(arg1, s32 *, 0x20) = 0;
    M2C_FIELD(arg1, s8 *, 0x24) = 0;
    if (func_0081B350(arg1, arg0) != 0) {
        return arg1;
    }
    if (arg1 != NULL) {
        if (arg1 != NULL) {
            if (arg1 != NULL) {
                M2C_FIELD(arg1, s8 *, 0x26) = 0;
                M2C_FIELD(arg1, s8 *, 0x27) = 0;
            }
            if (arg1 != NULL) {
                M2C_FIELD(arg1, s8 *, 0x25) = 1;
                M2C_FIELD(arg1, s32 *, 0) = 0;
            }
            func_001D7F10(M2C_FIELD(arg1, void **, 0xC));
            M2C_FIELD(arg1, void **, 0xC) = NULL;
            func_001D7F10(M2C_FIELD(arg1, void **, 8));
            M2C_FIELD(arg1, void **, 8) = NULL;
        }
        func_001C48E8(arg1, 0, 0x74);
    }
block_13:
    return NULL;
}
