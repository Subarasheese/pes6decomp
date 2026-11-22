/* compiler: ee-gcc-2.96-G0 */
/* crashbashash/DW4_Decomp, src/cri/cricfg.c (CRICFG_Init). See THIRD_PARTY.md. */

typedef unsigned int size_t;
extern void *memset(void *, int, size_t);
typedef struct CriCfgEntry {
    char name[12];
    int value;
} CriCfgEntry;
extern char D_003C9258[];
extern char *volatile D_0050E330;
extern CriCfgEntry *D_0050E334;
extern int D_0050E338;
extern char D_0050E340[256];

void func_0016A2D8(void) {
    int pad;
    D_0050E330 = D_003C9258;
    memset(D_0050E340, 0, sizeof(D_0050E340));
    D_0050E334 = (CriCfgEntry *)((((int)D_0050E340) + 3) & (~3));
    pad = ((char *)D_0050E334) - D_0050E340;
    D_0050E338 = (((int)(sizeof(D_0050E340))) - pad) / ((int)(sizeof(CriCfgEntry)));
}
