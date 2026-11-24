/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_highlights.h"
extern void func_00BC6F00(void);
extern u8 D_00591F24[], D_00CBD5D1[];

void func_00BC6E90(void) {
    if (D_00591F24[0] != 6) {
        if (D_00CBD5D1[0])
            func_00BC71E0(D_003E758C, 255, 255, 20, 2, 0);
    } else
        func_00BC6F00();
}
