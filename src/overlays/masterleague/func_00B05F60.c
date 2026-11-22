/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 func_002F3A20(void *);
extern u32 func_00B06560(void);
s32 func_002F3850(void *);

void func_00B05F60(void) {
    int value;
    u32 value2;
    void *entry;
    s8 *entry2;
    value2 = func_00B06560();
    if (0 != value2) {
        value = 0x28;
        entry2 = (s8 *)value2;
        entry2 = entry2 + value;
        entry = *((void **)entry2);
        if ((entry != 0) && (func_002F3850(entry) == 2)) {
            func_002F3A20(*((void **)(((s8 *)value2) + value)));
        }
    }
}
