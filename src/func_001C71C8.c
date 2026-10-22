/* compiler: ee-gcc-2.96-G0 */
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
void *memcpy(void *, const void *, unsigned int);

s32 fflush();                                /* extern */

struct func_005A5668_arg0 {
    char pad0[0xC];
    u16 unkC;
};

s32 func_001C71C8(struct func_005A5668_arg0 *arg0) {
    if ((arg0->unkC & 9) == 9) {
        return fflush();
    }
    return 0;
}
