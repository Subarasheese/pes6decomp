/* compiler: mwcc-3.0.1b210 */
typedef struct { int first, second, third; } Entry;
typedef struct { int first, second; } Pair;
typedef union { Entry entry[8]; Pair pair[12]; } Table;

extern const Table D_009C10A0;
extern int func_009A8D80(void);
extern void func_001BC300(void);
extern int func_001BC3D0(int, int, int, int);

void func_009B2960(void) {
    Table table;
    const Pair *source = D_009C10A0.pair;
    Pair *destination = table.pair;
    int remaining = 12;
    unsigned int i;

    do {
        destination->first = source->first;
        destination->second = source->second;
        source++;
        destination++;
    } while (--remaining > 0);
    if (!func_009A8D80()) {
        return;
    }
    func_001BC300();
    for (i = 0; i < 8; i++) {
        func_001BC3D0(0, table.entry[i].first, table.entry[i].second, table.entry[i].third);
    }
}
