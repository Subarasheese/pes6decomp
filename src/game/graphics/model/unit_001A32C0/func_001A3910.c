/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    f32 v[4];
} __attribute__((aligned(16))) QVec;

typedef struct {
    QVec rows[4];
} QMat;

typedef struct {
    u8 pad0[0x70];
    QMat mat;
} Cam;

extern Cam *D_005203B4[];

void func_001A3910(QMat *out) {
    *out = D_005203B4[0]->mat;
}
