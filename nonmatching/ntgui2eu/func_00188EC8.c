/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001652A0(s32);                         /* extern */
M2C_UNK func_001894E0();                            /* extern */
extern M2C_UNK (*D_005C24B4)(void *);

void func_00188EC8(void *arg0) {
    func_001894E0();
    D_005C24B4(arg0);
    func_001652A0(M2C_FIELD(arg0, s32 *, 0x980));
    func_001652A0(M2C_FIELD(arg0, s32 *, 0x984));
}
