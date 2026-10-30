/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"
typedef int s128 __attribute__((mode(TI)));
typedef unsigned int u128 __attribute__((mode(TI)));
typedef char Check128Width[sizeof(s128)==16?1:-1];

extern void func_001036F0(void *, int);
M2C_UNK func_00103778(void *, s128);                /* extern */
M2C_UNK func_001E63D0(s32, s32);                    /* extern */
extern char D_0052B110[];

void func_001E6360(void *arg0, s32 arg1, s32 arg2) {
    if (arg1 != 6) {
        func_001036F0(arg0, 0);
        func_001E63D0(arg1, arg2);
        func_00103778(arg0, (*(s128 *)D_0052B110));
    }
}
