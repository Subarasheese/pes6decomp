/* compiler: ee-gcc-2.9-G0 */
/* Shared Sony SDK/runtime code; source ported from the GT4 decompilation (same SDK). */
/* Allocate a file-descriptor table slot, open the backend handle, and publish
 * its index under the table semaphore. Field names are provisional. */
struct Entry { int handle, occupied, unknown8, unknownC; };
extern int D_005CABE4, D_005CABF0;
extern struct Entry D_01204840[];
extern int func_0019FC48(int);
extern void func_0019FD70(void);
extern void func_0019FC78(void);
extern struct Entry *func_0019F650(void);
extern int func_001A1358(const char *, int);
extern int func_0019B160(int);
extern int func_0019B140(int);
int func_001A1AD0(const char *name) {
    int result;
    struct Entry *entry;
    func_0019FC48(9);
    if(!D_005CABE4) func_0019FD70();
    func_0019FC78();
    entry=func_0019F650();
    if(!entry) return -19;
    result=func_001A1358(name,9);
    if(result<0) {
        func_0019B160(D_005CABF0);
        entry->occupied=0;
        func_0019B140(D_005CABF0);
        return result;
    } else {
        func_0019B160(D_005CABF0);
        entry->handle=result;
        result=entry-D_01204840;
        func_0019B140(D_005CABF0);
        return result;
    }
}
