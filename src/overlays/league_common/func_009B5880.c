/* compiler: mwcc-3.0.1b210 */
typedef struct { int first, second, third; } Entry;
typedef union { Entry entry[9]; int words[27]; } Table;

extern const Table D_009C1100;
extern int func_009B7F90(void);
extern void func_001BC300(void);
extern void func_001BC3D0(int, int, int, int);

void func_009B5880(void) {
    Table table;
    const int *source = D_009C1100.words;
    int *destination = table.words;
    int remaining = 27;
    unsigned int i;

    do {
        *destination++ = *source++;
    } while (--remaining > 0);
    if (!func_009B7F90()) {
        return;
    }
    func_001BC300();
    for (i = 0; i < 9; i++) {
        func_001BC3D0(0, table.entry[i].first, table.entry[i].second, table.entry[i].third);
    }
}
