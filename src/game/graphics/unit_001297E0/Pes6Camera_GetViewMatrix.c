/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern char Pes6Camera_MatricesDirty[];
extern char Pes6Camera_ViewMatrix[];
void Pes6Camera_UpdateMatrices(void);

void *Pes6Camera_GetViewMatrix(void) {
    if (Pes6Camera_MatricesDirty[0] != 0) {
        Pes6Camera_UpdateMatrices();
    }
    return Pes6Camera_ViewMatrix;
}
