/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 D_003EA87C;
extern char D_00510FD0[];

void func_00C82290(void) {
    switch (*(s32 *)D_00510FD0) {
    case 8:
    case 14:
    case 15:
        D_003EA87C = 1;
    }
}
