/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001652A0(s32);                         /* extern */
extern M2C_UNK (*D_005BEF0C)(void *);

void func_00162098(void *arg0) {
    func_001652A0(M2C_FIELD(arg0, s32 *, 0x8A4));
    func_001652A0(M2C_FIELD(arg0, s32 *, 0x8A0));
    D_005BEF0C(arg0);
}
