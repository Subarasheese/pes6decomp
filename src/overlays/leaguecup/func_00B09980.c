/* compiler: mwcc-3.0.1b210 */
typedef struct { int first, second, third; } Entry;
typedef union { Entry entry[5]; int words[15]; } Table;

extern const Table D_00B326B0;
extern int func_00B0A9F0(void);
extern void func_001BC300(void);
extern void func_001BC3D0(int, int, int, int);

void func_00B09980(void) {
    Table table;
    const int *source = D_00B326B0.words;
    int *destination = table.words;
    int remaining = 15;
    unsigned int i;

    do {
        *destination++ = *source++;
    } while (--remaining > 0);
    if (!func_00B0A9F0()) {
        return;
    }
    func_001BC300();
    for (i = 0; i < 5; i++) {
        func_001BC3D0(0, table.entry[i].first, table.entry[i].second, table.entry[i].third);
    }
}
