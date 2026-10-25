/* compiler: ee-gcc-2.96-G0 */
struct Entry {
    unsigned char pad0[0xC];
    int value;
};

extern void *D_0050E334;
struct Entry *func_0016A3C0(int);

int func_0016A4D0(int key, int *out) {
    struct Entry *entry;

    if (D_0050E334 == 0) {
        return -1;
    }
    entry = func_0016A3C0(key);
    if (entry == 0) {
        return -3;
    }
    *out = entry->value;
    return 0;
}
