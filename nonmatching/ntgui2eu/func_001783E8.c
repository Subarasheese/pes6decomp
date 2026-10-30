/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00165BF0(s32, s32);                    /* extern */
extern M2C_UNK (*D_005C0CC0)();

void func_001783E8(void *arg0, s32 arg1) {
    D_005C0CC0();
    func_00165BF0(M2C_FIELD(arg0, s32 *, 0x89C), arg1);
    func_00165BF0(M2C_FIELD(arg0, s32 *, 0x898), arg1);
    func_00165BF0(M2C_FIELD(arg0, s32 *, 0x894), arg1);
    func_00165BF0(M2C_FIELD(arg0, s32 *, 0x890), arg1);
    func_00165BF0(M2C_FIELD(arg0, s32 *, 0x8A0), arg1);
    func_00165BF0(M2C_FIELD(arg0, s32 *, 0x8A4), arg1);
    func_00165BF0(M2C_FIELD(arg0, s32 *, 0x8A8), arg1);
}
