/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 Pes6File_AllChannelsIdle(void);
extern s32 func_001DD910(s32);
extern s32 func_002646D0(s32);
extern s32 func_002646E0(s32);
extern void func_002648E0(s32);
extern void func_002648F0(s32);
extern void func_00C71F40(void);
extern s32 func_00CD4CB0(s32, s32);
extern s32 func_00CD5400(s32);
extern void func_00CDEEB0(s32);

s32 func_00CD0BD0(s32 arg0) {
    s32 var_s0;
    u32 temp_v0;

    var_s0 = 0;
    func_002648F0(arg0);
    temp_v0 = func_002646D0(arg0) & 0xFF;
    switch (temp_v0) {
    case 0:
        func_00CDEEB0(arg0);
        func_002646E0(arg0);
        /* fallthrough */
    case 1:
        if (func_00CD5400(arg0) != 0) {
            func_00C71F40();
            func_002646E0(arg0);
        }
        break;
    case 2:
        func_002646E0(arg0);
        break;
    case 3:
        if (func_00CD4CB0(arg0, 0) != 0) {
            func_002646E0(arg0);
        }
        break;
    case 4:
        func_001DD910(0x18);
        func_002646E0(arg0);
        /* fallthrough */
    case 5:
        if (Pes6File_AllChannelsIdle() != 0) {
            func_002646E0(arg0);
        }
        break;
    case 6:
        M2C_FIELD(arg0, s32 *, 0xB4) = 1;
        func_002646E0(arg0);
        /* fallthrough */
    case 7:
        var_s0 = 1;
        break;
    }
    func_002648E0(arg0);
    return var_s0;
}
