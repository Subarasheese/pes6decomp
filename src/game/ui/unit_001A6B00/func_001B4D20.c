/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

void func_001E5F20(s32);
void func_00153FA0(s32 *);

void func_001B4D20(s32 *items) {
    u32 i;

    if (items == NULL) {
        return;
    }
    for (i = 0; i < 2; i++) {
        func_001E5F20(items[i]);
    }
    func_00153FA0(items);
}
