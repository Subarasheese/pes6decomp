/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    s32 a;
    s32 b;
} S26;

s32 func_001F1F10(void);
s32 func_001F2050(s32);
void func_001F3C40(s32, s32);
void func_001F3D10(s32, s32);
void func_001F3D80(s32, void *, s32);
extern char D_003AE9DC[];

void func_0026ACB0(S26 *arg0) {
    func_001F3D10(arg0->a = func_001F1F10(), 1);
    func_001F3C40(arg0->a, 3);
    func_001F3D10(arg0->b = func_001F2050(arg0->a), 1);
    func_001F3D80(arg0->b, D_003AE9DC, 0);
    func_001F3C40(arg0->b, 3);
}
