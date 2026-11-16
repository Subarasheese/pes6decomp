/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

M2C_UNK func_002D4BE0(s32);
M2C_UNK func_00305E60(char *, M2C_UNK *);
s32 func_00BD9D90();
extern s32 D_003B4F20[];
extern M2C_UNK func_00301420;

s32 func_00301380(char *arg0) {
    s32 var_s2;
    char *temp_s1;

    var_s2 = 0;
    temp_s1 = M2C_FIELD(arg0, char **, 0x18);
    if (func_00BD9D90() == 0) {
        var_s2 = 1;
    }
    if (var_s2 == 0) {
        return 0;
    }
    func_002D4BE0(D_003B4F20[M2C_FIELD(temp_s1, s32 *, 0x24)]);
    if (M2C_FIELD(temp_s1, s32 *, 0x24) == 1) {
        func_002D4BE0(D_003B4F20[0]);
    }
    func_00305E60(arg0, &func_00301420);
    return 1;
}
