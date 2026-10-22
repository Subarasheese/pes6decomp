/* compiler: ee-gcc-2.96 */
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
extern void func_0016D5C0(s32);
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
extern s8 D_00385098[];
extern s8 D_00731C01;
extern s8 D_00731C02;
extern void func_001795B0(void), func_001795C8(void);
extern s32 func_0016D858(s32, s32, s32 *);
typedef struct {
    s8 used, devtype, stat, pad;
    u8 rest[0x2c];
    s32 fd;
} SRD;void func_004e42a0(void);
void func_004e4308(s32 enabled);
void func_004e4340(s32 enabled);
void func_004e4378(s32 enabled);
void func_004e43b0(s32 enabled);
void func_004e43e8(void);
s32 SRD_GetReadStatusDvd(void);

s32 func_0016D3E0(void) {
    s32 done;
    SRD *srd = (SRD *)D_00385098;
    if (srd->stat == 2) {
        func_001795B0();
        func_0016D5C0(0x2400);
        if (func_0016D858(srd->fd, 1, &done) < 0) {
            func_0016D5C0(0x2401);
        } else {
            func_0016D5C0(0x2402);
            if (done) {
                func_001795C8();
                return 1;
            }
        }
        func_001795C8();
    }
    return 0;
}
s32 func_004e44d8(void);
s32 func_004e4528(void);
