/* compiler: mwcc-3.0.1b210 */
typedef struct { int first, second, third; } Entry;
typedef union { Entry entry[5]; int words[15]; } Table;

extern const Table D_00B86460;
extern int func_00B77020(void);
extern void func_001BC300(void);
extern void func_001BC3D0(int, int, int, int);

void func_00B73B40(void) {
    Table table;
    const int *source = D_00B86460.words;
    int *destination = table.words;
    int remaining = 15;
    unsigned int i;

    do {
        *destination++ = *source++;
    } while (--remaining > 0);
    if (!func_00B77020()) {
        return;
    }
    func_001BC300();
    for (i = 0; i < 5; i++) {
        func_001BC3D0(0, table.entry[i].first, table.entry[i].second, table.entry[i].third);
    }
}
