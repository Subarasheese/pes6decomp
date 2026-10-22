/* compiler: ee-gcc-2.9-G0 */
/* Shared Sony SDK/runtime code; source ported from the GT4 decompilation (same SDK). */
/* Allocate a file-descriptor table slot, open the backend handle, and publish
 * its index under the table semaphore. Field names are provisional. */
struct Entry { int handle, occupied, unknown8, unknownC; };
extern int D_0037138C, D_00371398;
extern struct Entry D_003EF200[];
extern int func_0010A0C0(int);
extern void func_0010A1E8(void);
extern void func_0010A0F0(void);
extern struct Entry *func_00109AC8(void);
extern int func_0010B7D0(const char *, int);
extern int WaitSema(int);
extern int func_00105380(int);
int func_0010BF48(const char *name) {
    int result;
    struct Entry *entry;
    func_0010A0C0(9);
    if(!D_0037138C) func_0010A1E8();
    func_0010A0F0();
    entry=func_00109AC8();
    if(!entry) return -19;
    result=func_0010B7D0(name,9);
    if(result<0) {
        WaitSema(D_00371398);
        entry->occupied=0;
        func_00105380(D_00371398);
        return result;
    } else {
        WaitSema(D_00371398);
        entry->handle=result;
        result=entry-D_003EF200;
        func_00105380(D_00371398);
        return result;
    }
}
