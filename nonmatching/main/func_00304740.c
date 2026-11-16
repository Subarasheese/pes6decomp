/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

extern void func_00305E60(void *, void (*)(void));
s32 func_009E1C90(s32);
extern void func_003046F0(void);
extern void func_003052D0(void);

s32 func_00304740(void *arg0) {
    s32 i;
    void *obj;

    if ((func_009E1C90(1) & 0xFF) == 5) {
        obj = M2C_FIELD(arg0, void **, 0x18);
        M2C_FIELD(obj, s32 *, 0x48) = 0;
        M2C_FIELD(obj, s32 *, 8) = 0;
        M2C_FIELD(obj, s32 *, 0xC) = 0;
        M2C_FIELD(obj, s32 *, 0x10) = 0;
        M2C_FIELD(obj, s32 *, 0x14) = 0;
        M2C_FIELD(obj, s32 *, 0x18) = 0;
        M2C_FIELD(obj, s32 *, 0x1C) = 0;
        M2C_FIELD(obj, s32 *, 0x20) = 0;
        M2C_FIELD(obj, s32 *, 0x24) = 0;
        M2C_FIELD(obj, s32 *, 0) = 0;
        for (i = 0; i < 8; i++) {
            if (M2C_FIELD(obj, void (**)(void), 8 + i * 4) == NULL) {
                M2C_FIELD(obj, void (**)(void), 8 + i * 4) = func_003046F0;
                M2C_FIELD(obj, s32 *, 0) = M2C_FIELD(obj, s32 *, 0) + 1;
                break;
            }
        }
        func_00305E60(arg0, func_003052D0);
        return 1;
    }
    return 0;
}
