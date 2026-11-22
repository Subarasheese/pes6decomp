/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void func_008CAD30(char *);
extern void func_008CB5D0(char *, u8);
extern void func_008D02E0(char *);

void func_008CD080(char *arg0) {
    func_008D02E0(arg0 + 0x480);
    func_008CB5D0(arg0, M2C_FIELD(arg0, u8 *, 7));
    func_008CAD30(arg0);
}
