/* compiler: ee-gcc-2.96-G0 */
/* StmMgr_start adapted from LucasPicoli/god-hand-decomp, src/cod/00324950.c. See THIRD_PARTY.md. */
extern int func_00162D80(void);
extern void func_00161668(void);
extern void func_00179C20(int priority, int mode, void (*callback)(void), int argument,
                          const char *name);
extern int func_00179A08(int priority, void (*callback)(void), int argument, const char *name);

extern int D_0037AC88;
extern int D_0037AC90;
extern int D_0037AC98;
extern int D_0037AC9C;
extern char D_003C8478[];
extern char D_003C8488[];
extern char D_003C8498[];
extern volatile int D_0050E308;
extern volatile int D_0037ACA0;
extern char D_0037ACA8[];
extern char D_003C8428[];
extern void func_00159E28(void);
extern void func_00159E88(void);
extern void func_00177AC8(void);
extern void func_00176EC0(void);
extern void func_001764A8(void);
extern void func_0015B3E0(void);
extern void func_0015B6F0(void);
extern void func_00161310(void);
extern void func_001728C0(void);
extern void func_0017A188(void);
extern void func_00161340(void *fn, int arg);
extern void func_001727F8(void *fn, int arg);
extern void *memset(void *dst, int value, unsigned int size);
extern void func_00166AA0(int a0);
extern void func_00159EA0(void);
extern void func_0015E528(void);
extern void func_0015E540(void);
extern void func_0015E5A0(void);
extern void func_0015E5C0(void);
extern void func_0015E580(void);
void func_0015E5E0(void) {
    int *count = &D_0037AC88;
    int h;
    int c;
    c = *count;
    D_0050E308 = (int)D_003C8428;
    if (c == 0) {
        func_00159E28();
        func_00159E88();
        func_00177AC8();
        func_00176EC0();
        func_001764A8();
        func_0015B3E0();
        func_00162D80();
        func_00161668();
        func_0015B6F0();
        func_00161310();
        func_001728C0();
        func_0017A188();
        func_00161340(func_0015E528, 0);
        func_001727F8(func_0015E540, 0);
        memset(D_0037ACA8, 0, 0xC80);
        func_00179C20(2, 1, func_0015E5A0, 0, D_003C8478);
        h = func_00179A08(4, func_0015E5C0, 0, D_003C8488);
        D_0037AC9C = h;
        D_0037AC90 = func_00179A08(5, func_0015E580, 0, D_003C8498);
        D_0037ACA0 = 0;
        D_0037AC98 = 0;
        func_00166AA0(0x3C);
        func_00159EA0();
        c = *count;
    }
    *count = c + 1;
}
