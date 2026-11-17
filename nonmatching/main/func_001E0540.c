/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

extern s32 func_001DD4E0(s32);
extern u8 *D_003E9960;

void *func_001E0540(s32 arg0, s32 arg1, s32 arg2, u8 *arg3) {
    s32 idx;
    u8 *entry;
    u8 *node;
    s32 count;
    s32 i;
    u8 *items;
    s32 match;
    s32 key;

    idx = func_001DD4E0(arg0);
    key = arg2 & 0xFF;
    entry = D_003E9960 + idx * 0x30 + key * 0xC;
    node = *(u8 **)(entry + 4);
    if (node == NULL) {
        return NULL;
    }
    count = (entry + 4)[0xA] * (entry + 4)[0xB];
    while (1) {
        if (key == 0) {
            match = 1;
        } else if (node[0x20] == arg3[0] && node[0x21] == arg3[1] && node[0x22] == arg3[2] && node[0x23] == arg3[3]
                   && node[0x24] == arg3[4] && node[0x25] == arg3[5] && node[0x26] == arg3[6] && node[0x27] == arg3[7]) {
            match = 1;
        } else {
            match = 0;
        }
        if (match != 0 && count > 0) {
            items = *(u8 **)(node + 0xC);
            for (i = 0; i < count; i++) {
                if (*(s32 *)(items + i * 0x40 + 0x30) == arg1) {
                    return items + i * 0x40;
                }
            }
        }
        node = *(u8 **)(node + 4);
        if (node == NULL) {
            return NULL;
        }
    }
}
