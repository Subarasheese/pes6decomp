/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern void func_001DCD80();
extern void func_001DCE30();
extern char D_0052ADFC[];
extern char D_0052ADFD[];

void func_001DCCF0(u8 *object) {
    if ((s32) *object < 0x20) {
        func_001DCE30();
    } else {
        func_001DCD80();
        (*(u8 *)D_0052ADFD) = (*(u8 *)D_0052ADFC);
    }
}
