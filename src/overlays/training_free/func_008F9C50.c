/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void func_002CAFD0(s32);
void func_001A5BE0(s32);
s8 func_0026B250(void);
extern s8 D_003AE970[];
extern u8 D_003AE99A[];

void func_008F9C50(void) {
    s8 r;

    if (D_003AE99A[0]++ == 0) {
        r = func_0026B250();
        D_003AE970[0] = r;
        if ((r != 3) && (r != 4)) {
            func_001A5BE0(5);
            func_002CAFD0(0);
            return;
        }
        func_002CAFD0(1);
    }
}
