/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void func_008D08D0(char *);
extern s32 func_008D1EF0(char *, s32);

void func_008CD0C0(char *arg0) {
    func_008D08D0(arg0 + 0x480);
    M2C_FIELD(arg0, s8 *, 0x15) = 0;
    func_008D1EF0(arg0 + 0x480, 1);
}
