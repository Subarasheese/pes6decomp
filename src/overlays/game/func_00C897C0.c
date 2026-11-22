/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern void *D_00CCCE4C[];
extern void func_001EF900(void *object, s8 value);

void func_00C897C0(u32 index, s8 value) {
    if (index < 127u) {
        func_001EF900(D_00CCCE4C[index], value);
    }
}
