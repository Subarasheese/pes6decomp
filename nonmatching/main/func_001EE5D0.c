/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"
typedef int s128 __attribute__((mode(TI)));
typedef unsigned int u128 __attribute__((mode(TI)));
typedef char Check128Width[sizeof(s128)==16?1:-1];


void func_001EE5D0(void *arg0, s128 *arg1) {
    s32 var_v1;

    if ((arg0 != NULL) && (arg1 != NULL)) {
        var_v1 = 1;
    } else {
        var_v1 = 0;
    }
    if (var_v1 != 0) {
        *arg1 = M2C_FIELD(arg0, s128 *, 0x10);
    }
}
