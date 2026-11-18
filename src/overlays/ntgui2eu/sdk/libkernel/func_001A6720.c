/* compiler: ee-gcc-2.9-G0 */
/* Sony SDK / C runtime code shared with GT4 (same SDK release); source ported
 * from the GT4 decompilation (MIT, see THIRD_PARTY.md). */
/* Replace the caller-owned 16-byte entry table under interrupt exclusion.
 * The previous table is returned to its owner; the replacement is cleared.
 * Callback register types and the final word remain provisional. */
struct Entry {
    void (*callback)(int, void *);
    void *argument;
    void *global_pointer;
    unsigned unknownC;
};
extern struct Entry *D_005CBBB8;
extern unsigned int D_005CBBBC;
extern int func_001A4728(void);
extern int func_001A4778(void);
extern void *func_001AE7D8(void *, int, unsigned int);
struct Entry *func_001A6720(struct Entry *table, unsigned int count) {
    int interrupts = func_001A4728();
    struct Entry *previous = D_005CBBB8;
    D_005CBBB8 = table;
    D_005CBBBC = count;
    func_001AE7D8(table, 0, count * sizeof(struct Entry));
    if (interrupts) func_001A4778();
    return previous;
}
