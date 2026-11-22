/* compiler: mwcc-3.0.1b210 */
typedef struct { int first, second, third; } Entry;
typedef struct { int first, second; } Pair;
typedef union { Entry entry[10]; Pair pair[15]; } Table;

extern const Table D_00B32830;
extern int func_00B0CD50(void);
extern void func_001BC300(void);
extern int func_001BC3D0(int, int, int, int);

void func_00B0EE60(void) {
    Table table;
    const Pair *source = D_00B32830.pair;
    Pair *destination = table.pair;
    int remaining = 15;
    unsigned int i;

    do {
        destination->first = source->first;
        destination->second = source->second;
        source++;
        destination++;
    } while (--remaining > 0);
    if (!func_00B0CD50()) {
        return;
    }
    func_001BC300();
    for (i = 0; i < 10; i++) {
        func_001BC3D0(0, table.entry[i].first, table.entry[i].second, table.entry[i].third);
    }
}
