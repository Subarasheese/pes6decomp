/* compiler: mwcc-3.0.1b151 */
#include "types.h"
#include "pes6/match_player.h"
extern s32 func_00BBB8C0(s32);
extern s32 func_002BDE70(u8, u8, s32, s32, s32);
u8 func_00B443D0(Pes6MatchPlayer *actor) {
    u8 result = 0x74;
    const u8 *record = (const u8 *)&Pes6MatchSquads[actor->team].players[actor->slot];
    u8 primary = (record[0x87] & 0x7f), secondary = (record[0x88] & 0x7f);
    s32 allowed;
    switch ((u8)(s16)func_002BDE70(actor->team, actor->slot, 0, 10, 1)) {
    case 3:
        allowed = 1;
        break;
    default:
        if (func_00BBB8C0(100) < 80)
            allowed = 1;
        else
            allowed = 0;
        break;
    }
    if (allowed) {
        int choice;
        if (func_00BBB8C0(100) <= 64)
            choice = (u8)primary;
        else
            choice = (u8)secondary;
        switch ((u8)choice) {
        case 1:
            result = 0x46;
            break;
        case 2: {
            s32 draw = func_00BBB8C0(3);
            if (draw == 1)
                result = 0x19;
            else if (draw != 0)
                result = 0x1a;
            else
                result = 0x3d;
        } break;
        case 3:
            result = 0x34;
            break;
        case 4:
            result = 0x1f;
            break;
        case 5:
            result = 0x20;
            break;
        case 6:
            result = 0x23;
            break;
        case 7:
            result = 0x2b;
            break;
        case 8:
            result = 0x26;
            break;
        case 9:
            result = 0x1d;
            break;
        case 10:
            result = 0x3e;
            break;
        case 11:
            result = 0x39;
            break;
        case 12:
            result = 0x38;
            break;
        case 13:
            result = 0x2f;
            break;
        case 14:
            result = 0x30;
            break;
        case 15:
            result = 0x49;
            break;
        case 16:
            result = 0x36;
            break;
        case 17:
            result = 0x37;
            break;
        case 18:
            result = 0x2e;
            break;
        case 19:
            result = 0x35;
            break;
        case 20:
            result = 0x3f;
            break;
        case 21:
            result = 0x33;
            break;
        case 22:
            result = 0x31;
            break;
        case 23:
            result = 0x2d;
            break;
        case 24:
            result = 0x27;
            break;
        case 25:
            result = 0x3a;
            break;
        case 26:
            result = 0x40;
            break;
        case 27:
            result = 0x48;
            break;
        case 28:
            result = 0x14;
            break;
        case 29:
            result = 0x4a;
            break;
        case 30:
            result = 0x41;
            break;
        case 31:
            result = 0x2c;
            break;
        case 32:
            result = 0x47;
            break;
        case 33:
            result = 0x1b;
            break;
        case 34:
            result = 0x29;
            break;
        case 35:
            result = 0x21;
            break;
        case 36:
            result = 0x25;
            break;
        case 37:
            result = 0x3b;
            break;
        case 38:
            result = 0x4d;
            break;
        case 39:
            result = 0x24;
            break;
        case 40:
            result = 0x32;
            break;
        case 41:
            result = 0x16;
            break;
        case 42:
            result = 0x22;
            break;
        case 43:
            result = 0xb;
            break;
        case 44:
            result = 0xf;
            break;
        case 45: {
            s32 draw = func_00BBB8C0(3);
            if (draw == 1)
                result = 0x11;
            else if (draw != 0)
                result = 0x12;
            else
                result = 0x10;
        } break;
        case 46:
            result = 0x45;
            break;
        case 47:
            result = 0x44;
            break;
        case 48:
            result = 0x50;
            break;
        case 49:
            result = 0x59;
            break;
        case 50:
            result = 0x51;
            break;
        case 51:
            result = 0x5b;
            break;
        case 52:
            result = 0x58;
            break;
        case 53:
            result = 0x5c;
            break;
        case 54:
            result = 0x55;
            break;
        case 55:
            result = 0x53;
            break;
        case 56:
            result = 0x56;
            break;
        case 57:
            result = 0x5a;
            break;
        case 58:
            result = 0x54;
            break;
        case 59:
            result = 0x4e;
            break;
        case 60:
            result = 0x4f;
            break;
        case 61:
            result = 0x52;
            break;
        case 62:
            result = 0x57;
            break;
        case 63:
            result = 0x5d;
            break;
        case 64:
            result = 0x5e;
            break;
        case 65:
            result = 0x5f;
            break;
        case 66:
            result = 0x60;
            break;
        case 67:
            result = 0x61;
            break;
        case 68:
            result = 0x62;
            break;
        case 69:
            result = 0x64;
            break;
        case 70:
            result = 0x66;
            break;
        case 71:
            result = 0x67;
            break;
        case 72:
            result = 0x65;
            break;
        case 73:
            result = 0x63;
            break;
        case 74:
            result = 0x71;
            break;
        case 75:
            result = 0x70;
            break;
        case 76:
            result = 0x73;
            break;
        default:
            result = 0x74;
            break;
        }
    }
    return result;
}
