/* compiler: ee-gcc-2.9 */
#include "types.h"
s64 func_00190848(f32);
s64 func_00190808(f32 x) { if (x < 0.0f) return -func_00190848(-x); return func_00190848(x); }
