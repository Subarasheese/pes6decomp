/* compiler: ee-gcc-2.9-G0 */
/* Sony SDK / C runtime code shared with GT4 (same SDK release); source ported
 * from the GT4 decompilation (MIT, see THIRD_PARTY.md). */
/* Count live descriptors while owning the table semaphore. The table has
 * 32 sixteen-byte records; the backend handle is distinct from occupancy. */
struct Entry { int handle, occupied, unknown8, unknownC; };
extern struct Entry D_01204840[32];
extern int D_005CABF0;
extern void func_0019F560(void);
extern int func_0019B160(int);
extern int func_0019B140(int);
int func_0019F5D0(void) {
    struct Entry *entry;
    int count = 0;
    func_0019F560();
    func_0019B160(D_005CABF0);
    for (entry = D_01204840; entry < D_01204840 + 32; ++entry)
        if (entry->occupied) ++count;
    func_0019B140(D_005CABF0);
    return count;
}
