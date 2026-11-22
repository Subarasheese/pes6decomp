/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 Pes6File_AllChannelsIdle(void);
extern void func_00182AE0(s32);
extern void func_00182B30(s32);
extern void func_001A11A0(void);
extern void func_001A11E0(void);
extern s32 func_002646D0(s32);
extern s32 func_002646E0(s32);
extern void func_00264790(void *, u8);
extern void func_002648E0(s32);
extern void func_002648F0(s32);

s32 func_00CD4DF0(s32 arg0) {
    s32 var_s0;
    u32 temp_v0;

    var_s0 = 0;
    func_002648F0(arg0);
    temp_v0 = func_002646D0(arg0) & 0xFF;
    switch (temp_v0) {
    default:
        func_00264790((void *) arg0, 0U);
        /* fallthrough */
    case 0:
        func_002646E0(arg0);
        /* fallthrough */
    case 1:
        func_002646E0(arg0);
        break;
    case 2:
        func_002646E0(arg0);
        func_001A11E0();
        break;
    case 3:
        if (Pes6File_AllChannelsIdle() != 0) {
            func_002646E0(arg0);
        }
        break;
    case 4:
        func_001A11A0();
        func_00182B30(1);
        func_00182AE0(0);
        func_002646E0(arg0);
        /* fallthrough */
    case 5:
        func_002646E0(arg0);
        /* fallthrough */
    case 6:
        var_s0 = 1;
        break;
    }
    func_002648E0(arg0);
    return var_s0;
}
