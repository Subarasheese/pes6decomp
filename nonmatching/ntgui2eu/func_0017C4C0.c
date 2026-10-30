/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00165BA0(s32, s32);                    /* extern */
extern M2C_UNK (*D_005C1A50)();

void func_0017C4C0(void *arg0, s32 arg1) {
    D_005C1A50();
    func_00165BA0(M2C_FIELD(arg0, s32 *, 0x92C), arg1);
    func_00165BA0(M2C_FIELD(arg0, s32 *, 0x920), arg1);
    func_00165BA0(M2C_FIELD(arg0, s32 *, 0x924), arg1);
    func_00165BA0(M2C_FIELD(arg0, s32 *, 0x928), arg1);
    func_00165BA0(M2C_FIELD(arg0, s32 *, 0x930), arg1);
    func_00165BA0(M2C_FIELD(arg0, s32 *, 0x934), arg1);
    func_00165BA0(M2C_FIELD(arg0, s32 *, 0x938), arg1);
    func_00165BA0(M2C_FIELD(arg0, s32 *, 0x93C), arg1);
}
