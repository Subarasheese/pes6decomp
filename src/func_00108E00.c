/* compiler: ee-gcc-2.9-G0 */
/* Sony SDK / C runtime code shared with GT4 (same SDK release); source ported
 * from the GT4 decompilation (MIT, see THIRD_PARTY.md). */
/* Provisional views of the SIF transaction and the caller's completion record. */
struct Completion;
struct Request {
    int unknown0[5];
    struct Request *self;
    int token;
    struct Completion *completion;
    int argument0, argument1, argument2;
};
struct Completion { struct Request *request; int token; int semaphore; };
struct Semaphore { int current_count, maximum_count, initial_count, waiters; unsigned attributes; const char *tag; };
extern char D_003EDC80;
extern const char D_003C3BA8;
extern struct Request *func_00108AE8(void *);
extern void func_00108B90(struct Request *);
extern int func_00105360(struct Semaphore *);
extern int func_00105370(int);
extern int func_001053A0(int);
extern int func_001086A8(int, struct Request *, int, int, int, int);
int func_00108E00(struct Completion *completion, int arg0, int arg1, int arg2, int flags) {
    struct Semaphore semaphore;
    struct Request *request=func_00108AE8(&D_003EDC80);
    if(!request) return -1;
    completion->request=request;
    completion->token=request->token;
    request->argument0=arg0;
    request->argument1=arg1;
    request->argument2=arg2;
    request->self=request;
    request->completion=completion;
    if(!(flags&1)) {
        semaphore.maximum_count=1;
        semaphore.tag=&D_003C3BA8;
        semaphore.initial_count=0;
        completion->semaphore=func_00105360(&semaphore);
        if(completion->semaphore<0) {func_00108B90(request); return -3;}
        if(!func_001086A8(0x8000000C,request,64,0,0,0)) {
            func_00108B90(request);
            func_00105370(completion->semaphore);
            return -2;
        }
        func_001053A0(completion->semaphore);
        func_00105370(completion->semaphore);
        return 0;
    } else {
        completion->semaphore=-1;
        if(!func_001086A8(0x8000000C,request,64,0,0,0)) {
            func_00108B90(request);return -2;
        }
        return 0;
    }
}
