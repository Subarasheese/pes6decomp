/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern void *D_00CCCE4C[];
extern void func_001EEE60(void *object, const void *color);

void func_00C89490(u32 index, const void *color) {
    if (index < 127u) {
        func_001EEE60(D_00CCCE4C[index], color);
    }
}
