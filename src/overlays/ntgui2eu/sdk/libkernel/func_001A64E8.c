/* compiler: ee-gcc-2.9-G0 */
/* Sony SDK / C runtime code shared with GT4 (same SDK release); source ported
 * from the GT4 decompilation (MIT, see THIRD_PARTY.md). */
/* Allocate an alarm record using the timer primitives without IRQ wrapping.
 * Roll back the record on timer-allocation failure. Handle encoding combines
 * the record address with the timer generation bits; names are provisional. */
/* The dispatcher forwards four registers, including two 64-bit timer values.
 * Their precise meaning and the original callback typedef remain provisional. */
typedef unsigned long long (*TimerCallback)(int, unsigned long long,
    unsigned long long, void *);
struct Alarm {
    struct Alarm *next;
    volatile int timer;
    TimerCallback callback;
    void *argument;
};
extern struct Alarm *volatile D_012073C0;
static inline struct Alarm *take_record(void) {
    struct Alarm *record=D_012073C0;
    if(record) D_012073C0=record->next;
    return record;
}
extern int func_001A5950(void);
extern int func_001A5FE8(int, unsigned long long, TimerCallback, void *);
extern unsigned long long func_001A6358(int, unsigned long long, unsigned long long, void *);
extern int func_001A5BA8(int);
int func_001A64E8(unsigned long long delay, TimerCallback callback, void *argument) {
    struct Alarm *alarm;
    int timer;
    if(!callback) return 0x80000016;
    alarm=take_record();
    if(!alarm) {
        return 0x80008005;
    }
    timer=func_001A5950();
    if(timer<0) {
        struct Alarm *previous=D_012073C0;
        D_012073C0=alarm;
        alarm->next=previous;
        alarm->timer=0;
        return timer;
    }
    alarm->callback=callback;
    alarm->argument=argument;
    alarm->timer=timer;
    func_001A5FE8(timer,delay,func_001A6358,alarm);
    func_001A5BA8(timer);
    return ((unsigned)alarm<<4)|(timer&0xFE)|1;
}
