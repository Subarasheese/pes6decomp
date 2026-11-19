/* compiler: ee-gcc-2.9-G0 */
/* Shared Sony SDK/runtime code; source ported from the GT4 decompilation (same SDK). */
/* Submit operation 253 after a backend compatibility check and empty-table check.
 * Shared response RAM is read through its uncached alias before unlocking.
 * Operation semantics and the unused packet word remain provisional. */
struct Request { int argument; int unknown4; };
extern struct Request D_01203340;
extern char D_01204A40;
extern int D_01203F80, D_005CABE4;
extern int func_0019FC48(int);
extern void func_0019FC78(void);
extern int func_0019FD70(void);
extern int func_0019FF78(void);
extern int func_0019F5D0(void);
extern unsigned int func_0019F6D8(void *, int, int, void *, int, void *, int,
    void (*)(void *), void *, int);
int func_001A0180(int argument) {
    int result;
    func_0019FC48(253);
    if (!D_005CABE4) func_0019FD70();
    if (func_0019FF78()) {
        func_0019FC78();
        return 0xFFFEFFFC;
    }
    if (func_0019F5D0()) {
        func_0019FC78();
        return -16;
    }
    D_01203340.argument = argument;
    if ((int)func_0019F6D8(&D_01204A40, 253, 0, &D_01203340, 8,
                         &D_01203F80, 4, 0, 0, 0) < 0) {
        func_0019FC78();
        return -11;
    }
    result = *(int *)((unsigned)&D_01203F80 | 0x20000000);
    func_0019FC78();
    return result;
}
