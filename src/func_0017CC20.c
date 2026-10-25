/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    f32 v[4];
} __attribute__((aligned(16))) QVec;

typedef struct {
    QVec items[30];
} Row;

extern Row D_00511250[];
void func_00103E38(QVec *, f32 *);
void func_00129E00(f32, f32, f32);

void func_0017CC20(s32 row, s32 col, f32 *vec) {
    func_00103E38(&D_00511250[row].items[col], vec);
    func_00129E00(vec[0], vec[1], vec[2]);
}
