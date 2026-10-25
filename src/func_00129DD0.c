/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    f32 v[4];
} __attribute__((aligned(16))) QVec;

extern QVec D_003FB0E0;

void func_00129DD0(QVec *vec) {
    D_003FB0E0 = *vec;
}
