/* compiler: mwcc-3.0.1b151-O3 */
#pragma inline_depth(16)
#include "pes6/netlib_profile_list.h"
extern s32 func_001C7E10(const char *, const char *);
s32 func_00877740(const void *first, const void *second) {
    const LobbyProfile *left = first, *right = second;
    if (!left || !right)
        return 0;
    if (left->field00 == 0) {
        if (right->field00 == 0)
            return 0;
        return 1;
    }
    if (right->field00 == 0) {
        if (left->field00 == 0)
            return 0;
        return -1;
    }
    if (left->field7D == 3)
        return -1;
    if (right->field7D == 3)
        return 1;
    {
        s32 c = func_001C7E10(left->text04, right->text04);
        if (c < 0)
            return -1;
        if (c > 0)
            return 1;
        return 0;
    }
}
