/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern void func_009D4DF0(void);
extern s32 D_00A7DE10[];

void func_009D5600(int arg0) {
    if (D_00A7DE10[0] != 0) {
        *(int *)(D_00A7DE10[0] + 8) = arg0;
        func_009D4DF0();
    }
}
