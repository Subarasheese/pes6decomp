/* compiler: mwcc-3.0.1b151 */
#include "pes6/menu_commands.h"
typedef union {
    u8 byte[0xf4];
    u16 half[0xf4 / 2];
} Settings;
typedef struct {
    const Settings *settings;
    u8 reserved04[0x98 - 4];
    u8 field98, field99;
    u16 value[4], minimum, maximum;
    u8 reservedA6[0xd0 - 0xa6];
    u8 page;
    u8 reservedD1[3];
    s32 mode, status;
} Panel;
typedef union {
    MenuCommandEntry entry[8];
    s32 word[24];
} Commands;
extern const Commands D_00B861C0;
extern Panel *D_003EAEF8;
extern void *func_0096DB90(s32), *func_001C48E8(void *, s32, u32), *func_00228960(void);
extern void func_00B6F500(void), func_00B6F2A0(void), func_00B6F0B0(void), func_00B6EEC0(void);
#define LOAD_BYTE(index, low, high)                                                                \
    do {                                                                                           \
        panel->value[0] = panel->settings->byte[(index) + 0];                                      \
        panel->value[1] = panel->settings->byte[(index) + 1];                                      \
        panel->value[2] = panel->settings->byte[(index) + 2];                                      \
        panel->value[3] = panel->settings->byte[(index) + 3];                                      \
        panel->minimum = (low);                                                                    \
        panel->maximum = (high);                                                                   \
    } while (0)
#define LOAD_HALF(index, low, high)                                                                \
    do {                                                                                           \
        panel->value[0] = panel->settings->half[(index) + 0];                                      \
        panel->value[1] = panel->settings->half[(index) + 1];                                      \
        panel->value[2] = panel->settings->half[(index) + 2];                                      \
        panel->value[3] = panel->settings->half[(index) + 3];                                      \
        panel->minimum = (low);                                                                    \
        panel->maximum = (high);                                                                   \
    } while (0)
void func_00B6F810(s32 mode, s32 page) {
    Panel *panel;
    Commands commands;
    u32 i;
    if (D_003EAEF8)
        return;
    D_003EAEF8 = func_0096DB90(sizeof(Panel));
    func_001C48E8(D_003EAEF8, 0, sizeof(Panel));
    panel = D_003EAEF8;
    panel->settings = func_00228960();
    panel->mode = mode;
    panel->status = 0;
    panel->field98 = 0;
    panel->field99 = 1;
    panel->page = page;
    switch (mode) {
    case 5:
        LOAD_BYTE(0x48, 0, 57);
        break;
    case 6:
        LOAD_BYTE(0x50, 0, 31);
        break;
    case 7:
        LOAD_BYTE(0x58, 0, 1);
        break;
    case 10:
        LOAD_HALF(0x72, 1, 5000);
        break;
    case 11:
        LOAD_BYTE(0xf0, 0, 5);
        break;
    case 14:
        LOAD_BYTE(0x60, 1, 99);
        break;
    case 15:
        LOAD_BYTE(0x64, 1, 99);
        break;
    case 16:
        LOAD_BYTE(0x68, 1, 99);
        break;
    case 17:
        LOAD_BYTE(0x6c, 1, 99);
        break;
    case 18:
        LOAD_BYTE(0x70, 1, 99);
        break;
    case 19:
        LOAD_BYTE(0x74, 1, 99);
        break;
    case 20:
        LOAD_BYTE(0x78, 1, 99);
        break;
    case 21:
        LOAD_BYTE(0x7c, 1, 99);
        break;
    case 22:
        LOAD_BYTE(0x80, 1, 99);
        break;
    case 23:
        LOAD_BYTE(0x84, 1, 99);
        break;
    case 24:
        LOAD_BYTE(0x88, 1, 99);
        break;
    case 25:
        LOAD_BYTE(0x8c, 1, 99);
        break;
    case 26:
        LOAD_BYTE(0x90, 1, 99);
        break;
    case 27:
        LOAD_BYTE(0x94, 1, 99);
        break;
    case 28:
        LOAD_BYTE(0x98, 1, 99);
        break;
    case 29:
        LOAD_BYTE(0x9c, 1, 99);
        break;
    case 30:
        LOAD_BYTE(0xa0, 1, 99);
        break;
    case 31:
        LOAD_BYTE(0xa4, 1, 99);
        break;
    case 32:
        LOAD_BYTE(0xa8, 1, 99);
        break;
    case 33:
        LOAD_BYTE(0xac, 1, 99);
        break;
    case 34:
        LOAD_BYTE(0xb0, 1, 99);
        break;
    case 35:
        LOAD_BYTE(0xb4, 1, 99);
        break;
    case 36:
        LOAD_BYTE(0xb8, 1, 99);
        break;
    case 37:
        LOAD_BYTE(0xbc, 1, 99);
        break;
    case 38:
        LOAD_BYTE(0xc0, 1, 99);
        break;
    case 39:
        LOAD_BYTE(0xc4, 1, 99);
        break;
    case 40:
        LOAD_BYTE(0xc8, 1, 8);
        break;
    case 41:
        LOAD_BYTE(0xcc, 1, 8);
        break;
    case 42:
        LOAD_BYTE(0xd0, 1, 8);
        break;
    case 43:
        LOAD_BYTE(0xd4, 0, 2);
        break;
    }
    func_00B6F500();
    {
        const s32 *src = D_00B861C0.word;
        s32 *dst = commands.word;
        s32 count = 12;
        do {
            dst[0] = src[0];
            dst[1] = src[1];
            dst += 2;
            src += 2;
        } while (--count > 0);
    }
    if (D_003EAEF8) {
        func_001BC300();
        for (i = 0; i < 8; i++) {
            func_001BC3D0(0, commands.entry[i].id, commands.entry[i].flags,
                          commands.entry[i].callback);
        }
    }
    func_00B6F2A0();
    func_00B6F0B0();
    func_00B6EEC0();
}
