/* compiler: ee-gcc-2.9-G0 */
/* Sony SDK / C runtime code shared with GT4 (same SDK release); source ported
 * from the GT4 decompilation (MIT, see THIRD_PARTY.md). */
/* Count live descriptors while owning the table semaphore. The table has
 * 32 sixteen-byte records; the backend handle is distinct from occupancy. */
struct Entry { int handle, occupied, unknown8, unknownC; };
extern struct Entry D_003EF200[32];
extern int D_00371398;
extern void func_001099D8(void);
extern int WaitSema(int);
extern int func_00105380(int);
int func_00109A48(void) {
    struct Entry *entry;
    int count = 0;
    func_001099D8();
    WaitSema(D_00371398);
    for (entry = D_003EF200; entry < D_003EF200 + 32; ++entry)
        if (entry->occupied) ++count;
    func_00105380(D_00371398);
    return count;
}
