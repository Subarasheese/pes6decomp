/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern void func_00153FA0(void *);
void *func_001454C0(s32);
extern void func_00145590(void *);

void func_00BA1840(s32 arg0, s32 *arg1) {
    s32 i;
    void *t;

    i = 0;
    if (arg0 > 0) {
        do {
            t = func_001454C0(*arg1);
            if (t != NULL) {
                func_00145590(t);
                func_00153FA0(t);
            }
            i += 1;
            arg1 += 1;
        } while (i < arg0);
    }
}
