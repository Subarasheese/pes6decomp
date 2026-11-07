/* compiler: ee-gcc-2.9-G0 */
/* Sony SDK / C runtime code shared with GT4 (same SDK release); source ported
 * from the GT4 decompilation (MIT, see THIRD_PARTY.md). */
extern char D_003F3880[]; /* client data */
extern char D_003F3900[]; /* send buffer */
extern int D_003F4E40[];  /* receive buffer */
extern char D_003C4520[];
extern void func_00115708(void *arg);
extern int sceSifCallRpc(void *cd, int fno, int mode, void *send, int ssize, void *recv, int rsize,
                         void (*end)(void *), void *arg); /* sceSifCallRpc */
extern int printf(const char *fmt, ...);        /* printf */

int func_00116178(void)
{
    if (sceSifCallRpc(D_003F3880, 0x35, 0, D_003F3900, 0x30, D_003F4E40, 4, func_00115708, 0) != 0) {
        printf(D_003C4520);
        return -0x5B;
    }
    return D_003F4E40[0];
}
