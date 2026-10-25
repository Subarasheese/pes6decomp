/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    u8 b0 : 1;
    u8 b1 : 1;
    u8 b2 : 1;
    u8 rest : 5;
} Flags;

extern Flags D_00522908[];

void func_001B6590(void) {
    D_00522908[0].b1 = 0;
    D_00522908[0].b2 = 1;
}
