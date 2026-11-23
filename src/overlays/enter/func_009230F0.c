/* compiler: mwcc-3.0.1b210 */
#include "types.h"
extern int sprintf(char *, const char *, ...);
extern u8 func_002955A0(void);
extern char D_0092EC50[], D_0092F678[];
char *func_009230F0(void) {
    s32 value = func_002955A0();
    if (value < 0)
        value = 0;
    else if (value > 99)
        value = 99;
    sprintf(D_0092F678, D_0092EC50, value);
    return D_0092F678;
}
