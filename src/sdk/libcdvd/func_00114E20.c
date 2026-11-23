/* compiler: ee-gcc-2.9-G0 */
/* sceCdReadClock adapted from LucasPicoli/god-hand-decomp, src/cod/00399cb0.c. See THIRD_PARTY.md.
 */
extern int D_00373C80[];
typedef unsigned int u_int;
typedef struct {
    char b[8];
} T8;
extern char D_00374600;
extern int D_00372AAC;
extern int func_00113E88(int cmd);
extern int sceSifCallRpc(void *cd, int rno, int mode, void *sbuf, int ssize, void *rbuf, int rsize,
                         void *efunc, void *epara);
extern int func_00105380(int sema);
int func_00114E20(void *rtc) {
    int r;
    if (!func_00113E88(15))
        return 0;
    if (sceSifCallRpc(&D_00374600, 1, 0, 0, 0, D_00373C80, 16, 0, 0) < 0) {
        func_00105380(D_00372AAC);
        return 0;
    }
    *((T8 *)rtc) = *((T8 *)(((u_int)(&D_00373C80[1])) | 0x20000000));
    r = *((int *)(((u_int)D_00373C80) | 0x20000000));
    func_00105380(D_00372AAC);
    return r;
}
