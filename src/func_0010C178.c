/* compiler: ee-gcc-2.9-G0 */
/* Sony SDK / C runtime code shared with GT4 (same SDK release); source ported
 * from the GT4 decompilation (MIT, see THIRD_PARTY.md). */
/* Submit operation 11 for a live descriptor and wait for its completion word.
 * Partial packet/descriptor layouts are provisional. The original submission
 * error path waits and unlocks without deleting the semaphore. */
struct Entry { int handle, occupied, unknown8, unknownC; };
struct Semaphore { int current, maximum, initial, waiters; unsigned attributes; const char *tag; };
struct Request { int semaphore; int *result; int result_size, handle; void *output; char unknown14[12]; };
extern struct Request D_003EDD00;
extern int D_0037138C, D_003EE940;
extern char D_003EF400;
extern const char D_003C3DA0[];
extern struct Entry *func_00109C40(unsigned);
extern int func_0010A0C0(int);
extern void func_0010A0F0(void);
extern int func_00105360(struct Semaphore *);
extern int func_00105370(int);
extern int WaitSema(int);
extern unsigned func_00109B50(void *, int, int, void *, int, void *, int,
    void (*)(void *), void *, int);
int func_0010C178(unsigned descriptor, void *output) {
    struct Semaphore parameters;
    int result, semaphore, accepted, handle;
    struct Request *request=&D_003EDD00;
    struct Entry *entry=func_00109C40(descriptor);
    func_0010A0C0(11);
    if(!D_0037138C || !entry || !entry->occupied) {
        func_0010A0F0();return -9;
    }
    handle=entry->handle;
    request->handle=handle;
    request->output=output;
    parameters.maximum=1;
    parameters.tag=D_003C3DA0;
    parameters.initial=0;
    semaphore=func_00105360(&parameters);
    request->semaphore=semaphore;
    request->result=&result;
    request->result_size=4;
    if((int)func_00109B50(&D_003EF400,11,0,request,32,&D_003EE940,4,0,0,0)<0) {
        WaitSema(semaphore);
        func_0010A0F0();return -11;
    }
    accepted=*(int *)((unsigned)&D_003EE940|0x20000000);
    func_0010A0F0();
    if(!accepted) {func_00105370(semaphore);return -11;}
    WaitSema(semaphore);
    func_00105370(semaphore);
    return result;
}
