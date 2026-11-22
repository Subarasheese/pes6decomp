/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern void *D_00CCCE4C[];
extern void func_001EEDA0(void *object, u8 alpha);

void func_00C89450(u32 index, u8 alpha) {
    if (index < 127u) {
        func_001EEDA0(D_00CCCE4C[index], alpha);
    }
}
