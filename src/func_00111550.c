/* compiler: ee-gcc-2.9-G0 */
/* Sony SDK / C runtime code shared with GT4 (same SDK release); source ported
 * from the GT4 decompilation (MIT, see THIRD_PARTY.md). */
typedef struct {
    int m0;
    int pad[3];
} Entry_005B9448;

extern Entry_005B9448 D_003F2FC8[];
extern Entry_005B9448 *D_003729B8;
extern unsigned int D_003729BC;

int func_00111550(int id) {
    Entry_005B9448 *table;
    unsigned int count;
    if (id < 0) {
        id &= 0x7FFFFFFF;
        table = D_003F2FC8;
        count = 0x20;
    } else {
        table = D_003729B8;
        count = D_003729BC;
    }
    if ((unsigned int)id >= count) {
        return -0x69;
    }
    table[id].m0 = 0;
    return 0;
}
