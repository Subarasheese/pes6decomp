/* compiler: ee-gcc-2.96-G0 */
/* CRI middleware code; source adapted from Persona4 (src/cri/libadxe/cri_srd.c). */
/* CRI SRD/PS2EE 2.22 names and volatile globals are corroborated by
 * https://github.com/crowded-street/3s-decomp/blob/main/src/anniversary/cri/libadxe/cri_srd.c
 * (AGPL-3.0, older 2.18a). No implementation is copied: these five bodies
 * were independently derived from Persona 4 retail instructions and verified
 * byte-exact with ee-gcc 2.96. Do not port code from that source. */
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

extern volatile s32 D_00731C58; /* srd_debug_rdbg_cnt */
extern volatile s32 D_00385104; /* srd_debug_rded_cnt */
extern volatile s32 D_00731C68; /* srd_history_pre */
extern volatile s32 D_00731C6C; /* srd_history */

/* SRD_GetReadEndCount. */
// FUN_004E45F8
s32 func_0016D5E0(void) { return D_00385104; }
/* SRD_GetReadBeginCount. */
// FUN_004E4608
s32 func_004e4608(void);
/* SRD_SetHistory. */
// FUN_004E4618
void func_004e4618(s32 value);
/* SRD_GetHistory. */
// FUN_004E4638
s32 func_004e4638(void);


extern s32 D_00731C70; /* srd_filesystem64 */
extern const char D_0075ACC8[]; /* SRD: 64bit Host filesystem. */
extern void func_004244c8(const char *, ...);/* SRD_SetFilesystem64. */
// FUN_004E4648
void func_004e4648(s32 enabled);
