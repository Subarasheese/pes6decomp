/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern void *D_00CCCE4C[];
extern void func_001EEAC0(void *object, void *texture);

void func_00C89780(u32 index, void *texture) {
    if (index < 127u) {
        func_001EEAC0(D_00CCCE4C[index], texture);
    }
}
