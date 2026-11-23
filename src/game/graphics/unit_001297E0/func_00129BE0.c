/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern char Pes6Camera_MatricesDirty[];
extern char D_003FB3B0[];
void Pes6Camera_UpdateMatrices(void);

void *func_00129BE0(void) {
    if (Pes6Camera_MatricesDirty[0] != 0) {
        Pes6Camera_UpdateMatrices();
    }
    return D_003FB3B0;
}
