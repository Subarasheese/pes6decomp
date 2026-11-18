/* compiler: mwcc-3.0.1b210 */
typedef struct { int first, second, third; } Entry;
typedef union { Entry entry[7]; int words[21]; } Table;

extern const Table D_009C08F0;
extern int func_00991950(void);
extern void func_001BC300(void);
extern void func_001BC3D0(int, int, int, int);

void func_009918B0(void) {
    Table table;
    const int *source = D_009C08F0.words;
    int *destination = table.words;
    int remaining = 21;
    unsigned int i;

    do {
        *destination++ = *source++;
    } while (--remaining > 0);
    if (!func_00991950()) {
        return;
    }
    func_001BC300();
    for (i = 0; i < 7; i++) {
        func_001BC3D0(0, table.entry[i].first, table.entry[i].second, table.entry[i].third);
    }
}
