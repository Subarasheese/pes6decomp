/* compiler: ee-gcc-2.9-G0 */
/* Sony SDK / C runtime code shared with GT4 (same SDK release); source ported
 * from the GT4 decompilation (MIT, see THIRD_PARTY.md). */

extern int D_005C8DE8;
extern int D_005C8E40;
extern char D_005C9F90[];
extern int func_001913E0(int);
extern void func_0019B140(int);
extern int func_0019EE30(void *, int, int, void *, int, void *, int,
                       void *, void *);

/* Command gate 2 submits RPC 14 without a payload and returns its DMA reply.
 * The gate retains the shared semaphore, so both RPC outcomes release it. */
int func_00191538(void)
{
    int result;
    if (!func_001913E0(2))
        return 0;
    if (func_0019EE30(D_005C9F90, 14, 0, 0, 0, &D_005C8E40, 4, 0, 0) < 0) {
        func_0019B140(D_005C8DE8);
        return 0;
    }
    result = *(int *)((unsigned int)&D_005C8E40 | 0x20000000);
    func_0019B140(D_005C8DE8);
    return result;
}
