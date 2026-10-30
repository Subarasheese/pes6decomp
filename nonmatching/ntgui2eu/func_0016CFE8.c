/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0016B7F0();                                /* extern */
M2C_UNK func_0016B828(void *);                      /* extern */
M2C_UNK func_0016D058(void *);                      /* extern */
s32 func_001896B8(s32);                             /* extern */

void func_0016CFE8(void *arg0) {
    s32 temp_a0;
    s32 temp_a0_2;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0x984);
    if (temp_a0 == 0) {
        M2C_FIELD(arg0, s32 *, 0x924) = 0;
    } else {
        M2C_FIELD(arg0, s32 *, 0x924) = func_001896B8(temp_a0);
    }
    M2C_FIELD(arg0, s32 *, 0x984) = 0;
    M2C_FIELD(arg0, s32 *, 0x934) = func_0016B7F0();
    func_0016B828(arg0 + 0x938);
    temp_a0_2 = M2C_FIELD(arg0, s32 *, 0x988);
    if (temp_a0_2 == 0) {
        M2C_FIELD(arg0, s32 *, 0x928) = 0;
    } else {
        M2C_FIELD(arg0, s32 *, 0x928) = func_001896B8(temp_a0_2);
    }
    M2C_FIELD(arg0, s32 *, 0x988) = 0;
    func_0016D058(arg0);
}
