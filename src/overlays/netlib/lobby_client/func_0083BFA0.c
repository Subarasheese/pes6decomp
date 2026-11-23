/* compiler: mwcc-3.0.1b210 */
#include "pes6/lobby_request_dialog.h"

extern s32 func_00836E20(void);
extern s32 func_0083BE70(s32 channel, u8 value);

s32 func_0083BFA0(u8 value) {
    return func_0083BE70(func_00836E20(), value);
}
