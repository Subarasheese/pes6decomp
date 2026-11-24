/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_highlights.h"

extern HighlightClip *D_00CBD370[];
extern HighlightClip *D_00CBD2F0[];
extern void *D_00CBD2D0[];
extern u8 D_00CBD308[];
extern void Pes6Heap_Free(void *);

void func_00BC5BE0(void) {
    u16 i;
    for (i = 0; i < HIGHLIGHTS; i++) {
        if (D_00CBD370[i]) {
            if (!D_00CBD308[i] && D_00CBD2F0[i])
                Pes6Heap_Free(D_00CBD2F0[i]);
            D_00CBD308[i] = 0;
            D_00CBD370[i] = 0;
            D_00CBD2F0[i] = 0;
        }
    }
    for (i = 0; i < HIGHLIGHTS; i++) {
        if (D_00CBD2D0[i])
            Pes6Heap_Free(D_00CBD2D0[i]);
        D_00CBD2D0[i] = 0;
    }
}
