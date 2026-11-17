/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

void func_002871C0(f32 *);
void func_00270530(void *, f32 *);
void func_00BB6FC0(f32 *);
void func_00103D80(f32 *, f32 *, f32 *, f32);

extern char D_0058E5B0[];
extern char D_00CBD240[];
extern char D_00CBD244[];
extern char D_00CBD248[];
extern char D_00CBD24C[];

void func_00BB6CA0(f32 *out, s32 mode, s32 idx, f32 ang) {
    f32 W[4];
    f32 V[4];
    f32 A[4];
    f32 B[4];
    f32 t;
    s32 k;

    func_002871C0(V);
    mode = mode & 0xff;
    if (mode == 2) {
        A[0] = V[0];
        A[1] = V[1];
        A[2] = V[2];
        func_00BB6FC0(A);
        k = idx & 0xff;
        if (k == 0xff) k = 1; else k = k % 23;
        func_00270530(D_0058E5B0 + k * 576, B);
        func_00BB6FC0(B);
        func_00103D80(A, A, B, ang);
    } else if (mode == 1) {
        k = idx & 0xff;
        if (k == 0xff) k = 1; else k = k % 23;
        func_00270530(D_0058E5B0 + k * 576, A);
        func_00BB6FC0(A);
    } else if (mode == 0) {
        A[0] = V[0];
        A[1] = V[1];
        A[2] = V[2];
        func_00BB6FC0(A);
    }
    *(f32 *)D_00CBD240 = A[0];
    *(f32 *)D_00CBD244 = A[1];
    *(f32 *)D_00CBD248 = A[2];
    *(f32 *)D_00CBD24C = A[3];
    if (A[0] <= 0.0f) out[0] = -8000.0f; else out[0] = 8000.0f;
    out[1] = 0.0f;
    out[2] = 4000.0f;
    t = A[0] < 0.0f ? -A[0] : A[0];
    if (t < 8000.0f) W[0] = t / 8000.0f; else W[0] = 1.0f;
    W[0] = W[0] * 0.4f;
    if (A[2] > 4000.0f) {
        W[2] = 0.1f;
    } else {
        t = 4000.0f - A[2];
        if (t < 8000.0f) W[2] = t / 8000.0f; else W[2] = 1.0f;
        W[2] = W[2] * 0.5f;
        W[2] = W[2] + 0.1f;
    }
    A[1] = A[1] * 0.5f;
    A[0] = A[0] * (1.0f - W[0]);
    A[2] = A[2] * (1.0f - W[2]);
    out[0] = out[0] * W[0];
    out[1] = out[1] * 0.5f;
    out[2] = out[2] * W[2];
    __asm__ volatile("lqc2 $vf4, 0(%0)\n lqc2 $vf5, 0(%1)\n vadd.xyzw $vf6, $vf4, $vf5\n sqc2 $vf6, 0(%1)" : : "r"(A), "r"(out) : "memory");
}
