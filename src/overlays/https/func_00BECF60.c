/* compiler: ee-gcc-2.96-G0 */
#include "types.h"
typedef struct {
    u32 reserved00[2];
    void *buffer;
    u32 counts[2];
} BufferOwner;
extern void func_00BED1B0(BufferOwner *);
extern void func_00BF5C98(void *, s32, u32), func_00BF5DD0(void *);
void func_00BECF60(BufferOwner *ctx) {
    func_00BED1B0(ctx);
    func_00BF5C98(ctx->counts, 0, sizeof(ctx->counts));
}
