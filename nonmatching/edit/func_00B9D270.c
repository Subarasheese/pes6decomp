/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"
typedef int s128 __attribute__((mode(TI)));
typedef unsigned int u128 __attribute__((mode(TI)));
typedef char Check128Width[sizeof(s128)==16?1:-1];


extern char D_00CE4090[];
extern char D_00CE40A0[];
extern char D_00CE40B0[];
extern char D_00CE40C0[];

void func_00B9D270(void) {
    (*(s128 *)D_00CE40B0) = (*(s128 *)D_00CE4090);
    (*(f32 *)D_00CE40C0) = (*(f32 *)D_00CE40A0);
}
