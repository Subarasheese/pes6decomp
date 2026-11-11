/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"


extern s32 *Pes6SaveData_Current;

void func_0094C7D0(s32 arg0) {
    if (Pes6SaveData_Current != NULL) {
        *Pes6SaveData_Current = arg0;
    }
}
