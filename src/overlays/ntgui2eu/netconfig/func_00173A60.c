/* compiler: ee-gcc-2.9-Os-G0 */
#include "pes6/m2c.h"

extern void func_00173858(u32 *);
extern void func_00173B00(s32);
extern s32 func_00174380(void *);
extern void func_001744B8(void *);

s32 func_00173A60(void *arg0) {
    s32 value;

    if (M2C_FIELD(arg0, s32 *, 0xB8C) < M2C_FIELD(arg0, s32 *, 0xB94)) {
        func_001744B8(arg0);
        func_00173B00(arg0);
        M2C_FIELD(arg0, s32 *, 0x98) = 2;
    }
    value = M2C_FIELD(arg0, s32 *, 0xBF0);
    if (!(M2C_FIELD(arg0, s32 *, 0xB8C) < value)) {
        return 0;
    }
    M2C_FIELD(arg0, s32 *, 0xB8C) = value;
    func_00173B00(arg0);
    M2C_FIELD(arg0, s32 *, 0x98) = 2;
    if (M2C_FIELD(arg0, s32 *, 0xD10) == 0) {
        func_00173858(arg0);
    } else {
        func_00174380(arg0);
    }
    return 1;
}
