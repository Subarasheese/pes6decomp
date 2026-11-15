/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void func_00264790(void *, u8);
extern void Pes6MatchContext_SetByteC08(int);
M2C_UNK func_00B29E80(M2C_UNK);                     /* extern */

void func_00CEE690(void *arg0) {
    Pes6MatchContext_SetByteC08(6);
    func_00B29E80(1);
    func_00264790(arg0, 5U);
}
