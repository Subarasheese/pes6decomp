/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

extern s32 func_0016B7F0(void);
s32 func_0016B828(void *);
s32 func_0016D058(void *);
s32 func_001896B8(s32);

void func_0016CFE8(void *arg0) {
    s32 value;
    s32 value2;

    value = M2C_FIELD(arg0, s32 *, 0x984);
    if (value != 0) {
        M2C_FIELD(arg0, s32 *, 0x924) = func_001896B8(value);
    } else {
        M2C_FIELD(arg0, s32 *, 0x924) = 0;
    }
    M2C_FIELD(arg0, s32 *, 0x984) = 0;
    M2C_FIELD(arg0, s32 *, 0x934) = func_0016B7F0();
    func_0016B828(arg0 + 0x938);
    value2 = M2C_FIELD(arg0, s32 *, 0x988);
    if (value2 != 0) {
        M2C_FIELD(arg0, s32 *, 0x928) = func_001896B8(value2);
    } else {
        M2C_FIELD(arg0, s32 *, 0x928) = 0;
    }
    M2C_FIELD(arg0, s32 *, 0x988) = 0;
    func_0016D058(arg0);
}
