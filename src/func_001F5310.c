/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern void func_00153FA0(s32 *);
extern s32 *func_00154060(s32, s32);
extern void func_001F6000();
extern void func_001F6500();
extern s32 *D_003E9974;

s32 func_001F5310(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 *object;

    if ((arg0 != 0) && (arg1 != 0)) {
        object = func_00154060(1, 0x30);
        D_003E9974 = object;
        *object = arg0;
        M2C_FIELD(D_003E9974, s32 *, 4) = arg1;
        M2C_FIELD(D_003E9974, s32 *, 8) = arg2;
        M2C_FIELD(D_003E9974, s32 *, 0xC) = arg3;
        func_001F6500();
        func_001F6000();
        func_00153FA0(M2C_FIELD(D_003E9974, s32 **, 0x24));
        func_00153FA0(D_003E9974);
        return 1;
    }
    return 0;
}
