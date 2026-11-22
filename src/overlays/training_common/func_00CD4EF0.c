/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 Pes6File_AllChannelsIdle(void);
extern void func_00182AE0(s32);
extern void func_00182B30(s32);
extern void func_001A17A0(void);
extern void func_001A1E90(void);
extern s32 func_001A31D0(void);
extern void func_001A3220(s32);
extern void func_001A3240(void);
extern s32 func_002631B0(void);
extern s32 func_002646D0(s32);
extern s32 func_002646E0(s32);
extern void func_00264790(void *, u8);
extern void func_002648E0(s32);
extern void func_002648F0(s32);
extern void func_002D2E90(void);

s32 func_00CD4EF0(s32 arg0) {
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
        if (func_002631B0() != 1) {
            func_002D2E90();
        }
        func_001A3220(0xA);
        func_002646E0(arg0);
        /* fallthrough */
    case 1:
        func_001A3240();
        func_001A1E90();
        func_002646E0(arg0);
        /* fallthrough */
    case 2:
        if (Pes6File_AllChannelsIdle() != 0) {
            func_002646E0(arg0);
        }
        break;
    case 3:
        func_002646E0(arg0);
        /* fallthrough */
    case 4:
        func_001A17A0();
        func_00182B30(1);
        func_00182AE0(0);
        func_002646E0(arg0);
        /* fallthrough */
    case 5:
        func_001A3220(0);
        if (func_001A31D0() != 0) {
            func_002646E0(arg0);
        }
        /* fallthrough */
    case 6:
        var_s0 = 1;
        break;
    }
    func_002648E0(arg0);
    return var_s0;
}
