/* compiler: mwcc-3.0.1b151 */
#include "types.h"
extern u8 D_00CBD8AA[], D_00CBD8B3[];
static inline void recordEvent(u32 slot, s32 level, u8 payload) {
    D_00CBD8AA[slot] = level;
    D_00CBD8B3[slot] = payload;
}
void func_00C01150(s32 event, s32 level, u8 payload) {
    if (event >= 46)
        event = 0;
    if (level > 12)
        level = 12;
    switch (event) {
    case 0:
        recordEvent(0, level, payload);
        break;
    case 1:
        recordEvent(0, level, payload);
        break;
    case 2:
        recordEvent(1, level, payload);
        break;
    case 3:
        recordEvent(1, level, payload);
        break;
    case 4:
        recordEvent(0, level, payload);
        break;
    case 5:
        recordEvent(1, level, payload);
        break;
    case 6:
        recordEvent(1, level, payload);
        break;
    case 7:
        recordEvent(8, level, payload);
        break;
    case 8:
        recordEvent(1, level, payload);
        break;
    case 9:
        recordEvent(1, level, payload);
        break;
    case 10:
        recordEvent(0, level, payload);
        break;
    case 11:
        recordEvent(2, level, payload);
        break;
    case 12:
        recordEvent(2, level, payload);
        break;
    case 13:
        recordEvent(2, level, payload);
        break;
    case 14:
        recordEvent(2, level, payload);
        break;
    case 15:
        recordEvent(2, level, payload);
        break;
    case 16:
        recordEvent(2, level, payload);
        break;
    case 17:
        recordEvent(2, level, payload);
        break;
    case 18:
        recordEvent(2, level, payload);
        break;
    case 19:
        recordEvent(1, level, payload);
        break;
    case 20:
        recordEvent(3, level, payload);
        break;
    case 21:
        recordEvent(3, level, payload);
        break;
    case 22:
        recordEvent(3, level, payload);
        break;
    case 23:
        recordEvent(3, level, payload);
        break;
    case 24:
        recordEvent(7, level, payload);
        break;
    case 25:
        recordEvent(7, level, payload);
        break;
    case 26:
        recordEvent(7, level, payload);
        break;
    case 27:
        recordEvent(7, level, payload);
        break;
    case 28:
        recordEvent(4, level, payload);
        break;
    case 29:
        recordEvent(4, level, payload);
        break;
    case 30:
        recordEvent(5, level, payload);
        break;
    case 31:
        recordEvent(6, level, payload);
        break;
    case 32:
        recordEvent(6, level, payload);
        break;
    case 33:
        recordEvent(7, level, payload);
        break;
    case 34:
        recordEvent(7, level, payload);
        break;
    case 35:
        recordEvent(7, level, payload);
        break;
    case 36:
        recordEvent(7, level, payload);
        break;
    case 37:
        recordEvent(7, level, payload);
        break;
    case 38:
        recordEvent(7, level, payload);
        break;
    case 39:
        recordEvent(7, level, payload);
        break;
    case 40:
        recordEvent(7, level, payload);
        break;
    case 41:
        recordEvent(7, level, payload);
        break;
    case 42:
        recordEvent(7, level, payload);
        break;
    case 43:
        recordEvent(7, level, payload);
        break;
    case 44:
        recordEvent(8, level, payload);
        break;
    case 45:
        recordEvent(0, level, payload);
        break;
    }
}
