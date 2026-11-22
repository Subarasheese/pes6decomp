/* compiler: mwcc-3.0.1b210 */
typedef struct { int first, second, third; } Entry;
typedef struct { int first, second; } Pair;
typedef union { Entry entry[6]; Pair pair[9]; } Table;

extern const Table D_00B32D10;
extern int func_00B1E100(void);
extern void func_001BC300(void);
extern int func_001BC3D0(int, int, int, int);

void func_00B1EAB0(void) {
    Table table;
    const Pair *source = D_00B32D10.pair;
    Pair *destination = table.pair;
    int remaining = 9;
    unsigned int i;

    do {
        destination->first = source->first;
        destination->second = source->second;
        source++;
        destination++;
    } while (--remaining > 0);
    if (!func_00B1E100()) {
        return;
    }
    func_001BC300();
    for (i = 0; i < 6; i++) {
        func_001BC3D0(0, table.entry[i].first, table.entry[i].second, table.entry[i].third);
    }
}
