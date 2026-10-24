/* compiler: ee-gcc-2.9 */
#include "types.h"

/* Cross-match: vetusmagnus/rac3-uya-decomp, src/boot_elf/core/11FA10.c, func_001200A0.
 * Original repository: vetusmagnus/rac3-uya-decomp at fc118a0b7442665a2b181055dc352ce5d117c41b.
 * See config/cross_project_matches.json for provenance. */
typedef struct { s32 size; s32 count; u8 *rd; u8 *wr; u8 buf[1]; } R_1200A0;
void func_0019C468(R_1200A0 *p) {
    p->count--;
    p->rd++;
    if (p->rd == p->buf + p->size) {
        p->rd = p->buf;
    }
}
