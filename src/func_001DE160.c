/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern s32 *func_001F4380();
extern char D_0052AE18[];

s32 func_001DE160(s32 index) {
    s32 *override_index;
    s32 resolved_index;

    resolved_index = index;
    override_index = func_001F4380();
    if (override_index != NULL) {
        resolved_index = *override_index;
    }
    return (*(s32 *)D_0052AE18) + (resolved_index * 0x10);
}
