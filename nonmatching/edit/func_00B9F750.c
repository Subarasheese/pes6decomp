/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00B9C490();                            /* extern */
M2C_UNK func_00B9F590(M2C_UNK);                     /* extern */
M2C_UNK func_00BF7460(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
extern char D_00CE3680[];
extern char D_00CE3687[];

void func_00B9F750(void) {
    func_00B9C490();
    (*(s8 *)D_00CE3680) = 1;
    (*(s8 *)D_00CE3687) = 0;
    func_00B9F590(1);
    func_00BF7460(0, 1, 1, 0, 1);
}
