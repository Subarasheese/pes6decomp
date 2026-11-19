/* compiler: mwcc-3.0.1b210 */
typedef struct { int first, second, third; } Entry;
typedef union { Entry entry[19]; int words[57]; } Table;

extern const Table D_00B86270;
extern int func_00B71C80(void);
extern void func_001BC300(void);
extern void func_001BC3D0(int, int, int, int);

void func_00B708A0(void) {
    Table table;
    const int *source = D_00B86270.words;
    int *destination = table.words;
    int remaining = 57;
    unsigned int i;

    do {
        *destination++ = *source++;
    } while (--remaining > 0);
    if (!func_00B71C80()) {
        return;
    }
    func_001BC300();
    for (i = 0; i < 19; i++) {
        func_001BC3D0(0, table.entry[i].first, table.entry[i].second, table.entry[i].third);
    }
}
