/* compiler: mwcc-3.0.1b210 */
#pragma inline_depth(16)
#include "pes6/lobby_records.h"

char *func_0093F2D0(s32 index) {
    char *text = (char *)lobby_user_at(index);
    if (text == 0)
        text = 0;
    else
        text += 6;
    return text;
}
