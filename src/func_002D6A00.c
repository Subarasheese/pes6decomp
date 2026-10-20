/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_001FC790(s32);                         /* extern */
s32 func_001FC800(M2C_UNK);                         /* extern */
extern char D_005E5E10[];

void func_002D6A00(void) {
    func_001FC790(func_001FC800(8));
    (*(s32 *)D_005E5E10) = 0;
}
