/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    s32 a;
    s32 b;
} Pair;

extern Pair Pes6HeapZone_Ranges[];

void Pes6HeapZone_SetRange(s8 index, s32 a, s32 b) {
    Pes6HeapZone_Ranges[index].a = a;
    Pes6HeapZone_Ranges[index].b = b;
}
