/* compiler: mwcc-3.0.1b210 */
#include "pes6/formation_menu.h"

extern s32 func_001D6D30(void *, s32);
extern const char *func_001F08B0(s32);
extern void *func_001D6E70(void *, s32, const char *);
void *func_008C13D0(void *group, s32 id, const char *text) {
    if (text)
        return func_001D6E70(group, id, text);
    return func_001D6E70(group, id, func_001F08B0(func_001D6D30(group, id)));
}
