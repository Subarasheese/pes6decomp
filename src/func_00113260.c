/* compiler: ee-gcc-2.9-G0 */
/* Sony SDK code (a libcdvd-style callback setter, like crashwoc-decomp-ps2's sceCdCallback in
   src/sdk/sce/eecdvd.c); this SDK release also saves the caller's $gp with the callback. */
extern void *D_003F35C0; /* the callback */
extern void *D_003F35C4; /* the $gp it runs with */

int func_00113D78(int mode);
int DIntr(void);
int EIntr(void);

/* Install func unless a command is still running (func_00113D78(1) nonzero); returns the
   previous callback, or 0 when busy. */
void *func_00113260(void *func)
{
    void *old;
    int oldintr;

    if (func_00113D78(1)) {
        return 0;
    }
    oldintr = DIntr();
    old = D_003F35C0;
    D_003F35C0 = func;
    __asm__ volatile("sw $gp, %0" : "=m"(D_003F35C4));
    if (oldintr) {
        EIntr();
    }
    return old;
}
