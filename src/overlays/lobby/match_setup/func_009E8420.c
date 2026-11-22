/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 func_009E9390(char *, s32);
extern void func_009E9EE0(char *, char *);

void func_009E8420(char *arg0) {
    char *temp_s0;

    temp_s0 = arg0 + 0x10;
    func_009E9EE0(temp_s0, arg0);
    func_009E9390(arg0, M2C_FIELD(temp_s0, s32 *, 0x40));
}
