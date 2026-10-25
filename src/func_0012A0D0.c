/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    f32 v[4];
} __attribute__((aligned(16))) QVec;

typedef struct {
    QVec rows[4];
} QMat;

extern char D_003FB402[];
extern QMat D_003FB230;

void func_0012A0D0(QMat *mat) {
    *(signed char *)D_003FB402 = 1;
    D_003FB230 = *mat;
}
