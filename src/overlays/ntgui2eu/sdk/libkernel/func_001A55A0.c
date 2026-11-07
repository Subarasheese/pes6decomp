/* compiler: ee-gcc-2.9 */
#include "types.h"

/* Cross-match: vetusmagnus/rac3-uya-decomp at fc118a0b7442665a2b181055dc352ce5d117c41b.
 * src/boot_elf/core/124988.c, func_00125540.
 * See config/cross_project_matches.json for per-image address mappings. */
typedef struct N_125540 { struct N_125540 *next; struct N_125540 *prev; } N_125540;
extern N_125540 *D_005CBBB0[];
N_125540 *func_001A55A0(N_125540 *p) {
    N_125540 *next = p->next;
    if (p->prev != 0) {
        p->prev->next = next;
    } else {
        D_005CBBB0[0] = next;
    }
    if (next != 0) {
        next->prev = p->prev;
    }
    p->prev = 0;
    return next;
}
