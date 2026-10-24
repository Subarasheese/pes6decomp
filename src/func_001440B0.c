/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    f32 v[4];
} __attribute__((aligned(16))) QVec;

void func_001440B0(QVec *dst, QVec *src) {
    *dst = *src;
}
