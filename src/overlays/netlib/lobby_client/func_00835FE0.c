/* compiler: mwcc-3.0.1b198-O3 */
#pragma inline_depth(16)
#include "pes6/lobby_profile.h"
extern void func_0082ABC0(s16 id, s32 *group, s32 *element);
extern char *func_0082ADE0(s32 group, s32 element);
extern char *func_001C8590(char *dest, const char *src, u32 count);
s32 func_00835FE0(void) {
    s32 count = func_00835EE0(), index;
    for (index = 0; index < count; index++) {
        s32 group = 9, element = -1;
        LobbyProfile *profile = lobby_profile_at(index);
        if (profile != 0) {
            const char *text;
            func_0082ABC0((s16)profile->field7E, &group, &element);
            text = func_0082ADE0(group, element);
            if (text != 0)
                func_001C8590(profile->text38, text, 0x20);
        }
    }
    return 1;
}
