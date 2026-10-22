/* compiler: ee-gcc-2.9-G0 */
/* Shared Sony SDK/runtime code; source ported from the GT4 decompilation (same SDK). */
/* Stop a running timer, accumulating its elapsed ticks and removing any
 * pending callback from the scheduler. Caller supplies IRQ exclusion.
 * Partial record/state layouts remain provisional. */
struct Timer {
    struct Timer *next;
    unsigned unknown4, id, flags;
    unsigned long long started, elapsed;
};
struct TimerState { char unknown0[0x1C]; int current; };
extern volatile struct TimerState D_00372998;
extern unsigned long long func_00110578(void);
extern struct Timer *func_00110298(struct Timer *);
extern void func_00110080(unsigned long long);
int func_001109A0(int handle) {
    struct Timer *timer = (struct Timer *)(((unsigned)handle >> 10) << 6);
    unsigned flags;
    unsigned long long now;
    if (handle < 0 || (handle & 0x3FF) != timer->id) return 0x80008002;
    if (D_00372998.current == handle) return 0x80000010;
    if (!(timer->flags & 1)) return 0;
    now = func_00110578();
    flags = timer->flags;
    timer->elapsed += now - timer->started;
    timer->flags = flags & ~1U;
    if (flags & 2) {
        func_00110298(timer);
        func_00110080(now);
    }
    return 1;
}
