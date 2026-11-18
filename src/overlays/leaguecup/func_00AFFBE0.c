/* compiler: mwcc-3.0.1b210 */
typedef struct { int first, second, third; } Entry;
typedef union { Entry entry[13]; int words[39]; } Table;

extern const Table D_00B32400;
extern int func_00B035D0(void);
extern void func_001BC300(void);
extern void func_001BC3D0(int, int, int, int);

void func_00AFFBE0(void) {
    Table table;
    const int *source = D_00B32400.words;
    int *destination = table.words;
    int remaining = 39;
    unsigned int i;

    do {
        *destination++ = *source++;
    } while (--remaining > 0);
    if (!func_00B035D0()) {
        return;
    }
    func_001BC300();
    for (i = 0; i < 13; i++) {
        func_001BC3D0(0, table.entry[i].first, table.entry[i].second, table.entry[i].third);
    }
}
