/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern s32 D_0058CFC0[];
extern char D_0058CFC4[];
s32 func_0025ED80(void);
s32 func_0025ECE0(s32);
void func_0025ED00(s32, void *);

void func_0025C860(void) {
    if (func_0025ED80() == 0) {
        return;
    }
    D_0058CFC0[0] = func_0025ECE0(1);
    func_0025ED00(1, D_0058CFC4);
}
