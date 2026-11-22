/* compiler: mwcc-3.0.1b210 */
#include "types.h"

typedef struct {
    u8 pad_0[0x8];
    u8 field_8;
} Fields;

extern void *D_003EA384;

s32 func_0087D5D0(void) {
    if (D_003EA384 == 0) {
        return 1;
    }
    ((Fields *)D_003EA384)->field_8 = (u8)(((Fields *)D_003EA384)->field_8 | 0x10);
    ((Fields *)D_003EA384)->field_8 = (u8)(((Fields *)D_003EA384)->field_8 | 0x40);
    return 0;
}
