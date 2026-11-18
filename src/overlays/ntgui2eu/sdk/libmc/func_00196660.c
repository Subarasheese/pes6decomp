/* compiler: ee-gcc-2.9-G0 */
/* Sony SDK / C runtime code shared with GT4 (same SDK release); source ported
 * from the GT4 decompilation (MIT, see THIRD_PARTY.md). */
extern char D_011FD7C0[]; /* client data */
extern char D_011FD840[]; /* send buffer */
extern int D_011FED80[];  /* receive buffer */
extern char D_005FF318[];
extern void func_00195BF0(void *arg);
extern int func_0019EE30(void *cd, int fno, int mode, void *send, int ssize, void *recv, int rsize,
                         void (*end)(void *), void *arg); /* sceSifCallRpc */
extern int func_0019DBD0(const char *fmt, ...);        /* printf */

int func_00196660(void)
{
    if (func_0019EE30(D_011FD7C0, 0x35, 0, D_011FD840, 0x30, D_011FED80, 4, func_00195BF0, 0) != 0) {
        func_0019DBD0(D_005FF318);
        return -0x5B;
    }
    return D_011FED80[0];
}
