/* compiler: ee-gcc-2.9-Os-G0 */
#include "pes6/m2c.h"

extern s32 func_00172E60(s32, s32, s32);
extern s32 func_00173078(s32);
extern s32 func_00173A60(void *);
extern void func_00173B00(s32);
extern s32 func_001747A0(s32);

s32 func_00171648(void *arg0, u8 *arg1, s32 arg2) {
    if (arg0 == NULL) {
        return 0;
    } else {
        if (arg1 == NULL) {
            return 0;
        }
        M2C_FIELD(arg0, s32 *, 0xBF0) = 0;
        M2C_FIELD(arg0, s32 *, 0xB8C) = 0;
        M2C_FIELD(arg0, s32 *, 0xB94) = 0;
        M2C_FIELD(arg0, s32 *, 0xD0C) = 0;
        func_00172E60(arg0, arg1, arg2);
        func_001747A0(arg0);
        func_00173A60(arg0);
        if (*arg1 == 0) {
            func_00173B00(arg0);
        }
        func_00173078(arg0);
        return 1;
    }
}
