/* compiler: ee-gcc-2.96-G0 */
/* CRI middleware code; source adapted from Persona4 (src/cri/libadxe/cri_srd_exec.c). */
/* Persona 4 SRD/PS2EE 2.22 server dispatcher, independently derived from
 * retail code at 0x004E4190. The older CRI 2.18a source at
 * https://github.com/crowded-street/3s-decomp/blob/main/src/anniversary/cri/libadxe/cri_srd.c
 * corroborates the API name, not this body; no external code was copied. */
#ifndef TYPE_H
#define TYPE_H

typedef unsigned char u8;
typedef signed char s8;

typedef unsigned short u16;
typedef signed short s16;

typedef unsigned int u32;
typedef signed int s32;

typedef unsigned long long u64;
typedef signed long long s64;

typedef float f32;
typedef double f64;

typedef s32 intptr_t;
typedef u32 uintptr_t;

typedef u32 size_t;

#define NULL ((void*)0)

#endif // TYPE_H

extern s8 D_00385098[]; /* srd_obj; devtype is byte +1 */
extern s32 D_003850D4;
extern volatile s32 D_003850D8, D_003850DC; /* asynchronous lock flags */
extern s32 func_0017A220(s32 *);
extern void func_00179610(void), func_00179688(void);
extern void func_0016CD70(s8 *), func_0016CF58(s8 *);

/* SRD_ExecServer. */
// FUN_004E4190
void func_0016D138(void) {
    s8 *srd = D_00385098;
    if (func_0017A220(&D_003850D4) == 0) return;
    if (srd[1] == 1) {
        if (D_003850D8 == 1) func_00179610();
        func_0016CD70(srd);
        if (D_003850D8 == 1) func_00179688();
    }
    if (srd[1] == 2) {
        if (D_003850DC == 1) func_00179610();
        func_0016CF58(srd);
        if (D_003850DC == 1) func_00179688();
    }
    D_003850D4 = 0;
}
