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
extern struct Alarm *volatile D_003F2FC0;
extern int DIntr(void);
extern int EIntr(void);
extern int func_001107A0(int);
int func_001112D0(int handle) {
    struct Alarm *alarm = (struct Alarm *)(((unsigned)handle >> 8) << 4);
    int interrupts = DIntr();
    if (handle < 0 || ((handle ^ alarm->timer) & 255)) {
        if (interrupts) EIntr();
        return 0x80008002;
    }
    func_001107A0(alarm->timer);
    {
        struct Alarm *previous = D_003F2FC0;
        D_003F2FC0 = alarm;
        alarm->next = previous;
        alarm->timer = 0;
    }
    if (interrupts) EIntr();
    return 0;
}
