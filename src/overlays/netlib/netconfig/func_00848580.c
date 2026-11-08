/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct { u32 a:18; u32 b:5; u32 c:3; u32 d:3; u32 e:3; } W0;
typedef struct { u32 a:18; u32 b:7; u32 c:1; u32 d:1; u32 e:1; u32 f:2; u32 g:2; } W1;
typedef struct { u32 a:18; u32 b:1; } W2;
typedef struct { u32 a:18; } W3;

void func_00848580(W0 *arg0, void *arg1) {
    W1 *w1 = (W1 *) ((u8 *) arg0 + 4);
    W2 *w2 = (W2 *) ((u8 *) arg0 + 8);
    W3 *w3 = (W3 *) ((u8 *) arg0 + 0xC);
    M2C_FIELD(arg1, u32 *, 0x18) = arg0->a;
    M2C_FIELD(arg1, u8 *, 0) = arg0->b;
    M2C_FIELD(arg1, u8 *, 1) = arg0->c;
    M2C_FIELD(arg1, u8 *, 2) = arg0->d;
    M2C_FIELD(arg1, u8 *, 3) = arg0->e;
    M2C_FIELD(arg1, u32 *, 0x1C) = w1->a;
    M2C_FIELD(arg1, u32 *, 0x24) = w3->a;
    M2C_FIELD(arg1, u8 *, 0x12) = w1->b;
    M2C_FIELD(arg1, u8 *, 8) = w1->c;
    M2C_FIELD(arg1, u8 *, 9) = w1->d;
    M2C_FIELD(arg1, u8 *, 0xA) = w1->e;
    M2C_FIELD(arg1, u8 *, 0xC) = w1->f;
    M2C_FIELD(arg1, u8 *, 0xE) = w1->g;
    M2C_FIELD(arg1, u32 *, 0x20) = w2->a;
    M2C_FIELD(arg1, u8 *, 0xF) = w2->b;
}
