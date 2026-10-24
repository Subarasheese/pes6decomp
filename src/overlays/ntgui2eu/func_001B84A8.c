/* compiler: ee-gcc-2.96 */
#include "types.h"

/* Cross-match: vetusmagnus/rac3-uya-decomp, src/boot_elf/core/116F80.c, func_0011A4A0.
 * Original repository: vetusmagnus/rac3-uya-decomp at fc118a0b7442665a2b181055dc352ce5d117c41b.
 * See config/cross_project_matches.json for provenance. */
typedef struct N_11A4A0 { struct N_11A4A0 *next; s32 idx; } N_11A4A0;
typedef struct { u8 pad[0x4C]; N_11A4A0 **tab; } S_11A4A0;
void func_001B84A8(S_11A4A0 *p, N_11A4A0 *n) {
    if (n != 0) {
        N_11A4A0 **f = p->tab;
        n->next = f[n->idx];
        f[n->idx] = n;
    }
}
