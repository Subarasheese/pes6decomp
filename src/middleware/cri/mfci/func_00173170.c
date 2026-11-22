/* compiler: ee-gcc-2.96-nosib */
#include "pes6/m2c.h"

extern void func_00173438(void *);
extern s32 func_00173040(s32);
void func_00173170(s8 *arg0) {
    if (arg0 != NULL) {
        func_00173438(arg0);
        if (*arg0 == 1) {
            *arg0 = 0;
            func_00173040((s32) arg0);
        }
    }
}
