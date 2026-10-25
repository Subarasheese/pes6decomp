/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

typedef struct {
    s32 unk0;
    s32 id;
    u8 pad8[0xC];
    u8 used;
    u8 pad15[0x3];
} Entry18;

extern Entry18 D_0052B260[8];

Entry18 *func_001F4380(s32 id) {
    s32 i;

    for (i = 0; i < 8; i++) {
        if (D_0052B260[i].used && id == D_0052B260[i].id) {
            return &D_0052B260[i];
        }
    }
    return NULL;
}
