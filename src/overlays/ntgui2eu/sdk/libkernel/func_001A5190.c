/* compiler: ee-gcc-2.9-G0 */
/* Sony SDK / C runtime code shared with GT4 (same SDK release); source ported
 * from the GT4 decompilation (MIT, see THIRD_PARTY.md). */
/* Shut down the timer service only when no timer records remain allocated.
 * Preserve the original interrupt-handler removal and hardware-reset paths.
 * State names and the unexposed tail of the layout remain provisional. */
struct TimerState {
    unsigned long long ticks;
    int interrupt_handler;
    unsigned generation;
    volatile int allocated;
};
extern struct TimerState D_005CBB98;
extern int func_001A4728(void);
extern int func_001A4778(void);
extern int func_0019AE20(int, int);
extern int func_0019BC00(int);
extern void func_001A5018(unsigned);
extern void func_001A5008(unsigned);
int func_001A5190(void) {
    int interrupts;
    if (D_005CBB98.interrupt_handler < 0) return 0x80008001;
    if (D_005CBB98.allocated) return 0x80000010;
    interrupts = func_001A4728();
    if (!func_0019AE20(11, D_005CBB98.interrupt_handler)) {
        func_0019BC00(11);
        func_001A5018(0xC00);
        func_001A5008(0);
    }
    D_005CBB98.ticks = 0;
    D_005CBB98.interrupt_handler = -1;
    if (interrupts) func_001A4778();
    return 0;
}
