/* compiler: ee-gcc-2.9-G0 */
/* Sony SDK / C runtime code shared with GT4 (same SDK release); source ported
 * from the GT4 decompilation (MIT, see THIRD_PARTY.md). */
/* Allocate an alarm record and a timer handle under interrupt exclusion.
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
extern struct Alarm *volatile D_003F2FC0;
static inline struct Alarm *take_record(void) {
    struct Alarm *record=D_003F2FC0;
    if(record) D_003F2FC0=record->next;
    return record;
}
extern int DIntr(void);
extern int EIntr(void);
extern int func_001106B8(void);
extern int func_00110DD8(int, unsigned long long, TimerCallback, void *);
extern unsigned long long func_00111050(int, unsigned long long, unsigned long long, void *);
extern int func_00110950(int);
int func_001110B0(unsigned long long delay, TimerCallback callback, void *argument) {
    struct Alarm *alarm;
    int interrupts, timer;
    if(!callback) return 0x80000016;
    interrupts=DIntr();
    alarm=take_record();
    if(!alarm) {
        if(interrupts) EIntr();
        return 0x80008005;
    }
    timer=func_001106B8();
    if(timer<0) {
        struct Alarm *previous=D_003F2FC0;
        D_003F2FC0=alarm;
        alarm->next=previous;
        alarm->timer=0;
        if(interrupts) EIntr();
        return timer;
    }
    alarm->callback=callback;
    alarm->argument=argument;
    alarm->timer=timer;
    func_00110DD8(timer,delay,func_00111050,alarm);
    func_00110950(timer);
    if(interrupts) EIntr();
    return ((unsigned)alarm<<4)|(timer&0xFE)|1;
}
