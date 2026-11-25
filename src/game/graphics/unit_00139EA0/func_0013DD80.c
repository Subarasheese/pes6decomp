/* compiler: mwcc-3.0.1b210 */
#include "types.h"
typedef struct {
    s32 active;
    s32 masks[7];
    f32 ranges[7];
    s32 levels[7];
    f32 scale[2];
    s32 offsets[7];
    u8 reserved7c[0x1c];
} RenderSettings;
extern RenderSettings D_004FD180;
void func_0013DD80(void) {
    D_004FD180.active = 0;
    D_004FD180.masks[0] = 1;
    D_004FD180.ranges[0] = 13000.0f;
    D_004FD180.offsets[0] = 0;
    D_004FD180.levels[0] = 0x40;
    D_004FD180.masks[1] = 1;
    D_004FD180.ranges[1] = 13000.0f;
    D_004FD180.offsets[1] = 0;
    D_004FD180.levels[1] = 0x30;
    D_004FD180.masks[2] = 1;
    D_004FD180.ranges[2] = 13000.0f;
    D_004FD180.offsets[2] = 0;
    D_004FD180.levels[2] = 0x20;
    D_004FD180.masks[3] = 1;
    D_004FD180.ranges[3] = 13000.0f;
    D_004FD180.offsets[3] = 0;
    D_004FD180.levels[3] = 0x10;
    D_004FD180.masks[4] = 0xffff;
    D_004FD180.ranges[4] = 32.0f;
    D_004FD180.offsets[4] = 0;
    D_004FD180.levels[4] = 0;
    D_004FD180.masks[5] = 0xffff;
    D_004FD180.ranges[5] = 32.0f;
    D_004FD180.offsets[5] = 0;
    D_004FD180.levels[5] = 0x18;
    D_004FD180.masks[6] = 0xffff;
    D_004FD180.ranges[6] = 32.0f;
    D_004FD180.offsets[6] = 0;
    D_004FD180.levels[6] = 0x30;
    D_004FD180.scale[0] = 1.0f;
    D_004FD180.scale[1] = 1.0f;
}
