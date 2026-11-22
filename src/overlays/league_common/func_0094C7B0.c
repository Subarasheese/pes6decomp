/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 *Pes6SaveData_Current;

s32 func_0094C7B0(void) {
    if (Pes6SaveData_Current != NULL) {
        return *Pes6SaveData_Current;
    }
    return 0;
}
