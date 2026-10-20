/* compiler: ee-gcc-2.9-G0 */
/* Sony SDK / C runtime code shared with GT4 (same SDK release); source ported
 * from the GT4 decompilation (MIT, see THIRD_PARTY.md). */
typedef int s32;

struct Ctx { char pad[0x24]; s32 m24, m28, m2C; };
extern "C" s32 func_001086E8(s32, Ctx *, s32, s32, s32, s32);

extern "C" s32 func_00108CF0(s32 a, s32 b, s32 c, Ctx *ctx) {
    return func_001086E8(0x80000008, ctx, 0x40, ctx->m24, ctx->m28, ctx->m2C) ? 0 : 0x800;
}
