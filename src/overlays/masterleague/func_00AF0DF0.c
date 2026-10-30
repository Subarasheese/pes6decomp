/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 func_00AF0370(void);
extern char D_00B8C030[];

void func_00AF0DF0(void) {
    if (func_00AF0370() == 3) {
        (*(s8 *)D_00B8C030) = 1;
    }
}
