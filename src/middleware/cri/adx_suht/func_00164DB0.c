/* compiler: ee-gcc-2.96-G0-g */
/* g-guthrie/mvc2-port-and-decomp src/sdk_rna_status_00401050.c (func_00401050). See THIRD_PARTY.md. */
#include "types.h"
/* Report the native temporary and IOP counts for one RNA context. */
typedef struct Obj Obj;
struct VT {
    u8 pad[0x24];
    s32 (*f24)(Obj *, s32);
};
struct Obj {
    struct VT *vt;
};
typedef struct {
    u8 pad0;
    s8 status;
    u8 pad2[10];
    u8 *base;
} Context;
extern u8 *func_00176300(u8 *, s32), *func_001762C0(u8 *, s32);
extern s32 func_00178E50(s32, s32);
extern void func_00108048(const char *, ...);
extern char D_003C8868[], D_003C8888[], D_003C88A8[];
void func_00164DB0(Context *ctx) {
    u8 *base = ctx->base;
    u8 *handle = func_00176300(base, 0);
    Obj *o = (Obj *)func_001762C0(base, 0);
    s32 a = o->vt->f24(o, 1);
    s32 b = o->vt->f24(o, 0);
    s32 c = func_00178E50((s32)handle, 1);
    s32 d = func_00178E50((s32)handle, 0);
    func_00108048(D_003C8868, a, b, a + b);
    func_00108048(D_003C8888, c, d, c + d);
    func_00108048(D_003C88A8, ctx->status, a + b + c + d);
}
