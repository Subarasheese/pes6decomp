/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"


extern void *Pes6SaveData_Current;

void func_0094C790(s32 arg0) {
    if (Pes6SaveData_Current != NULL) {
        M2C_FIELD(Pes6SaveData_Current, s32 *, 4) = arg0;
    }
}
