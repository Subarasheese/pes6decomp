/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_008B4680(M2C_UNK);                     /* extern */
M2C_UNK func_008D81C0(s32);                         /* extern */
M2C_UNK func_008D8210(void *, M2C_UNK, s32, s32, s32); /* extern */
M2C_UNK func_008E7310(s32);                         /* extern */
extern M2C_UNK func_008D4EF0;

void func_008D5990(void *arg0, s32 arg1, s8 arg2, s8 arg3) {
    if (arg0 != NULL) {
        if (arg0 != NULL) {
            func_008D81C0(arg0 + 0x15C);
            func_008E7310(arg0 + 0x14);
            func_001C48E8(arg0, 0, 0x274);
            func_008B4680(0);
        }
        M2C_FIELD(arg0, s8 *, 4) = arg3;
        M2C_FIELD(arg0, s8 *, 2) = arg2;
        M2C_FIELD(arg0, s8 *, 3) = 0xFF;
        func_008D8210(arg0 + 0x15C, 0, arg1, arg2 & 0xFF, arg3 & 0xFF);
        M2C_FIELD(arg0, M2C_UNK **, 0x58) = &func_008D4EF0;
        M2C_FIELD(arg0, void **, 0x5C) = arg0;
        func_008B4680(1);
    }
}
