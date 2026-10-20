/* compiler: ee-gcc-2.9-G0 */
/* Sony SDK / C runtime code shared with GT4 (same SDK release); source ported
 * from the GT4 decompilation (MIT, see THIRD_PARTY.md). */
extern "C" void *func_00109778(void *);
extern "C" void func_001097D0(void *);
extern "C" void func_00105280(void);

extern "C" void func_00109998(void *self) {
    for (;;) {
        void *e;
        while ((e = func_00109778(self)) != 0) {
            func_001097D0(e);
        }
        func_00105280();
    }
}
