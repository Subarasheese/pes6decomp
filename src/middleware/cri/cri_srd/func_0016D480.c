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
extern s32 D_00731C3C;
extern volatile u32 D_00731C50;
extern const char D_0075ABC8[];
extern volatile s32 D_00731C54;
extern const char D_0075ABF8[], D_0075AC08[], D_0075AC28[];
extern const char D_0075AC48[], D_0075AC68[], D_0075AC88[], D_0075ACA8[];
extern void func_004244c8(const char *, ...);
extern s8 D_00731C00[];
extern s8 D_00385099;
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

s32 func_0016D480(void) {
    s8 devtype = D_00385099;
    if (devtype == 1) return SRD_GetReadStatusDvd() * 2;
    if (devtype == 2) return func_0016D3E0();
    return 0;
}
s32 func_0016D4D0(void);
