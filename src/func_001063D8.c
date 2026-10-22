/* compiler: ee-gcc-2.9-G0 */
/* Shared Sony SDK/runtime code; source ported from the GT4 decompilation (same SDK). */
typedef struct {
    int count, max_count, initial_count, waiting_threads;
    unsigned int attributes;
    const char *option;
} SemaParameters;
extern const char D_003C3958[];
extern int func_00105360(SemaParameters *);
extern int func_00105370(int);
extern int WaitSema(int);
extern unsigned long func_00110F00(unsigned int, unsigned int);
extern int func_001110B0(unsigned long, int (*)(int, int, int, int), int);
extern int func_00106618(int, int, int, int);

/* Delay the current thread using an alarm that signals a temporary semaphore.
 * No alarm can wake the thread when CPU interrupts are disabled. */
int func_001063D8(unsigned int microseconds)
{
    unsigned int status;
    SemaParameters semaphore;
    int semaphore_id, alarm_id;
    __asm__ volatile("mfc0 %0, $12" : "=r"(status));
    if (!(status & 0x10000))
        return (int)0x80008008U;
    semaphore.max_count = 1;
    semaphore.option = D_003C3958;
    semaphore.initial_count = 0;
    semaphore_id = func_00105360(&semaphore);
    if (semaphore_id < 0)
        return (int)0x80008003U;
    alarm_id = func_001110B0(func_00110F00(0, microseconds),
                           func_00106618, semaphore_id);
    if (alarm_id < 0) {
        func_00105370(semaphore_id);
        return alarm_id;
    }
    WaitSema(semaphore_id);
    func_00105370(semaphore_id);
    return 0;
}
