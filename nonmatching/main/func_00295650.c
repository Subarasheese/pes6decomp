/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00295280(void);
M2C_UNK func_00295170(s32, void *, s32);            /* extern */

void func_00295650(void *arg0, s32 arg1) {
    if ((s32) M2C_FIELD(arg0, u8 *, 1) >= 4) {
        M2C_FIELD(arg0, u8 *, 1) = 3U;
    }
    if ((s32) M2C_FIELD(arg0, u8 *, 3) >= 0xD) {
        M2C_FIELD(arg0, u8 *, 3) = 0xCU;
    }
    if ((s32) M2C_FIELD(arg0, u8 *, 3) <= 0) {
        M2C_FIELD(arg0, u8 *, 3) = 1U;
    }
    if ((s32) M2C_FIELD(arg0, u8 *, 4) >= 0x19) {
        M2C_FIELD(arg0, u8 *, 4) = 0x18U;
    }
    if ((s32) M2C_FIELD(arg0, u8 *, 4) <= 0) {
        M2C_FIELD(arg0, u8 *, 4) = 1U;
    }
    if (M2C_FIELD(arg0, u8 *, 5) == 0) {
        M2C_FIELD(arg0, u8 *, 5) = 1U;
    }
    func_00295170(func_00295280(), arg0, arg1);
}
