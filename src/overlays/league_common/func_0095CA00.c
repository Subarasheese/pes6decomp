/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern int Pes6SaveData_IsUnavailable(void);
extern char D_00A77EF0[];

M2C_UNK *func_0095CA00(void) {
    if (Pes6SaveData_IsUnavailable() == 1) {
        return NULL;
    }
    return ((void *)D_00A77EF0);
}
