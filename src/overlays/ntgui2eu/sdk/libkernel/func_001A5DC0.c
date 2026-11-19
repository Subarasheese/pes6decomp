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
extern volatile struct TimerState D_005CBB98;
extern int func_001A4728(void);
extern int func_001A4778(void);
extern unsigned long long func_001A5880(void);
unsigned long long func_001A5DC0(int handle, unsigned long long replacement) {
    struct Timer *timer = (struct Timer *)(((unsigned)handle >> 10) << 6);
    int interrupts = func_001A4728();
    unsigned long long previous;
    if (handle < 0 || (handle & 0x3FF) != timer->id ||
        D_005CBB98.current == handle) {
        if (interrupts) func_001A4778();
        return -1;
    }
    previous = timer->elapsed;
    if (timer->flags & 1) {
        unsigned long long now = func_001A5880();
        previous += now - timer->started;
        timer->started = now;
        timer->elapsed = replacement;
    } else {
        timer->elapsed = replacement;
    }
    if (interrupts) func_001A4778();
    return previous;
}
