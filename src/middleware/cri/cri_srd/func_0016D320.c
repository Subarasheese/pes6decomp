/* compiler: ee-gcc-2.96-G0 */
/* CRI middleware code; source adapted from Persona4 (src/cri/libadxe/cri_srd_control.c). */
/* Persona 4 SRD/PS2EE 2.22 server wait, control, read-status and diagnostics,
 * independently derived from retail code at 0x004E42A0..0x004E4528.
 * The older CRI 2.18a source at
 * https://github.com/crowded-street/3s-decomp/blob/main/src/anniversary/cri/libadxe/cri_srd.c
 * corroborates API order and names, not these bodies. The wait counter and
 * lock stores need volatile access to reproduce retail code; no external
 * source bodies were copied. */
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

extern void func_004e4618(s32); /* SRD_SetHistory */
extern s32 func_0042e7c8(s32);
extern volatile s32 D_003850E0; /* srd_dvd_exec_locked */
extern volatile s32 D_00731C44; /* srd_hst_exec_locked */
extern volatile s32 D_00731C48; /* srd_geterror_locked */
extern volatile s32 D_00731C4C; /* srd_geterror_call */
extern s32 D_00731C3C; /* srd_enter_fg */
extern volatile u32 D_00731C50; /* srd_wait_svr_cnt */
extern const char D_0075ABC8[]; /* SRD server timeout message */
extern volatile s32 D_00731C54; /* srd_dvd_read_cnt */
extern const char D_0075ABF8[], D_0075AC08[], D_0075AC28[];
extern const char D_0075AC48[], D_0075AC68[], D_0075AC88[], D_0075ACA8[];
extern void func_004244c8(const char *, ...);
extern s8 D_00731C00[]; /* srd_obj */
extern s8 D_00731C01; /* srd_obj.devtype */
extern s8 D_00731C02; /* srd_obj.stat */
extern void func_004f0608(void), func_004f0620(void);
extern s32 func_004e48b0(s32, s32, s32 *);

/* Only the retail object fields read by status and diagnostics are named. */
typedef struct {
    s8 used, devtype, stat, pad;
    u8 rest[0x2c];
    s32 fd; /* +0x30 */
} SRD;/* SRD_WaitForExecServer. */
// FUN_004E42A0
void func_0016D248(void);


/* SRD_LockedForDvdExec. */
// FUN_004E4308
void func_0016D320(s32 enabled) {
    func_0016D248();
    D_003850E0 = (s8)enabled;
}
/* SRD_LockedForHstExec. */
// FUN_004E4340
void func_0016D2E8(s32 enabled);
/* SRD_LockedForGetError. */
// FUN_004E4378
void func_0016D320(s32 enabled);
/* SRD_CallForGetError. */
// FUN_004E43B0
void func_0016D358(s32 enabled);
