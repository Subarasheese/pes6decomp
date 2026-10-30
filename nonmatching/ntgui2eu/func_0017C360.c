/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00163EE0(s32);                         /* extern */
M2C_UNK func_0016A158(s32, M2C_UNK);                /* extern */

void func_0017C360(void *arg0) {
    func_0016A158(arg0 + 0x970, 1);
    func_00163EE0(M2C_FIELD(arg0, s32 *, 0x92C));
    func_00163EE0(M2C_FIELD(arg0, s32 *, 0x920));
    func_00163EE0(M2C_FIELD(arg0, s32 *, 0x924));
    func_00163EE0(M2C_FIELD(arg0, s32 *, 0x928));
    func_00163EE0(M2C_FIELD(arg0, s32 *, 0x930));
    func_00163EE0(M2C_FIELD(arg0, s32 *, 0x934));
    func_00163EE0(M2C_FIELD(arg0, s32 *, 0x938));
    func_00163EE0(M2C_FIELD(arg0, s32 *, 0x93C));
}
