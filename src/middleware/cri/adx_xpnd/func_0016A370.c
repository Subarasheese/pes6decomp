/* compiler: ee-gcc-2.96-G0 */
/* crashbashash/DW4_Decomp, src/cri/cricfg.c (cricfg_SearchFreeEntry). See THIRD_PARTY.md. */

typedef struct CriCfgEntry {
    char name[12];
    int value;
} CriCfgEntry;
extern CriCfgEntry *D_0050E334;
extern int D_0050E338;

CriCfgEntry *func_0016A370(void) {
    CriCfgEntry *entry = D_0050E334;
    int i;
    for (i = 0; i < D_0050E338; i++, entry++) {
        if (entry->name[0] == 0) {
            return entry;
        }
    }

    return 0;
}
