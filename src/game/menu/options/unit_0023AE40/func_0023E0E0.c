/* compiler: mwcc-3.0.1b210 */
#include "pes6/network_menu_items.h"

extern s32 D_003E74FC, Pes6SceneStack[];
extern s32 Pes6SaveData_GetUnavailableFlag(void), func_00246550(s32 feature);
extern void func_001B7B20(void), func_001B7A90(void), func_001B7BC0(s32 button, const char *text),
    func_00D0C770(s32 button, s32 message);
extern const char D_003D89C8[]; /* "%s " */
extern char *func_001F08B0(s32 message);
extern int sprintf(char *out, const char *format, ...);
static inline void setHint(MenuItem *slot, s32 button, s32 message) {
    slot->key = button;
    slot->value = message;
}

void func_0023E0E0(s32 kind) {
    MenuItem hints[6] = {0};
    s32 i, count = 0;
    for (i = 0; i < 6; i++)
        hints[i].key = -1;
    if (D_003E74FC == kind)
        return;
    D_003E74FC = kind;
    switch (kind) {
    case 0:
        setHint(&hints[0], 5, 0x6c0023);
        break;
    case 1:
        setHint(&hints[0], 6, 0x6c0029);
        break;
    case 2:
        setHint(&hints[0], 5, 0x6c0023);
        setHint(&hints[1], 6, 0x6c0029);
        break;
    case 3:
        setHint(&hints[0], 5, 0x6c0023);
        setHint(&hints[1], 6, 0x6c0029);
        setHint(&hints[2], 11, 0x6c003a);
        break;
    case 4:
        setHint(&hints[0], 5, 0x6c0023);
        setHint(&hints[1], 6, 0x6c0029);
        setHint(&hints[2], 13, 0x6c0030);
        break;
    case 5:
        setHint(&hints[0], 5, 0x6c0023);
        setHint(&hints[1], 6, 0x6c0029);
        setHint(&hints[2], 11, 0x10016);
        setHint(&hints[3], 13, 0x6c0030);
        break;
    case 6:
        setHint(&hints[0], 5, 0x6c0023);
        setHint(&hints[1], 6, 0x6c0029);
        if (Pes6SceneStack[0] != 15) {
            setHint(&hints[2], 11, 0x50020);
        }
        break;
    case 7:
        setHint(&hints[0], 5, 0x6c0023);
        setHint(&hints[1], 6, 0x6c0029);
        setHint(&hints[2], 11, 0x50020);
        if (Pes6SceneStack[0] == 15) {
            setHint(&hints[2], -1, 0x0);
        }
        break;
    case 8:
        setHint(&hints[0], 5, 0x6c0023);
        setHint(&hints[1], 6, 0x6c0029);
        break;
    case 9:
        setHint(&hints[0], 5, 0x6c0023);
        setHint(&hints[1], 6, 0x6c0029);
        setHint(&hints[2], 12, 0x6c0038);
        break;
    case 15:
        setHint(&hints[0], 11, 0x200db);
        setHint(&hints[1], 5, 0x6c0023);
        setHint(&hints[2], 6, 0x6c0029);
        setHint(&hints[3], 13, 0x6c0030);
        break;
    case 16:
        setHint(&hints[0], 6, 0x6c0029);
        setHint(&hints[1], 13, 0x6c0030);
        break;
    case 17:
        setHint(&hints[0], 11, 0x1f60020);
        setHint(&hints[1], 5, 0x6c0023);
        setHint(&hints[2], 10, 0x1f6001f);
        break;
    case 18:
        setHint(&hints[0], 11, 0x1f60020);
        setHint(&hints[1], 6, 0x6c0029);
        setHint(&hints[2], 10, 0x1f6001f);
        break;
    case 19:
        setHint(&hints[0], 11, 0x1f60020);
        setHint(&hints[1], 10, 0x1f6001f);
        setHint(&hints[2], 12, 0x6b000f);
        break;
    case 20:
        setHint(&hints[0], 5, 0x6c0023);
        setHint(&hints[1], 6, 0x6c0029);
        if (func_00246550(193) || func_00246550(194) || func_00246550(195)) {
            setHint(&hints[2], 14, 0x6b0010);
        }
        break;
    case 21:
        setHint(&hints[0], 11, 0x200e5);
        setHint(&hints[1], 9, 0x200e7);
        setHint(&hints[2], 13, 0x6c0030);
        func_001B7B20();
        break;
    case 22:
        setHint(&hints[0], 11, 0x200e6);
        setHint(&hints[1], 9, 0x200e7);
        setHint(&hints[2], 13, 0x6c0030);
        func_001B7B20();
        break;
    case 23:
        setHint(&hints[0], 9, 0x200e7);
        setHint(&hints[1], 13, 0x6c0030);
        break;
    case 24:
        setHint(&hints[0], 5, 0x310002);
        break;
    case 25:
        setHint(&hints[0], 5, 0x6c0078);
        break;
    case 26:
        setHint(&hints[0], 11, 0x2d0056);
        break;
    case 27:
        setHint(&hints[0], 6, 0x2d006c);
        if (!Pes6SaveData_GetUnavailableFlag()) {
            char text[32] = {0};
            sprintf(text, D_003D89C8, func_001F08B0(hints[0].value));
            func_001B7B20();
            func_001B7BC0(hints[0].key, text);
            return;
        }
        break;
    case 28:
        setHint(&hints[0], 12, 0x6c004b);
        break;
    case 29:
        setHint(&hints[0], 5, 0x70042);
        break;
    case 30:
        func_001B7B20();
        break;
    case 31:
        func_001B7A90();
        break;
    }
    if (kind == 31)
        return;
    if (Pes6SaveData_GetUnavailableFlag() == 1) {
        for (i = 0; i < 6; i++) {
            if (hints[i].key != -1)
                func_00D0C770(hints[i].key, hints[i].value);
        }
    } else {
        for (i = 0; i < 6; i++) {
            if (hints[i].value != 0)
                count++;
        }
        func_001B7ED0(hints, count);
    }
}
