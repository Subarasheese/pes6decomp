/* compiler: ee-gcc-2.96-G0 */
/* LSC_Init adapted from LucasPicoli/god-hand-decomp, src/cod/003272c0.c. See THIRD_PARTY.md. */
extern volatile int D_00387A60;
extern int D_00387A78;
extern int D_00387A80;
extern void func_001727C0(int *);
extern void func_001727E0(int *);
extern void *memset(void *dst, int value, unsigned int size);
extern void func_001728B0(void);
extern void func_001727F8(int, int);
void func_001728C0(void) {
    int *s0;
    int sp_buf[1];
    int v3;
    v3 = D_00387A60;
    func_001727C0(sp_buf);
    s0 = &D_00387A78;
    if (!(*s0)) {
        memset(&D_00387A80, 0, 0x4700);
        func_001728B0();
        func_001727F8(0, 0);
    }
    *s0 = (*s0) + 1;
    func_001727E0(sp_buf);
}
