/* compiler: ee-gcc-2.9-G0 */
/* Sony SDK / C runtime code shared with GT4 (same SDK release); source ported
 * from the GT4 decompilation (MIT, see THIRD_PARTY.md). */
typedef int s32;

struct Item {
    char pad0[0x40];
};

struct Arr {
    char pad0[0x1C];
    struct Item *items;
    s32 count;
};

extern struct Item *func_00108BB0(struct Arr *a, s32 i);

struct Item *func_00108BE0(struct Arr *a, s32 i) {
    if (i < 0 || i >= a->count) {
        return func_00108BB0(a, i);
    }
    return &a->items[i];
}
