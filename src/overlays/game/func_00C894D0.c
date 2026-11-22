/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern void *D_00CCCE4C[];
extern void func_001EE630(void *object, const s16 *rectangle);

void func_00C894D0(u32 index, const s16 *rectangle) {
    if (index < 127u) {
        func_001EE630(D_00CCCE4C[index], rectangle);
    }
}
