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
extern struct TimerState D_00372998;
extern int func_0010F420(void);
extern int func_0010F470(void);
extern int func_00105060(int, int);
extern int func_00105E40(int);
extern void func_0010FD10(unsigned);
extern void func_0010FD00(unsigned);
int func_0010FE88(void) {
    int interrupts;
    if (D_00372998.interrupt_handler < 0) return 0x80008001;
    if (D_00372998.allocated) return 0x80000010;
    interrupts = func_0010F420();
    if (!func_00105060(11, D_00372998.interrupt_handler)) {
        func_00105E40(11);
        func_0010FD10(0xC00);
        func_0010FD00(0);
    }
    D_00372998.ticks = 0;
    D_00372998.interrupt_handler = -1;
    if (interrupts) func_0010F470();
    return 0;
}
