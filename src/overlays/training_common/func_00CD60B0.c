/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void Pes6World_SetActive(int);
M2C_UNK func_0017CED0();                            /* extern */

s32 func_00CD60B0(void) {
    Pes6World_SetActive(0);
    func_0017CED0();
    return 1;
}
