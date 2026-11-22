/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 Pes6TeamAssets_Poll(void);
extern void Pes6TeamAssets_Reset(void);
extern void func_0020C240(void);
extern s32 func_0020C2C0(void);
extern void func_0020C370(void);
extern s32 Pes6MatchSelect_UpdateLoader(void);
extern s32 func_0020D6D0(void);
extern s32 func_002646D0(s32);
extern s32 func_002646E0(s32);
extern void func_00264790(void *, u8);
extern void func_002648E0(s32);
extern void func_002648F0(s32);
extern void Pes6Pausesetup_Start(void);
extern void func_0026C310(void);
extern s32 func_00C86770(void);
extern void func_00C86850(void);

s32 func_00CD5510(void *arg0) {
    s32 var_s0;
    u32 temp_v0;

    var_s0 = 0;
    func_002648F0((s32) arg0);
    temp_v0 = func_002646D0((s32) arg0) & 0xFF;
    switch (temp_v0) {
    default:
        func_00264790(arg0, 0U);
        /* fallthrough */
    case 0:
        func_0020D6D0();
        func_002646E0((s32) arg0);
        break;
    case 1:
        if (Pes6MatchSelect_UpdateLoader() == 1) {
            func_002646E0((s32) arg0);
        case 2:
            func_0020C370();
            func_002646E0((s32) arg0);
        }
        break;
    case 3:
        if (func_0020C2C0() == 1) {
            func_002646E0((s32) arg0);
        case 4:
            Pes6TeamAssets_Reset();
            func_002646E0((s32) arg0);
        }
        break;
    case 5:
        if (Pes6TeamAssets_Poll() == 1) {
            func_002646E0((s32) arg0);
        case 6:
            func_0020C240();
            func_002646E0((s32) arg0);
        case 7:
            func_0026C310();
            func_00C86850();
            func_002646E0((s32) arg0);
        case 8:
            if (func_00C86770() == 1) {
                func_002646E0((s32) arg0);
            case 9:
                Pes6Pausesetup_Start();
                func_002646E0((s32) arg0);
            case 10:
                var_s0 = 1;
            }
        }
        break;
    }
    func_002648E0((s32) arg0);
    return var_s0;
}
