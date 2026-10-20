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
extern struct Entry *D_003729B8;
extern unsigned int D_003729BC;
extern int func_0010F420(void);
extern int func_0010F470(void);
extern void *func_001C48E8(void *, int, unsigned int);
struct Entry *func_00111418(struct Entry *table, unsigned int count) {
    int interrupts = func_0010F420();
    struct Entry *previous = D_003729B8;
    D_003729B8 = table;
    D_003729BC = count;
    func_001C48E8(table, 0, count * sizeof(struct Entry));
    if (interrupts) func_0010F470();
    return previous;
}
