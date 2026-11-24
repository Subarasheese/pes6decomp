/* compiler: mwcc-3.0.1b210 */

#include "types.h"
extern void func_001BEA20(void), Pes6NowLoading_Request(s32), func_001BE8E0(s32),
    func_001BE830(s32);
extern s32 Pes6NowLoading_IsShown(void);

s32 func_001BE550(s32 channel, s32 message) {
    func_001BEA20();
    Pes6NowLoading_Request(1);
    func_001BE8E0(message);
    if (channel > 0)
        func_001BE830(channel);
    return Pes6NowLoading_IsShown();
}
