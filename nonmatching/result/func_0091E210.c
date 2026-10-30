/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002F39A0(void *);
extern void func_0026B580(void *, s32, s32);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_00C75330(void *);                      /* extern */
extern void *D_00923FC8;

s32 func_0091E210(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3) {
    if (M2C_FIELD(D_00923FC8, s32 *, 0xCC) != 0) {

    } else {
        M2C_FIELD(D_00923FC8, s32 *, 0xCC) = 1;
        func_0026E840(0x84028400);
        func_00C75330(D_00923FC8 + 0x118);
        func_002F39A0(M2C_FIELD(D_00923FC8, void **, 0x110));
        func_0026B580(D_00923FC8 + 0xD0, 0x10, arg3);
    }
    return 2;
}
