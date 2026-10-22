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

extern volatile s32 D_00731C54;
extern s32 D_00731C78;
extern u8 D_00731C7C;
extern const char D_0075AB48[];
extern s32 func_0042f548(void), func_0042e7c8(s32);
extern s32 func_0042f200(s32, s32, void *, u8 *), func_004e3c78(SRD *);
extern void func_004244c8(const char *, ...);
extern volatile s32 D_003850F0, D_003850F4;
extern void func_0016D5C0(s32), func_0016C9B8(SRD *);
extern s64 func_0016D7A0(s32, s64, s32), func_0016D990(s32, void *, s32);
extern s32 func_0016D858(s32, s32, s32 *);/* srd_exec_dvd: DVD break, read and sync state machine. */
// FUN_004E3DC8
void func_004e3dc8(SRD *srd);


/* srd_exec_hst: host seek/read state machine. */
// FUN_004E3FB0
void func_0016CF58(SRD *srd) {
    s64 result;
    s32 done;
    if (srd->active == 1) {
        /* All ten observed states retain the retail jump-table lowering. */
        switch (srd->stat) {
        case 2:
            func_0016C9B8(srd);
            srd->stat = 0;
            ++D_003850F4;
            /* fall through */
        case 1: case 3: case 9:
            srd->stat = 0;
            /* fall through */
        case 0: case 4: case 5: case 6: case 7: case 8:
        default:
            srd->active = 0;
            break;
        }
    }
    if (srd->stat == 1) {
        func_0016D5C0(0x2000);
        result = func_0016D7A0(srd->fd, srd->offset << 11, 0);
        func_0016D5C0(0x2001);
        if (result < 0) {
            srd->stat = 9;
            srd->error = (s32)result;
        }
        func_0016D5C0(0x2100);
        result = func_0016D990(srd->fd, srd->buffer, srd->size);
        func_0016D5C0(0x2101);
        if (result >= 0) {
            srd->stat = 2;
            ++D_003850F0;
        } else {
            srd->stat = 9;
            srd->error = (s32)result;
        }
    }
    if (srd->stat == 2) {
        func_0016D5C0(0x2200);
        if (func_0016D858(srd->fd, 1, &done) < 0) {
            func_0016D5C0(0x2201);
            srd->stat = 9;
            srd->error = -1;
        } else {
            func_0016D5C0(0x2202);
            if (done == 0) {
                srd->stat = 3;
                ++D_003850F4;
            }
        }
    }
}
