/* compiler: mwcc-3.0.1b198 */
#pragma inline_depth(16)
#include "pes6/lobby_caption.h"

s32 func_009E4370(s32 value) {
    char buffer[64];
    return lobby_set_number_caption(buffer, 2, 0x2040026, 9, value);
}
