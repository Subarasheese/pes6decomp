/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

M2C_UNK func_00209A00(void *, M2C_UNK, M2C_UNK);
s32 func_00277220(void *, M2C_UNK);
s32 func_00BBB8C0(M2C_UNK);
extern char Pes6MatchSquads[];

union Cell {
    char *p;
    u16 h;
    s16 sh;
    f32 f;
    u8 b;
};

void func_00BEDBE0(union Cell *arg0) {
    f32 f;
    u8 a2;
    char *a3;
    char *a0;
    char *s0;

    a3 = arg0->p;
    a2 = *(u8 *)(a3 + 0x12);
    f = ((union Cell *)(a3 + 0xE0))->f;
    s0 = Pes6MatchSquads + a2 * 0x6900 + *(u8 *)(a3 + 0x11) * 0x348 + 0xF0;
    if (!(f <= 11417.0f)) {
        ((union Cell *)(a3 + 0xE0))->f = 11417.0f;
    } else if (f < -11417.0f) {
        ((union Cell *)(a3 + 0xE0))->f = -11417.0f;
    }
    a0 = arg0->p;
    f = ((union Cell *)(a0 + 0xE8))->f;
    if (!(f <= 6681.0f)) {
        ((union Cell *)(a0 + 0xE8))->f = 6681.0f;
    } else if (f < -6681.0f) {
        ((union Cell *)(a0 + 0xE8))->f = -6681.0f;
    }
    if (func_00277220(s0, 1) == 2) {
        func_00209A00(((union Cell *)(arg0->p + 4))->p, 0x59D, 0);
    } else {
        if (((union Cell *)(arg0->p + 0xE0))->f <= 0.0f) {
            ((union Cell *)(arg0->p + 0x26))->h = 0;
            ((union Cell *)(arg0->p + 0x28))->h = ((union Cell *)(arg0->p + 0x26))->h;
            *(s8 *)(((union Cell *)(arg0->p + 4))->p + 0x2D) = 0;
        } else {
            ((union Cell *)(arg0->p + 0x26))->h = 0x8000;
            ((union Cell *)(arg0->p + 0x28))->h = ((union Cell *)(arg0->p + 0x26))->h;
            *(s8 *)(((union Cell *)(arg0->p + 4))->p + 0x2D) = 1;
        }
        if (*(u8 *)(s0 + 2) < 4) {
            func_00209A00(((union Cell *)(arg0->p + 4))->p, 0x59A, 0);
        } else if (func_00BBB8C0(2) != 0) {
            func_00209A00(((union Cell *)(arg0->p + 4))->p, 0x59C, 0);
        } else {
            func_00209A00(((union Cell *)(arg0->p + 4))->p, 0x59B, 0);
        }
    }
    *(s8 *)(arg0->p + 0x16) = 0x46;
    ((union Cell *)(arg0->p + 0x18))->sh = 7;
}
