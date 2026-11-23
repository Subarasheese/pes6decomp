/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    f32 v[4];
} __attribute__((aligned(16))) QVec;

typedef struct {
    QVec rows[4];
} QMat;

extern char Pes6Camera_MatricesDirty[];
extern QMat Pes6Camera_Matrix;

void Pes6Camera_SetMatrix(QMat *mat) {
    *(signed char *)Pes6Camera_MatricesDirty = 1;
    Pes6Camera_Matrix = *mat;
}
