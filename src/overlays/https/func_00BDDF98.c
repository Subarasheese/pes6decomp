/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

M2C_UNK func_00BC0358(s32);
extern s32 func_00BC1228(void);
M2C_UNK func_00BC1288(s32);
s32 func_00BC1398(s32, s32);
M2C_UNK func_00BC13F0(s32, s32, M2C_UNK, s32);

s32 func_00BDDF98(void *arg0) {
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_s2;

    temp_s2 = func_00BC1228();
    temp_s1 = func_00BC1228();
    func_00BC0358(temp_s2);
    if (M2C_FIELD(arg0, s32 *, 4) == 0x17) {
        func_00BC13F0(M2C_FIELD(arg0, s32 *, 8), M2C_FIELD(arg0, s32 *, 0), 1, temp_s1);
    }
    temp_s0 = func_00BC1398(temp_s1, temp_s2);
    func_00BC1288(temp_s1);
    func_00BC1288(temp_s2);
    return temp_s0;
}
