/* compiler: mwcc-3.0.1b210-sdata0-merged-sections */
#include "types.h"
typedef struct {
    u8 pad00[0xb4];
    s32 resource[2];
    u8 padbc[0x174 - 0xbc];
    s32 secondary;
    u8 pad178[8];
    void *textures[3];
} DisplayData;
typedef union {
    DisplayData data;
    void *slots[0x18c / 4];
} Display;
extern Display D_00CCD570[2];
extern void *D_00CCD89C, *D_00CCD898, *D_00CCD888;
extern void func_002DF960(s32), func_002DC1D0(s32);
extern void func_001D7F10(void *), func_001D4E00(void *), func_001F1EA0(void *);
extern void *func_001C48E8(void *, int, unsigned int);
void func_00C8E380(void) {
    s32 side;
    s32 texture;
    Display *display;
    void **slot;
    side = 0;
    display = D_00CCD570;
    do {
        func_002DF960(display->data.resource[0]);
        func_002DF960(display->data.resource[1]);
        func_002DC1D0(display->data.secondary);
        texture = 0;
        slot = display->slots;
        do {
            func_001D7F10(slot[0x180 / sizeof(void *)]);
            texture++;
            slot++;
        } while (texture < 3);
        func_001C48E8(display, 0, sizeof(*display));
        side++;
        display++;
    } while (side < 2);
    func_001D7F10(D_00CCD89C);
    D_00CCD89C = 0;
    func_001D4E00(D_00CCD898);
    D_00CCD898 = 0;
    func_001F1EA0(D_00CCD888);
    D_00CCD888 = 0;
}
