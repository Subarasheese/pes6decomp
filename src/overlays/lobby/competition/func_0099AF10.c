/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern void *func_001D5A10(s32);
s32 func_001D5F80(s32);

s32 func_0099AF10(void) {
    if (func_001D5A10(0x1003B) != 0) {
        return 1;
    }
    func_001D5F80(0x1003B);
    return 1;
}
