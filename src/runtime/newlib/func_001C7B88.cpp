/* compiler: ee-gcc-2.96-G0 */
/* Sony SDK / C runtime code shared with GT4 (same SDK release); source ported
 * from the GT4 decompilation (MIT, see THIRD_PARTY.md). */
/* types.h: the sized integer and float names every m2c draft uses (tools/cpu_solve.py PRELUDE),
 * once for every source instead of pasted into each (tools/cleanup.py headers). */
#ifndef TYPES_H
#define TYPES_H

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64;
typedef float f32; typedef double f64;
typedef int s128 __attribute__((mode(TI))); typedef unsigned int u128 __attribute__((mode(TI)));

#endif

struct Obj {
    char pad0[0xE];
    s16 unkE;
    char pad1[0x54 - 0x10];
    s32 unk54;
};

extern "C" s32 func_001C0560(s32 arg0, s16 arg1);

extern "C" s32 func_001C7B88(struct Obj *arg0) {
    return func_001C0560(arg0->unk54, arg0->unkE);
}
