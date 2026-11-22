/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void func_008EB400(char *);
extern s32 func_008EB470(s32);

void func_008E97F0(char *arg0) {
    func_008EB470((s32) (arg0 + 4));
    M2C_FIELD(arg0, s8 *, 0) = 0;
    M2C_FIELD(arg0, s8 *, 1) = 0;
    M2C_FIELD(arg0, s8 *, 2) = 0;
    func_008EB400(arg0 + 4);
}
