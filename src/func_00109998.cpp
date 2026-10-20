/* compiler: ee-gcc-2.9-G0 */
/* Sony SDK / C runtime code shared with GT4 (same SDK release); source ported
 * from the GT4 decompilation (MIT, see THIRD_PARTY.md). */
extern "C" void *sceSifGetNextRequest(void *);
extern "C" void sceSifExecRequest(void *);
extern "C" void func_00105280(void);

extern "C" void func_00109998(void *self) {
    for (;;) {
        void *e;
        while ((e = sceSifGetNextRequest(self)) != 0) {
            sceSifExecRequest(e);
        }
        func_00105280();
    }
}
