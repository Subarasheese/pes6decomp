/* compiler: mwcc-3.0.1b210 */
#include "types.h"

s32 func_002F2ED0(s32);
s32 func_002F3850(s32);
extern s32 *D_003EA970;

s32 func_0097FE90(void) {
    s32 *entry;

    entry = D_003EA970;
    if (entry == 0) {
        return 0;
    }
    func_002F2ED0(*entry);
    return func_002F3850(*entry) == 4;
}
