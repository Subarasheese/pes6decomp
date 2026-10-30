/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


u32 func_001B94C0(s64 arg0) {
    s64 temp_a0;

    temp_a0 = (s64) (arg0 << 0x20) >> 0x20;
    return (u32) (0x7FF00000 - (((arg0 >> 0x20) & 0x7FFFFFFF) | ((u32) (temp_a0 | -temp_a0) >> 0x1F))) >> 0x1F;
}
