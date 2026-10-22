/* compiler: ee-gcc-2.9-G0 */
/* Shared Sony SDK/runtime code; source ported from the GT4 decompilation (same SDK). */
/* types.h: the sized integer and float names every m2c draft uses (tools/cpu_solve.py PRELUDE),
 * once for every source instead of pasted into each (tools/cleanup.py headers). */
#ifndef TYPES_H
#define TYPES_H

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
typedef int s128 __attribute__((mode(TI))); typedef unsigned int u128 __attribute__((mode(TI)));

#endif
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

s32 DIntr();                                /* extern */
s32 EIntr();                            /* extern */
s32 func_00110CE0(s32, s32, s32, s32);              /* extern */

s32 func_00110DD8(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_s0;
    s32 temp_s4;

    temp_s4 = DIntr();
    temp_s0 = func_00110CE0(arg0, arg1, arg2, arg3);
    if (temp_s4 != 0) {
        EIntr();
    }
    return temp_s0;
}
