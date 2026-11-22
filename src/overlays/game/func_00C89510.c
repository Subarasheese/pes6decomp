/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern void *D_00CCCE4C[];
extern void func_001EE790(void *object, const s16 *corners);

void func_00C89510(u32 index, const s16 *corners) {
    if (index < 127u) {
        func_001EE790(D_00CCCE4C[index], corners);
    }
}
