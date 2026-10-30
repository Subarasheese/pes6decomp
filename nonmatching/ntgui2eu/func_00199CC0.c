/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"
typedef int s128 __attribute__((mode(TI)));
typedef unsigned int u128 __attribute__((mode(TI)));
typedef char Check128Width[sizeof(s128)==16?1:-1];


void func_00199CC0(void *arg0, s128 arg1) {
    s128 *temp_v0;

    temp_v0 = M2C_FIELD(arg0, s128 **, 0);
    *temp_v0 = arg1;
    M2C_FIELD(arg0, s128 **, 0) = (s128 *) (temp_v0 + 0x10);
    M2C_FIELD(arg0, s128 **, 0xC) = temp_v0;
}
