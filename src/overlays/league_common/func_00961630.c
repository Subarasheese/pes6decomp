/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 Pes6File_AllChannelsIdle(void);
extern void func_001A5900(void);
extern s32 func_001BE4D0(s32);
extern s32 func_0093D780(void);
extern void func_0094C790(s32);
extern void func_00B49640(void);
extern s32 func_00B49690(void);
extern void func_00B496C0(void);
extern void func_00B496F0(s32);

extern void *Pes6SaveData_Current;

s32 func_00961630(void) {
    s32 var_s0;
    u32 temp_v0;

    temp_v0 = M2C_FIELD(Pes6SaveData_Current, u32 *, 4);
    var_s0 = -1;
    switch (temp_v0) {
    case 0:
        func_00B496F0(2);
        func_001A5900();
        func_0094C790(1);
        break;
    case 1:
        if ((func_001BE4D0(0) != 0) && (Pes6File_AllChannelsIdle() == 1)) {
            func_00B496C0();
            func_0094C790(2);
        }
        break;
    case 2:
        if (func_0093D780() == 1) {
            func_0094C790(3);
        }
        break;
    case 3:
        if (func_00B49690() == 1) {
            func_0094C790(4);
        }
        break;
    case 4:
        func_0094C790(5);
        /* fallthrough */
    case 5:
        func_00B49640();
        var_s0 = 0x41;
        break;
    }
    if (var_s0 != -1) {
        func_0094C790(0);
    }
    return var_s0;
}
