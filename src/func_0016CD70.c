/* compiler: ee-gcc-2.96-G0 */
/* CRI middleware code; source adapted from Persona4 (src/cri/libadxe/cri_srd_exec_io.c). */
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

/* Persona 4 SRD/PS2EE 2.22 DVD and host execution state machines,
 * independently derived from retail code at 0x004E3DC8..0x004E417C.
 * Older CRI 2.18a source at
 * https://github.com/crowded-street/3s-decomp/blob/main/src/anniversary/cri/libadxe/cri_srd.c
 * corroborates the API names, not this implementation; no external source
 * bodies were copied. */

typedef struct {
    s8 used, devtype, stat, pad;
    s32 active, sector, count;
    void *dvd_buffer;
    u8 mode[4];
    void *buffer;
    s32 pad1c, size, pad24;
    s64 offset;
    s32 fd, error;
} SRD;

extern volatile s32 D_003850EC;
extern s32 D_00385110;
extern u8 D_00385114;
extern const char D_003CA078[];
extern s32 func_00114BB8(void), func_00113D78(s32);
extern s32 func_001147B0(s32, s32, void *, u8 *), func_0016CC20(SRD *);
extern void printf(const char *, ...);
extern volatile s32 D_003850F0, D_003850F4;
extern void func_0016D5C0(s32), func_004e3a10(SRD *);
extern s64 func_004e47f8(s32, s64, s32), func_004e49e8(s32, void *, s32);
extern s32 func_004e48b0(s32, s32, s32 *);

/* srd_exec_dvd: DVD break, read and sync state machine. */
// FUN_004E3DC8
void func_0016CD70(SRD *srd) {
    s32 break_ok, read_ok, sync, check;
    if (srd->active == 1) {
        /* Explicit states preserve retail's ten-entry dispatch table. */
        switch (srd->stat) {
        case 2:
            func_0016D5C0(0x1600);
            break_ok = func_00114BB8();
            func_0016D5C0(0x1601);
            if (break_ok == 0) printf(D_003CA078, D_003850EC);
            func_0016D5C0(0x1700);
            func_00113D78(0);
            func_0016D5C0(0x1701);
            srd->stat = 0;
            ++D_003850F4;
            break;
        case 1: case 3: case 9:
            srd->stat = 0;
            /* fall through */
        case 0: case 4: case 5: case 6: case 7: case 8:
        default:
            break;
        }
        srd->active = 0;
    }
    if (srd->stat == 1) {
        func_0016D5C0(0x1800);
        if (D_00385110 == 1) srd->mode[1] = D_00385114;
        read_ok = func_001147B0(srd->sector, srd->count,
                                srd->dvd_buffer, srd->mode);
        func_0016D5C0(0x1801);
        if (read_ok == 1) {
            ++D_003850F0;
            srd->stat = 2;
        } else {
            srd->stat = 9;
            srd->error = -1;
        }
    }
    if (srd->stat == 2) {
        func_0016D5C0(0x1900);
        sync = func_00113D78(1);
        func_0016D5C0(0x1901);
        check = func_0016CC20(srd);
        if (sync == 0) {
            srd->stat = (check == 1) ? 9 : 3;
            ++D_003850F4;
        }
    }
}
/* srd_exec_hst: host seek/read state machine. */
// FUN_004E3FB0
void func_004e3fb0(SRD *srd);
