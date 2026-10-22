/* compiler: ee-gcc-2.9-G0 */
/* Shared Sony SDK/runtime code; source ported from the GT4 decompilation (same SDK). */
/* Submit operation 253 after a backend compatibility check and empty-table check.
 * Shared response RAM is read through its uncached alias before unlocking.
 * Operation semantics and the unused packet word remain provisional. */
struct Request { int argument; int unknown4; };
extern struct Request D_003EDD00;
extern char D_003EF400;
extern int D_003EE940, D_0037138C;
extern int func_0010A0C0(int);
extern void func_0010A0F0(void);
extern int func_0010A1E8(void);
extern int func_0010A3F0(void);
extern int func_00109A48(void);
extern unsigned int func_00109B50(void *, int, int, void *, int, void *, int,
    void (*)(void *), void *, int);
int func_0010A5F8(int argument) {
    int result;
    func_0010A0C0(253);
    if (!D_0037138C) func_0010A1E8();
    if (func_0010A3F0()) {
        func_0010A0F0();
        return 0xFFFEFFFC;
    }
    if (func_00109A48()) {
        func_0010A0F0();
        return -16;
    }
    D_003EDD00.argument = argument;
    if ((int)func_00109B50(&D_003EF400, 253, 0, &D_003EDD00, 8,
                         &D_003EE940, 4, 0, 0, 0) < 0) {
        func_0010A0F0();
        return -11;
    }
    result = *(int *)((unsigned)&D_003EE940 | 0x20000000);
    func_0010A0F0();
    return result;
}
