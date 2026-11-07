/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct T {
    u8 pad[0x16];
    u8 a;
    u8 pad2;
    s16 b;
} T;

void func_00818380(T *arg0) {
    if (arg0->a != 0) {
        arg0->a = 0;
        arg0->b = 0;
    }
}
