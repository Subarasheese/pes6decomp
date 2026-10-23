/* compiler: mwcc-3.0.1b210 */
extern char D_00510FD0[];
extern char D_005EFDF8[];
extern void *memcpy(void *, const void *, unsigned int);

void func_0030CE30(int table_index, int record_index, const unsigned char *source) {
    if (*(int *)D_00510FD0 == 4) {
        unsigned char *table = ((unsigned char **)D_005EFDF8)[table_index];
        memcpy(table + record_index * 0x9C + 4, source + 4, 0x9C);
    }
}
