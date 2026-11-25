/* compiler: mwcc-3.0.1b198 */
#include "pes6/netlib_named_event.h"

extern s32 D_008B2460[];
extern void func_001B7A60(s32 enable);
static inline s32 closePauseChat(void) {
    if (D_008B2460[0]) {
        if (!func_00814FC0("PauseChatClose"))
            return 0;
        D_008B2460[0] = 0;
    }
    return 1;
}
s32 func_00880BF0(void) {
    if (!closePauseChat())
        return 0;
    func_00D0C980();
    func_001B7A60(0);
    return 1;
}
