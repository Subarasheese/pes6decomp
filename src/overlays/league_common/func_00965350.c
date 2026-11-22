/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 func_001BE550(s32, s32);
extern void func_00935810(void);
extern s32 func_0093D790(void);
extern void func_0093D850(void);
s32 func_0094C790(s32);
extern void func_0095A980(void);
extern void *Pes6SaveData_Current;

s32 func_00965350(void) {
    s32 temp_v1;
    s32 var_s0;

    temp_v1 = M2C_FIELD(Pes6SaveData_Current, s32 *, 4);
    var_s0 = -1;
    switch (temp_v1) {
    case 0:
        if (func_001BE550(0, func_0093D790()) != 0) {
            func_0093D850();
            func_0095A980();
            func_0094C790(1);
        }
        break;
    case 1:
        func_00935810();
        var_s0 = 0x4A;
        break;
    }
    if (var_s0 != -1) {
        func_0094C790(0);
    }
    return var_s0;
}
