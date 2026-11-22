/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern void *D_00CCCE4C[];
extern void func_001EE890(void *object, const void *coordinates);

void func_00C89550(u32 index, const void *coordinates) {
    if (index < 127u) {
        func_001EE890(D_00CCCE4C[index], coordinates);
    }
}
