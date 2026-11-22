/* compiler: ee-gcc-2.9-G0 */
/* OpenRAC/rac5-sm-decomp, src/boot/sceSdRemoteInit.c (sceSdRemoteInit). The reference name refers to the comparison source.
 * The PAL name remains provisional. See THIRD_PARTY.md. */

struct sd_client {
    int pad_0[9];
    int bound;
};
extern struct sd_client D_003F3580;
extern int D_00372A10;
extern int D_00372A14;
extern void sceSifInitRpc(int);
extern int sceSifBindRpc(void *, unsigned int, int);
extern int printf(const char *, ...);
extern void FlushCache(int);
int func_00112D80(void) {
    int spin;
    sceSifInitRpc(0);
    do {
        if (sceSifBindRpc(&D_003F3580, 0x80000701, 0) < 0) {
            printf("sceSdRemoteInit() RPC bind error!\n");
            return -1;
        }
        for (spin = 10000; spin != (-1); spin--) {
        }

    } while (D_003F3580.bound == 0);
    D_00372A10 = 0;
    D_00372A14 = 0;
    FlushCache(0);
    return 0;
}
