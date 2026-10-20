/* compiler: ee-gcc-2.9-G0 */
/* Sony SDK / C runtime code shared with GT4 (same SDK release); source ported
 * from the GT4 decompilation (MIT, see THIRD_PARTY.md). */
/* Replace a timer's accumulated ticks and return its previous running total.
 * Handle validation and all updates occur under interrupt exclusion.
 * Record/state layouts and names remain provisional. */
struct Timer {
    struct Timer *next;
    unsigned unknown4, id, flags;
    unsigned long long started, elapsed;
};
struct TimerState { char unknown0[0x1C]; int current; };
extern volatile struct TimerState D_00372998;
extern int DIntr(void);
extern int EIntr(void);
extern unsigned long long func_00110578(void);
unsigned long long func_00110AB8(int handle, unsigned long long replacement) {
    struct Timer *timer = (struct Timer *)(((unsigned)handle >> 10) << 6);
    int interrupts = DIntr();
    unsigned long long previous;
    if (handle < 0 || (handle & 0x3FF) != timer->id ||
        D_00372998.current == handle) {
        if (interrupts) EIntr();
        return -1;
    }
    previous = timer->elapsed;
    if (timer->flags & 1) {
        unsigned long long now = func_00110578();
        previous += now - timer->started;
        timer->started = now;
        timer->elapsed = replacement;
    } else {
        timer->elapsed = replacement;
    }
    if (interrupts) EIntr();
    return previous;
}
