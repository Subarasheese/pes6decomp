/* compiler: mwcc-3.0.1b210-sdata0-merged-sections */
#include "types.h"

typedef struct {
    s32 kind;
    u32 messageId;
} MenuEntry;

extern void func_001B7ED0(const MenuEntry *entries, s32 count);
extern void func_001B7A90(void);
extern void func_001B7B20(void);

#define ENTRY(kind, messageId) {kind, messageId}
#define SHOW_ENTRIES(count, ...) \
    do { \
        MenuEntry entries[] = {__VA_ARGS__}; \
        func_001B7ED0(entries, count); \
    } while (0)

void func_00958000(u8 screen) {
    switch (screen) {
    case 0:
        SHOW_ENTRIES(2, ENTRY(5, 0x006C0023), ENTRY(13, 0x006C0030));
        break;
    case 1:
        SHOW_ENTRIES(2, ENTRY(5, 0x006C0023), ENTRY(6, 0x006C0029));
        break;
    case 2:
        SHOW_ENTRIES(1, ENTRY(5, 0x006C0023));
        break;
    case 160:
        SHOW_ENTRIES(2, ENTRY(6, 0x006C0029), ENTRY(13, 0x006C0030));
        break;
    case 3:
        SHOW_ENTRIES(1, ENTRY(5, 0x001900E4));
        break;
    case 4:
        SHOW_ENTRIES(1, ENTRY(5, 0x006C0023));
        break;
    case 5:
        SHOW_ENTRIES(1, ENTRY(5, 0x001A0068));
        break;
    case 6:
        SHOW_ENTRIES(1, ENTRY(6, 0x006C006D));
        break;
    case 7:
        SHOW_ENTRIES(2, ENTRY(5, 0x006C0023), ENTRY(6, 0x006C0029));
        break;
    case 8:
        SHOW_ENTRIES(2, ENTRY(6, 0x006C0029), ENTRY(13, 0x006C0030));
        break;
    case 9:
        SHOW_ENTRIES(2, ENTRY(6, 0x006C0029), ENTRY(13, 0x006C0030));
        break;
    case 10:
        SHOW_ENTRIES(2, ENTRY(6, 0x006C0029), ENTRY(13, 0x006C0030));
        break;
    case 11:
        SHOW_ENTRIES(3,
            ENTRY(5, 0x001A0068),
            ENTRY(6, 0x006C0029),
            ENTRY(13, 0x006C0030));
        break;
    case 12:
        SHOW_ENTRIES(1, ENTRY(6, 0x006C006D));
        break;
    case 13:
        func_001B7A90();
        break;
    case 14:
        SHOW_ENTRIES(3,
            ENTRY(5, 0x006C0023),
            ENTRY(6, 0x006C0029),
            ENTRY(13, 0x006C0030));
        break;
    case 15:
        SHOW_ENTRIES(2, ENTRY(6, 0x006C0029), ENTRY(13, 0x006C0030));
        break;
    case 52:
        SHOW_ENTRIES(1, ENTRY(6, 0x006C006D));
        break;
    case 53:
        SHOW_ENTRIES(1, ENTRY(5, 0x001A00CB));
        break;
    case 54:
        SHOW_ENTRIES(1, ENTRY(5, 0x001A00CC));
        break;
    case 55:
        SHOW_ENTRIES(2, ENTRY(5, 0x006C0023), ENTRY(6, 0x006C006D));
        break;
    case 56:
        SHOW_ENTRIES(1, ENTRY(6, 0x006C0029));
        break;
    case 57:
        SHOW_ENTRIES(1, ENTRY(6, 0x006C006D));
        break;
    case 58:
        SHOW_ENTRIES(3,
            ENTRY(5, 0x006C0023),
            ENTRY(6, 0x006C0029),
            ENTRY(11, 0x00330042));
        break;
    case 59:
        SHOW_ENTRIES(2, ENTRY(5, 0x006C0023), ENTRY(6, 0x006C0029));
        break;
    case 60:
        SHOW_ENTRIES(1, ENTRY(6, 0x006C006D));
        break;
    case 61:
        SHOW_ENTRIES(1, ENTRY(5, 0x006C0023));
        break;
    case 28:
        SHOW_ENTRIES(3,
            ENTRY(5, 0x006C0023),
            ENTRY(6, 0x006C0029),
            ENTRY(13, 0x006C0030));
        break;
    case 29:
        SHOW_ENTRIES(2, ENTRY(6, 0x006C0029), ENTRY(13, 0x006C0030));
        break;
    case 16:
        SHOW_ENTRIES(3,
            ENTRY(6, 0x006C0029),
            ENTRY(11, 0x001900BC),
            ENTRY(13, 0x006C0030));
        break;
    case 17:
        SHOW_ENTRIES(2, ENTRY(6, 0x006C0029), ENTRY(13, 0x006C0030));
        break;
    case 18:
        SHOW_ENTRIES(2, ENTRY(6, 0x006C0029), ENTRY(13, 0x006C0030));
        break;
    case 19:
        SHOW_ENTRIES(3,
            ENTRY(6, 0x006C0029),
            ENTRY(11, 0x001900BC),
            ENTRY(13, 0x006C0030));
        break;
    case 20:
        SHOW_ENTRIES(2, ENTRY(6, 0x006C0029), ENTRY(13, 0x006C0030));
        break;
    case 21:
        SHOW_ENTRIES(2, ENTRY(6, 0x006C0029), ENTRY(13, 0x006C0030));
        break;
    case 22:
        SHOW_ENTRIES(2, ENTRY(6, 0x006C0029), ENTRY(12, 0x001A00B9));
        break;
    case 23:
        SHOW_ENTRIES(1, ENTRY(6, 0x006C0029));
        break;
    case 24:
        SHOW_ENTRIES(2, ENTRY(6, 0x006C0029), ENTRY(13, 0x006C0030));
        break;
    case 25:
        SHOW_ENTRIES(1, ENTRY(6, 0x006C0029));
        break;
    case 26:
        SHOW_ENTRIES(2, ENTRY(6, 0x006C0029), ENTRY(11, 0x00190056));
        break;
    case 27:
        SHOW_ENTRIES(2, ENTRY(6, 0x006C0029), ENTRY(13, 0x006C0030));
        break;
    case 30:
        SHOW_ENTRIES(1, ENTRY(6, 0x006C0029));
        break;
    case 31:
        SHOW_ENTRIES(2, ENTRY(5, 0x006C0023), ENTRY(6, 0x006C0029));
        break;
    case 32:
        SHOW_ENTRIES(1, ENTRY(5, 0x006C0023));
        break;
    case 33:
        SHOW_ENTRIES(2, ENTRY(5, 0x006C0023), ENTRY(6, 0x006C0029));
        break;
    case 34:
        SHOW_ENTRIES(2, ENTRY(5, 0x006C0023), ENTRY(6, 0x006C0029));
        break;
    case 35:
        SHOW_ENTRIES(3,
            ENTRY(5, 0x006C0023),
            ENTRY(6, 0x006C0029),
            ENTRY(11, 0x00330042));
        break;
    case 36:
        SHOW_ENTRIES(4,
            ENTRY(5, 0x006C0023),
            ENTRY(6, 0x006C0029),
            ENTRY(11, 0x0033000D),
            ENTRY(13, 0x006C0030));
        break;
    case 37:
        /* The menu initializes four entries and submits the first 2. */
        SHOW_ENTRIES(2,
            ENTRY(5, 0x006C0023),
            ENTRY(6, 0x006C0029),
            ENTRY(0, 0x00000000),
            ENTRY(0, 0x00000000));
        break;
    case 39:
        SHOW_ENTRIES(3,
            ENTRY(5, 0x006C0023),
            ENTRY(6, 0x006C0029),
            ENTRY(13, 0x006C0030));
        break;
    case 40:
        SHOW_ENTRIES(2, ENTRY(5, 0x006C0023), ENTRY(6, 0x006C0029));
        break;
    case 41:
        SHOW_ENTRIES(3,
            ENTRY(5, 0x006C0023),
            ENTRY(6, 0x006C0029),
            ENTRY(11, 0x00330042));
        break;
    case 42:
        SHOW_ENTRIES(3,
            ENTRY(5, 0x006C0023),
            ENTRY(6, 0x006C0029),
            ENTRY(11, 0x0033000D));
        break;
    case 38:
        SHOW_ENTRIES(2, ENTRY(5, 0x006C0023), ENTRY(6, 0x006C0029));
        break;
    case 43:
        SHOW_ENTRIES(4,
            ENTRY(5, 0x006C0023),
            ENTRY(6, 0x006C0029),
            ENTRY(11, 0x00330031),
            ENTRY(13, 0x006C0030));
        break;
    case 47:
        SHOW_ENTRIES(4,
            ENTRY(5, 0x006C0023),
            ENTRY(6, 0x006C0029),
            ENTRY(11, 0x00330031),
            ENTRY(13, 0x006C0030));
        break;
    case 48:
        /* The menu initializes four entries and submits the first 3. */
        SHOW_ENTRIES(3,
            ENTRY(5, 0x006C0023),
            ENTRY(6, 0x006C0029),
            ENTRY(11, 0x00330031),
            ENTRY(0, 0x00000000));
        break;
    case 49:
    case 50:
        SHOW_ENTRIES(2, ENTRY(5, 0x006C0023), ENTRY(6, 0x006C0029));
        break;
    case 44:
        SHOW_ENTRIES(4,
            ENTRY(5, 0x006C0023),
            ENTRY(6, 0x006C0029),
            ENTRY(11, 0x0033000D),
            ENTRY(13, 0x006C0030));
        break;
    case 51:
        SHOW_ENTRIES(3,
            ENTRY(5, 0x006C0023),
            ENTRY(6, 0x006C0029),
            ENTRY(13, 0x006C0030));
        break;
    case 64:
        SHOW_ENTRIES(2, ENTRY(5, 0x006C0023), ENTRY(6, 0x006C006D));
        break;
    case 67:
        SHOW_ENTRIES(2, ENTRY(5, 0x006C0023), ENTRY(6, 0x006C0029));
        break;
    case 45:
        SHOW_ENTRIES(4,
            ENTRY(5, 0x006C0023),
            ENTRY(6, 0x006C0029),
            ENTRY(11, 0x00330031),
            ENTRY(13, 0x006C0030));
        break;
    case 46:
        SHOW_ENTRIES(4,
            ENTRY(5, 0x006C0023),
            ENTRY(6, 0x006C0029),
            ENTRY(11, 0x0033000D),
            ENTRY(13, 0x006C0030));
        break;
    case 65:
        SHOW_ENTRIES(2, ENTRY(5, 0x006C0023), ENTRY(6, 0x006C0029));
        break;
    case 66:
        SHOW_ENTRIES(2, ENTRY(5, 0x006C0023), ENTRY(6, 0x006C006D));
        break;
    case 68:
        SHOW_ENTRIES(2, ENTRY(5, 0x006C0023), ENTRY(6, 0x006C0029));
        break;
    case 62:
        SHOW_ENTRIES(3,
            ENTRY(5, 0x006C0023),
            ENTRY(6, 0x006C0029),
            ENTRY(13, 0x006C0030));
        break;
    case 63:
        SHOW_ENTRIES(2, ENTRY(6, 0x006C0029), ENTRY(13, 0x006C0030));
        break;
    case 69:
        SHOW_ENTRIES(2, ENTRY(5, 0x006C0023), ENTRY(13, 0x006C0030));
        break;
    case 70:
        SHOW_ENTRIES(1, ENTRY(6, 0x006C006D));
        break;
    case 71:
        SHOW_ENTRIES(2, ENTRY(5, 0x006C0023), ENTRY(13, 0x006C0030));
        break;
    case 72:
        SHOW_ENTRIES(1, ENTRY(5, 0x006C0023));
        break;
    case 73:
        SHOW_ENTRIES(2, ENTRY(6, 0x006C0029), ENTRY(13, 0x006C0030));
        break;
    case 74:
        SHOW_ENTRIES(2, ENTRY(6, 0x006C0029), ENTRY(13, 0x006C0030));
        break;
    case 75:
        SHOW_ENTRIES(2, ENTRY(5, 0x006C0023), ENTRY(6, 0x006C0029));
        break;
    case 77:
        SHOW_ENTRIES(1, ENTRY(6, 0x006C0029));
        break;
    case 94:
        SHOW_ENTRIES(1, ENTRY(5, 0x001A0068));
        break;
    case 76:
        SHOW_ENTRIES(1, ENTRY(5, 0x006C0023));
        break;
    case 95:
        SHOW_ENTRIES(1, ENTRY(6, 0x006C006D));
        break;
    case 79:
        SHOW_ENTRIES(3,
            ENTRY(5, 0x006C0023),
            ENTRY(11, 0x006C003A),
            ENTRY(13, 0x006C0030));
        break;
    case 80:
        SHOW_ENTRIES(3,
            ENTRY(5, 0x006C0023),
            ENTRY(6, 0x006C0029),
            ENTRY(13, 0x006C0030));
        break;
    case 81:
        SHOW_ENTRIES(4,
            ENTRY(5, 0x006C0023),
            ENTRY(11, 0x006C003A),
            ENTRY(12, 0x006C0041),
            ENTRY(13, 0x006C0030));
        break;
    case 82:
        SHOW_ENTRIES(3,
            ENTRY(5, 0x006C0023),
            ENTRY(11, 0x006C003A),
            ENTRY(13, 0x006C0030));
        break;
    case 83:
        SHOW_ENTRIES(3,
            ENTRY(5, 0x006C0023),
            ENTRY(11, 0x006C003A),
            ENTRY(13, 0x006C0030));
        break;
    case 84:
        SHOW_ENTRIES(1, ENTRY(5, 0x001900E4));
        break;
    case 85:
        SHOW_ENTRIES(1, ENTRY(5, 0x001900E4));
        break;
    case 78:
        SHOW_ENTRIES(1, ENTRY(6, 0x006C006D));
        break;
    case 87:
        SHOW_ENTRIES(2, ENTRY(5, 0x006C0023), ENTRY(6, 0x001E0062));
        break;
    case 86:
        SHOW_ENTRIES(2, ENTRY(5, 0x006C0023), ENTRY(11, 0x006C003A));
        break;
    case 88:
        SHOW_ENTRIES(4,
            ENTRY(5, 0x006C0023),
            ENTRY(6, 0x006C004A),
            ENTRY(11, 0x006C003A),
            ENTRY(12, 0x006C004B));
        break;
    case 89:
        SHOW_ENTRIES(3,
            ENTRY(5, 0x006C0023),
            ENTRY(6, 0x006C004A),
            ENTRY(12, 0x006C004B));
        break;
    case 90:
        SHOW_ENTRIES(1, ENTRY(5, 0x001900E4));
        break;
    case 91:
        SHOW_ENTRIES(2, ENTRY(11, 0x006C003A), ENTRY(12, 0x006C004B));
        break;
    case 92:
        SHOW_ENTRIES(2, ENTRY(5, 0x006C0023), ENTRY(12, 0x006C004B));
        break;
    case 93:
        SHOW_ENTRIES(1, ENTRY(5, 0x006C0023));
        break;
    case 96:
        SHOW_ENTRIES(3,
            ENTRY(5, 0x006C0023),
            ENTRY(6, 0x006C0029),
            ENTRY(13, 0x006C0030));
        break;
    case 97:
        SHOW_ENTRIES(2, ENTRY(6, 0x006C0029), ENTRY(13, 0x006C0030));
        break;
    case 98:
        SHOW_ENTRIES(2, ENTRY(6, 0x006C0029), ENTRY(13, 0x006C0030));
        break;
    case 99:
        SHOW_ENTRIES(2, ENTRY(6, 0x006C0029), ENTRY(13, 0x006C0030));
        break;
    case 100:
        SHOW_ENTRIES(2, ENTRY(6, 0x006C0029), ENTRY(13, 0x006C0030));
        break;
    case 101:
        SHOW_ENTRIES(2, ENTRY(6, 0x006C0029), ENTRY(13, 0x006C0030));
        break;
    case 102:
        SHOW_ENTRIES(1, ENTRY(5, 0x006C0023));
        break;
    case 103:
        SHOW_ENTRIES(2, ENTRY(5, 0x006C0023), ENTRY(6, 0x006C0029));
        break;
    case 104:
        SHOW_ENTRIES(1, ENTRY(5, 0x006C0023));
        break;
    case 105:
        SHOW_ENTRIES(2, ENTRY(6, 0x006C0029), ENTRY(13, 0x006C0030));
        break;
    case 106:
        SHOW_ENTRIES(1, ENTRY(6, 0x006C0029));
        break;
    case 107:
        SHOW_ENTRIES(2, ENTRY(6, 0x006C0029), ENTRY(13, 0x006C0030));
        break;
    case 108:
        SHOW_ENTRIES(1, ENTRY(6, 0x006C0029));
        break;
    case 109:
        SHOW_ENTRIES(2, ENTRY(6, 0x006C0029), ENTRY(13, 0x006C0030));
        break;
    case 110:
        SHOW_ENTRIES(1, ENTRY(5, 0x006C0023));
        break;
    case 111:
        SHOW_ENTRIES(2, ENTRY(5, 0x006C0023), ENTRY(6, 0x006C0029));
        break;
    case 112:
        SHOW_ENTRIES(1, ENTRY(5, 0x006C0023));
        break;
    case 113:
        SHOW_ENTRIES(2, ENTRY(6, 0x006C0029), ENTRY(13, 0x006C0030));
        break;
    case 114:
        SHOW_ENTRIES(1, ENTRY(6, 0x006C0029));
        break;
    case 115:
        SHOW_ENTRIES(2, ENTRY(6, 0x006C0029), ENTRY(13, 0x006C0030));
        break;
    case 116:
        SHOW_ENTRIES(1, ENTRY(6, 0x006C0029));
        break;
    case 117:
        SHOW_ENTRIES(2, ENTRY(6, 0x006C0029), ENTRY(13, 0x006C0030));
        break;
    case 118:
        SHOW_ENTRIES(1, ENTRY(6, 0x006C0029));
        break;
    case 119:
        SHOW_ENTRIES(1, ENTRY(5, 0x006C0023));
        break;
    case 120:
        SHOW_ENTRIES(2, ENTRY(5, 0x006C0023), ENTRY(6, 0x006C0029));
        break;
    case 121:
        SHOW_ENTRIES(1, ENTRY(5, 0x006C0023));
        break;
    case 122:
        SHOW_ENTRIES(2, ENTRY(6, 0x006C0029), ENTRY(13, 0x006C0030));
        break;
    case 123:
        SHOW_ENTRIES(1, ENTRY(6, 0x006C0029));
        break;
    case 124:
        SHOW_ENTRIES(1, ENTRY(5, 0x006C0023));
        break;
    case 125:
        SHOW_ENTRIES(1, ENTRY(5, 0x006C0023));
        break;
    case 126:
        SHOW_ENTRIES(1, ENTRY(6, 0x006C0029));
        break;
    case 127:
        SHOW_ENTRIES(1, ENTRY(5, 0x001900E4));
        break;
    case 130:
        SHOW_ENTRIES(4,
            ENTRY(5, 0x00330031),
            ENTRY(11, 0x00410021),
            ENTRY(12, 0x0041001F),
            ENTRY(13, 0x006C0030));
        break;
    case 131:
        SHOW_ENTRIES(4,
            ENTRY(5, 0x00330031),
            ENTRY(11, 0x00410021),
            ENTRY(12, 0x00410020),
            ENTRY(13, 0x006C0030));
        break;
    case 132:
        SHOW_ENTRIES(3,
            ENTRY(5, 0x00330031),
            ENTRY(12, 0x0041001F),
            ENTRY(13, 0x006C0030));
        break;
    case 133:
        SHOW_ENTRIES(3,
            ENTRY(5, 0x00330031),
            ENTRY(12, 0x00410020),
            ENTRY(13, 0x006C0030));
        break;
    case 134:
        SHOW_ENTRIES(2, ENTRY(12, 0x0041001F), ENTRY(13, 0x006C0030));
        break;
    case 135:
        SHOW_ENTRIES(2, ENTRY(12, 0x00410020), ENTRY(13, 0x006C0030));
        break;
    case 136:
        SHOW_ENTRIES(2, ENTRY(5, 0x006C0023), ENTRY(6, 0x006C0029));
        break;
    case 137:
        SHOW_ENTRIES(3,
            ENTRY(5, 0x006C0023),
            ENTRY(6, 0x006C0029),
            ENTRY(13, 0x006C0030));
        break;
    case 138:
        SHOW_ENTRIES(1, ENTRY(13, 0x006C0030));
        break;
    case 139:
        SHOW_ENTRIES(1, ENTRY(5, 0x006C0029));
        break;
    case 140:
        SHOW_ENTRIES(1, ENTRY(5, 0x006C0029));
        break;
    case 141:
        SHOW_ENTRIES(2, ENTRY(5, 0x006C0029), ENTRY(13, 0x006C0030));
        break;
    case 142:
        SHOW_ENTRIES(3,
            ENTRY(11, 0x006C003A),
            ENTRY(5, 0x006C0029),
            ENTRY(13, 0x006C0030));
        break;
    case 143:
        SHOW_ENTRIES(1, ENTRY(5, 0x006C0023));
        break;
    case 144:
        SHOW_ENTRIES(1, ENTRY(5, 0x006C0023));
        break;
    case 145:
        SHOW_ENTRIES(2, ENTRY(6, 0x006C0023), ENTRY(5, 0x006C0029));
        break;
    case 146:
        SHOW_ENTRIES(2, ENTRY(6, 0x006C0023), ENTRY(5, 0x006C0029));
        break;
    case 147:
        SHOW_ENTRIES(1, ENTRY(5, 0x006C0029));
        break;
    case 148:
        SHOW_ENTRIES(2, ENTRY(6, 0x006C0023), ENTRY(5, 0x006C0029));
        break;
    case 149:
        SHOW_ENTRIES(2, ENTRY(6, 0x006C0023), ENTRY(5, 0x006C0029));
        break;
    case 150:
        SHOW_ENTRIES(1, ENTRY(5, 0x006C0029));
        break;
    case 151:
        SHOW_ENTRIES(3,
            ENTRY(6, 0x006C0023),
            ENTRY(5, 0x006C0029),
            ENTRY(13, 0x006C0030));
        break;
    case 152:
        SHOW_ENTRIES(1, ENTRY(5, 0x006C0029));
        break;
    case 153:
        SHOW_ENTRIES(1, ENTRY(5, 0x006C0029));
        break;
    case 154:
        SHOW_ENTRIES(3,
            ENTRY(5, 0x001A0068),
            ENTRY(6, 0x006C0029),
            ENTRY(13, 0x006C0030));
        break;
    case 155:
        SHOW_ENTRIES(1, ENTRY(6, 0x006C006D));
        break;
    case 156:
        SHOW_ENTRIES(1, ENTRY(5, 0x006C0029));
        break;
    case 157:
        SHOW_ENTRIES(2, ENTRY(5, 0x006C0029), ENTRY(13, 0x006C0030));
        break;
    case 158:
        SHOW_ENTRIES(1, ENTRY(5, 0x001900E4));
        break;
    case 159:
        SHOW_ENTRIES(3,
            ENTRY(6, 0x006C0023),
            ENTRY(5, 0x006C0029),
            ENTRY(13, 0x006C0030));
        break;
    case 128:
        func_001B7A90();
        break;
    case 129:
        func_001B7B20();
        break;
    default:
        func_001B7A90();
        break;
    }
}
