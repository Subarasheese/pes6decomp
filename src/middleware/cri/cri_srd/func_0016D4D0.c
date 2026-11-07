/* compiler: ee-gcc-2.96-G0 */
/* CRI middleware code; source adapted from Persona4 (src/cri/libadxe/cri_srd_control.c). */
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
extern void func_004e4618(s32);
extern s32 func_0042e7c8(s32);
extern volatile s32 D_00731C40;
extern volatile s32 D_00731C44;
extern volatile s32 D_00731C48;
extern volatile s32 D_00731C4C;
extern s32 D_003850D4;
extern volatile u32 D_00731C50;
extern const char D_0075ABC8[];
extern volatile s32 D_003850EC;
extern const char D_003CA128[], D_003CA138[], D_003CA158[];
extern const char D_003CA178[], D_003CA198[], D_003CA1B8[], D_003CA1D8[];
extern void printf(const char *, ...);
extern s8 D_00385098[];
extern s8 D_00731C01;
extern s8 D_00731C02;
extern void func_004f0608(void), func_004f0620(void);
extern s32 func_004e48b0(s32, s32, s32 *);
typedef struct {
    s8 used, devtype, stat, pad;
    u8 rest[0x2c];
    s32 fd;
} SRD;void func_0016D248(void);
void func_0016D2B0(s32 enabled);
void func_0016D2E8(s32 enabled);
void func_0016D320(s32 enabled);
void func_0016D358(s32 enabled);
void func_0016D390(void);
s32 SRD_GetReadStatusDvd(void);
s32 func_0016D3E0(void);
s32 func_0016D480(void);

s32 func_0016D4D0(void) {
    SRD *srd;
    const char *fmt;
    printf(D_003CA128);
    printf(D_003CA138, D_003850D4);
    printf(D_003CA158, D_003850EC);
    fmt = D_003CA178;
    srd = (SRD *)D_00385098;
    printf(fmt, srd->stat);
    if (srd->devtype == 1) printf(D_003CA198);
    if (srd->devtype == 2) printf(D_003CA1B8);
    printf(D_003CA1D8, func_0016D480());
    return 0;
}
