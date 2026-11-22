/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void func_008C8E30(s8 **);
extern void func_008C91C0(s8 *);
extern s32 func_008CBFF0(s8 *);
extern void func_008E7F00(s8 *);

void func_008CBFA0(s8 *arg0, s8 arg1) {
    M2C_FIELD(arg0, s8 *, 0x16) = arg1;
    func_008E7F00(arg0 + 0x6F0);
    func_008C91C0(arg0 + 0x77C);
    func_008C8E30((s8 **) (arg0 + 0x78C));
    func_008CBFF0(arg0);
}
