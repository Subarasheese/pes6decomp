/* compiler: mwcc-3.0.1b151 */
#include "types.h"
extern u8 func_008028C0(s32);
extern const char *func_001F08B0(s32);
extern int sprintf(char *, const char *, ...);
extern char D_003EA370;
extern s8 D_008B144E[];
char *func_0087C440(void) {
    s32 value = func_008028C0(D_008B144E[0] & 1);
    sprintf(&D_003EA370, func_001F08B0(0x670000), value);
    return &D_003EA370;
}
