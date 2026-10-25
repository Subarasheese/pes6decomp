/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 D_0053C320[];
void func_008B3280(s32, f32 *);

void func_0023B260(s32 i, f32 *a, f32 *b) {
    f32 tmp[4];

    func_008B3280(D_0053C320[i], tmp);
    *a = tmp[0];
    *b = tmp[1];
}
