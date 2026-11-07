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

struct File {
    char p0[0xC];
    s16 flags;              /* 0x0C */
    s16 file;               /* 0x0E */
    char p1[0xC];           /* 0x10-0x1B */
    struct File *cookie;    /* 0x1C */
    void (*f_read)(void);   /* 0x20 */
    void (*f_write)(void);  /* 0x24 */
    void (*f_seek)(void);   /* 0x28 */
    void (*f_close)(void);  /* 0x2C */
    char p2[0x24];          /* 0x30-0x53 */
    void *data;             /* 0x54 */
};

extern "C" s32 func_001C21F0(void *ptr, const char *mode, s32 *optr);
extern "C" struct File *func_001C1FD0(void *ptr);
extern "C" s32 func_001C60F8(void *ptr, const char *file, s32 oflags, s32 mode);
extern "C" void __sread(void);
extern "C" void __swrite(void);
extern "C" void __sseek(void);
extern "C" void func_001C7B88(void);
extern "C" void fseek(struct File *fp, s32 buf, s32 mode);

extern "C" struct File *func_001C22A8(void *ptr, const char *file, const char *mode) {
    s32 buf[4];
    s32 flags;
    struct File *fp;
    s32 r;
    s32 a4;

    flags = func_001C21F0(ptr, mode, buf);
    if (flags == 0) {
        return 0;
    }
    fp = func_001C1FD0(ptr);
    if (fp == 0) {
        return 0;
    }
    r = func_001C60F8(fp->data, file, buf[0], 0x1B6);
    a4 = flags & 0x100;
    if (r < 0) {
        fp->flags = 0;
        return 0;
    }
    fp->file = r;
    fp->f_read = __sread;
    fp->f_write = __swrite;
    fp->f_seek = __sseek;
    fp->f_close = func_001C7B88;
    fp->flags = flags;
    fp->cookie = fp;
    if (a4 != 0) {
        fseek(fp, 0, 2);
    }
    return fp;
}
