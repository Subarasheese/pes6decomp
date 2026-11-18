/* compiler: ee-gcc-2.9-G0 */
/* Sony SDK / C runtime code shared with GT4 (same SDK release); source ported
 * from the GT4 decompilation (MIT, see THIRD_PARTY.md). */
/* Submit operation 11 for a live descriptor and wait for its completion word.
 * Partial packet/descriptor layouts are provisional. The original submission
 * error path waits and unlocks without deleting the semaphore. */
struct Entry { int handle, occupied, unknown8, unknownC; };
struct Semaphore { int current, maximum, initial, waiters; unsigned attributes; const char *tag; };
struct Request { int semaphore; int *result; int result_size, handle; void *output; char unknown14[12]; };
extern struct Request D_01203340;
extern int D_005CABE4, D_01203F80;
extern char D_01204A40;
extern const char D_00600690[];
extern struct Entry *func_0019F7C8(unsigned);
extern int func_0019FC48(int);
extern void func_0019FC78(void);
extern int func_0019B120(struct Semaphore *);
extern int func_0019B130(int);
extern int func_0019B160(int);
extern unsigned func_0019F6D8(void *, int, int, void *, int, void *, int,
    void (*)(void *), void *, int);
int func_001A1D00(unsigned descriptor, void *output) {
    struct Semaphore parameters;
    int result, semaphore, accepted, handle;
    struct Request *request=&D_01203340;
    struct Entry *entry=func_0019F7C8(descriptor);
    func_0019FC48(11);
    if(!D_005CABE4 || !entry || !entry->occupied) {
        func_0019FC78();return -9;
    }
    handle=entry->handle;
    request->handle=handle;
    request->output=output;
    parameters.maximum=1;
    parameters.tag=D_00600690;
    parameters.initial=0;
    semaphore=func_0019B120(&parameters);
    request->semaphore=semaphore;
    request->result=&result;
    request->result_size=4;
    if((int)func_0019F6D8(&D_01204A40,11,0,request,32,&D_01203F80,4,0,0,0)<0) {
        func_0019B160(semaphore);
        func_0019FC78();return -11;
    }
    accepted=*(int *)((unsigned)&D_01203F80|0x20000000);
    func_0019FC78();
    if(!accepted) {func_0019B130(semaphore);return -11;}
    func_0019B160(semaphore);
    func_0019B130(semaphore);
    return result;
}
