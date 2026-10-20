/* compiler: ee-gcc-2.9-G0 */
/* Sony SDK / C runtime code shared with GT4 (same SDK release); source ported
 * from the GT4 decompilation (MIT, see THIRD_PARTY.md). */
/* SDK parameter layouts inferred from the fields passed to CreateSema and
 * CreateThread. Fields not initialized by the original are left untouched. */
typedef struct {
    int count, max_count, initial_count, waiting_threads;
    unsigned int attributes;
    const char *option;
} SemaParameters;
typedef struct {
    int status;
    void (*entry)(void);
    void *stack;
    int stack_size;
    void *global_pointer;
    int priority, initial_priority;
    unsigned int attributes;
    const char *option;
} ThreadParameters;
extern int D_003712E8, D_003EB8E0;
extern int D_003EB8E8[2];
extern char D_003EB4E0[], _gp[];
extern const char D_003C3940[];
extern void func_00106060(void);
extern int func_00105360(SemaParameters *);
extern int func_00105370(int);
extern int func_00105160(ThreadParameters *);
extern int func_001064A0(int, void *);
extern int func_00105250(void);
extern int func_001051F0(int, int);

/* Start the kernel's top worker once, releasing its semaphore if thread
 * creation fails. The two-word start message is zero-initialized. */
int func_00106138(void)
{
    ThreadParameters thread;
    SemaParameters semaphore;
    if (D_003712E8 > 0)
        return -1;
    semaphore.max_count = 255;
    semaphore.initial_count = 0;
    semaphore.option = D_003C3940;
    D_003EB8E0 = func_00105360(&semaphore);
    if (D_003EB8E0 < 0)
        return -1;
    thread.entry = func_00106060;
    thread.stack = D_003EB4E0;
    thread.stack_size = 0x400;
    thread.global_pointer = _gp;
    thread.option = D_003C3940;
    thread.priority = 0;
    D_003712E8 = func_00105160(&thread);
    if (D_003712E8 < 0) {
        func_00105370(D_003EB8E0);
        return -1;
    }
    D_003EB8E8[0] = 0;
    D_003EB8E8[1] = 0;
    func_001064A0(D_003712E8, D_003EB8E8);
    func_001051F0(func_00105250(), 1);
    return D_003712E8;
}
