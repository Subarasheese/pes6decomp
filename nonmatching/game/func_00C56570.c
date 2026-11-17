/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

void func_009DA300(void *, void *);
void func_00C552F0(void *, s32, u8);

void func_00C56570(void *arg0, s32 arg1) {
    func_009DA300(arg0, (u8 *)arg0 + 0x4F);
    func_00C552F0(arg0, arg1, M2C_FIELD(arg0, u8 *, 0x4F));
}
