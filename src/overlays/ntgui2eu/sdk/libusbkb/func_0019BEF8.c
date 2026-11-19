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
extern int D_005CAB50, D_01200F70;
extern int D_01200F78[2];
extern char D_01200B70[], D_00609F70[];
extern const char D_00600230[];
extern void func_0019BE20(void);
extern int func_0019B120(SemaParameters *);
extern int func_0019B130(int);
extern int func_0019AF20(ThreadParameters *);
extern int func_0019C260(int, void *);
extern int func_0019B010(void);
extern int func_0019AFB0(int, int);

/* Start the kernel's top worker once, releasing its semaphore if thread
 * creation fails. The two-word start message is zero-initialized. */
int func_0019BEF8(void)
{
    ThreadParameters thread;
    SemaParameters semaphore;
    if (D_005CAB50 > 0)
        return -1;
    semaphore.max_count = 255;
    semaphore.initial_count = 0;
    semaphore.option = D_00600230;
    D_01200F70 = func_0019B120(&semaphore);
    if (D_01200F70 < 0)
        return -1;
    thread.entry = func_0019BE20;
    thread.stack = D_01200B70;
    thread.stack_size = 0x400;
    thread.global_pointer = D_00609F70;
    thread.option = D_00600230;
    thread.priority = 0;
    D_005CAB50 = func_0019AF20(&thread);
    if (D_005CAB50 < 0) {
        func_0019B130(D_01200F70);
        return -1;
    }
    D_01200F78[0] = 0;
    D_01200F78[1] = 0;
    func_0019C260(D_005CAB50, D_01200F78);
    func_0019AFB0(func_0019B010(), 1);
    return D_005CAB50;
}
