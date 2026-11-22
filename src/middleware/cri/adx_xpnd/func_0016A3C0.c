/* compiler: ee-gcc-2.96-G0 */
/* crashbashash/DW4_Decomp, src/cri/cricfg.c (cricfg_SearchEntry). See THIRD_PARTY.md. */

typedef unsigned int size_t;
extern int func_001C83D8(const char *, const char *, size_t);
typedef struct CriCfgEntry {
    char name[12];
    int value;
} CriCfgEntry;
extern CriCfgEntry *D_0050E334;
extern int D_0050E338;

CriCfgEntry *func_0016A3C0(const char *name) {
    CriCfgEntry *entry;
    int i;
    if (name[0] == 0) {
        return 0;
    }
    entry = D_0050E334;
    for (i = 0; i < D_0050E338; i++, entry++) {
        if (func_001C83D8(entry->name, name, sizeof(entry->name)) == 0) {
            return entry;
        }
    }

    return 0;
}
