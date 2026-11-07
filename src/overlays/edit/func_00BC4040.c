/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"


typedef struct C { u16 r : 5; u16 g : 5; u16 b : 5; u16 a : 1; } C;

void func_00BC4040(C *arg0, u8 *arg1) {
    arg1[0] = arg0->r * 8;
    arg1[1] = arg0->g * 8;
    arg1[2] = arg0->b * 8;
    arg1[3] = arg0->a ? 0x80 : 0;
    arg1[3] = 0xFF;
}
