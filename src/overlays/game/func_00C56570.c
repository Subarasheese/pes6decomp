/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void func_009DA300(s8 *, s8 *);
extern void func_00C552F0(s8 *, s32, s32);

void func_00C56570(s8 *arg0, s32 arg1) {
    func_009DA300(arg0, arg0 + 0x4F);
    func_00C552F0((s8 *)arg0, arg1, (s32)M2C_FIELD(arg0, u8 *, 0x4F));
}
