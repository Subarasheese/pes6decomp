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

struct Rep {
    s32 len;
    s32 cap;
    s32 ref;
    s32 sel;
};

struct Str {
    char *p;
    char pad[0xC];
};

struct S00659988 {
    const char *name;
};

extern char D_001C20C8[];
extern "C" void func_001C1EF8(void *, s32, s32, void *);

struct func_005A3668_arg0 {
    char pad0[0x38];
    s32 unk38;
    s32 unk3C;
    char pad40[0x198];
    s32 unk1D8;
    s32 unk1DC;
    s32 unk1E0;
};

extern "C" void __sinit(s32 *arg0) {
    char *v_s1;
    v_s1 = (char *)arg0 + 0x1e4;
    ((struct func_005A3668_arg0 *)arg0)->unk3C = (s32)&D_001C20C8;
    ((struct func_005A3668_arg0 *)arg0)->unk38 = 0x1;
    func_001C1EF8(v_s1, 0x4, 0, arg0);
    func_001C1EF8((char *)arg0 + 0x23c, 0x9, 0x1, arg0);
    func_001C1EF8((char *)arg0 + 0x294, 0xa, 0x2, arg0);
    ((struct func_005A3668_arg0 *)arg0)->unk1D8 = 0;
    ((struct func_005A3668_arg0 *)arg0)->unk1E0 = (s32)v_s1;
    ((struct func_005A3668_arg0 *)arg0)->unk1DC = 0x3;
}
