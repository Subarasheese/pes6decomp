/* compiler: ee-gcc-2.9-G0 */
/* Sony SDK / C runtime code shared with GT4 (same SDK release); source ported
 * from the GT4 decompilation (MIT, see THIRD_PARTY.md). */
/* Validate the alarm handle's generation, release its timer and return the
 * record to the shared pool under interrupt exclusion. Layout provisional. */
typedef unsigned long long (*TimerCallback)(int, unsigned long long,
    unsigned long long, void *);
struct Alarm {
    struct Alarm *next;
    volatile int timer;
    TimerCallback callback;
    void *argument;
};
extern struct Alarm *volatile D_012073C0;
extern int func_001A4728(void);
extern int func_001A4778(void);
extern int func_001A5AA8(int);
int func_001A65D8(int handle) {
    struct Alarm *alarm = (struct Alarm *)(((unsigned)handle >> 8) << 4);
    int interrupts = func_001A4728();
    if (handle < 0 || ((handle ^ alarm->timer) & 255)) {
        if (interrupts) func_001A4778();
        return 0x80008002;
    }
    func_001A5AA8(alarm->timer);
    {
        struct Alarm *previous = D_012073C0;
        D_012073C0 = alarm;
        alarm->next = previous;
        alarm->timer = 0;
    }
    if (interrupts) func_001A4778();
    return 0;
}
