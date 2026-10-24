/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad0[0x54];
    s32 offset;
} Chunk;

extern u8 *D_003E97FC;
void func_001216F0(void);
s32 func_00134120(void *, void *);

s32 func_00142090(Chunk *chunk) {
    s32 offset = chunk->offset;
    u8 *dst;

    if (offset == 0) {
        return 0;
    }
    dst = D_003E97FC + 0x50;
    func_001216F0();
    return func_00134120(dst, (u8 *)chunk + offset);
}
