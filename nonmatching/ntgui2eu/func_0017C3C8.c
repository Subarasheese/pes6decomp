/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001652A0(s32);                         /* extern */
M2C_UNK func_0017C600();                            /* extern */
extern M2C_UNK (*D_005C19C4)(void *);

void func_0017C3C8(void *arg0) {
    func_0017C600();
    D_005C19C4(arg0);
    if ((M2C_FIELD(arg0, s32 *, 0x94C) != 0) || (M2C_FIELD(arg0, s32 *, 0x944) != 0)) {
        func_001652A0(M2C_FIELD(arg0, s32 *, 0x92C));
        func_001652A0(M2C_FIELD(arg0, s32 *, 0x920));
        func_001652A0(M2C_FIELD(arg0, s32 *, 0x924));
        func_001652A0(M2C_FIELD(arg0, s32 *, 0x928));
        func_001652A0(M2C_FIELD(arg0, s32 *, 0x930));
        func_001652A0(M2C_FIELD(arg0, s32 *, 0x934));
        func_001652A0(M2C_FIELD(arg0, s32 *, 0x938));
        func_001652A0(M2C_FIELD(arg0, s32 *, 0x93C));
    }
}
