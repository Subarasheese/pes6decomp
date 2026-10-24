/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    f32 v[4];
} __attribute__((aligned(16))) QVec;

extern QVec D_003FB0D0;
extern QVec D_004FDDB0;

void func_00143140(void) {
    D_004FDDB0 = D_003FB0D0;
    D_004FDDB0.v[3] = 1.0f;
}
