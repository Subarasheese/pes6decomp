/* compiler: mwcc-3.0.1b210 */
#include "pes6/lobby_request_dialog.h"

extern s32 func_00836E20(void);
extern s32 func_0083BFD0(s32 channel, u8 value);

s32 func_0083C270(u8 value) {
    return func_0083BFD0(func_00836E20(), value);
}
