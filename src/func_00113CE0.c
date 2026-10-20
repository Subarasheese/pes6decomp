/* compiler: ee-gcc-2.9-G0 */
/* Sony SDK / C runtime code shared with GT4 (same SDK release); source ported
 * from the GT4 decompilation (MIT, see THIRD_PARTY.md). */

extern int _sceCd_ncmd_semid;
extern int D_00372B00;
extern char D_00373C50[];
extern int func_00113B88(int);
extern void func_00105380(int);
extern int sceSifCallRpc(void *, int, int, void *, int, void *, int,
                       void *, void *);

/* Command gate 2 submits RPC 14 without a payload and returns its DMA reply.
 * The gate retains the shared semaphore, so both RPC outcomes release it. */
int func_00113CE0(void)
{
    int result;
    if (!func_00113B88(2))
        return 0;
    if (sceSifCallRpc(D_00373C50, 14, 0, 0, 0, &D_00372B00, 4, 0, 0) < 0) {
        func_00105380(_sceCd_ncmd_semid);
        return 0;
    }
    result = *(int *)((unsigned int)&D_00372B00 | 0x20000000);
    func_00105380(_sceCd_ncmd_semid);
    return result;
}
