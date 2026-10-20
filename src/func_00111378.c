/* compiler: ee-gcc-2.9-G0 */
/* Sony SDK / C runtime code shared with GT4 (same SDK release); source ported
 * from the GT4 decompilation (MIT, see THIRD_PARTY.md). */
typedef struct Entry {
    struct Entry *next;
    volatile int id;
    int pad[2];
} Entry;
extern int func_00110700(int id);
extern Entry *D_003F2FC0;

int func_00111378(int id)
{
    Entry *e = (Entry *)(((unsigned int)id >> 8) << 4);
    int r;
    if (id < 0 || ((id ^ e->id) & 0xFF) != 0)
        return 0x80008002;
    r = func_00110700(e->id);
    if (r == 0) {
        e->next = D_003F2FC0;
        D_003F2FC0 = e;
        e->id = 0;
    }
    return r;
}
