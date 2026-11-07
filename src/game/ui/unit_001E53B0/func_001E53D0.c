/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern s32 D_003E74AC;
void func_001E5650(void);

void func_001E53D0(s32 v) {
    if (D_003E74AC != v) {
        D_003E74AC = v;
        func_001E5650();
    }
}
