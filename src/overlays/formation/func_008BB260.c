/* compiler: mwcc-3.0.1b151 */
#include "types.h"

typedef struct {
    s16 values[4];
} FormationEntry;
extern FormationEntry D_008EBC50[];

void func_008BB260(FormationEntry *dst, s32 index) { *dst = D_008EBC50[index]; }
