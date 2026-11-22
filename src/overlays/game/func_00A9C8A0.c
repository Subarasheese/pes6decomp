/* compiler: mwcc-3.0.1b151 */
#include "types.h"
typedef struct {
    u8 reserved00[0x2d];
    u8 mirrored;
    u8 reserved2e[2];
    u16 clip;
} TurnAnimation;
typedef struct {
    u8 reserved00[4];
    TurnAnimation *motion;
    u8 reserved08[0x14];
    s32 speed;
    u8 reserved20[6];
    u16 heading, travel;
    u8 reserved2a[0xe2];
    u16 intended;
} TurnPlayer;
extern u16 func_009B32D0(u16 target, u16 current, u16 step);
extern u16 func_009B3070(u16 current, u16 previous);

extern s32 func_00BC03A0(u16 clip);
extern u8 D_00591F24[];

#define TURN_SIGN(player) ((player)->motion->mirrored == 0 ? 1 : -1)

u16 func_00A9C8A0(TurnPlayer *player, u16 direction) {
    u16 adjusted;
    s32 mirrorSign;
    switch (player->motion->clip) {
    case 0x34c:
    case 0x346:
        return (s32)func_009B32D0(direction, player->heading - TURN_SIGN(player) * 0x2c00, 0xc00);
    case 0xd:
    case 0xf7:
        return (s32)func_009B32D0(direction, player->heading + (TURN_SIGN(player) * 0x1000),
                                  0x1c00);
    case 0x227:
    case 0xc:
        return (s32)func_009B32D0(direction, player->heading + (TURN_SIGN(player) * 0x1800),
                                  0x1800);
    case 0x18b:
        return (s32)func_009B32D0(direction, player->travel, 0x1000);
    case 0x29c:
    case 0x107:
    case 0x225:
        return (s32)func_009B32D0(direction, player->heading + (TURN_SIGN(player) * 0x6000),
                                  0x1800);
    case 0xff:
        goto reflect_heading;
    case 0xec:
        return (s32)func_009B32D0(direction, player->heading + (TURN_SIGN(player) * 0x2800),
                                  0x1400);
    case 0x248:
    case 0xcb:
    case 0x2d2:
        return (s32)func_009B32D0(direction, player->heading + (TURN_SIGN(player) * 0x3800),
                                  0x1800);
    case 0x2b2:
        return (s32)func_009B32D0(direction, player->heading + 0x8000, 0x1800);
    case 0x103:
        return (s32)func_009B32D0(direction, player->heading + (TURN_SIGN(player) * 0x3800),
                                  0x1800);
    case 0x104:
        return (s32)func_009B32D0(direction, player->heading + (TURN_SIGN(player) * 0x4800),
                                  0x1800);
    case 0xdd:
        return (s32)func_009B32D0(direction, player->heading + (TURN_SIGN(player) * 0x1c00),
                                  0x1800);
    case 0x105:
        return (s32)func_009B32D0(direction, player->heading + (TURN_SIGN(player) * 0x6800),
                                  0x1800);
    case 0x2ac:
        return (s32)func_009B32D0(direction, player->heading - TURN_SIGN(player) * 0x1000, 0x2800);
    case 0x2af:
        return (s32)func_009B32D0(direction, player->heading - TURN_SIGN(player) * 0x2000, 0x1800);
    case 0xdf:
    case 10:
        return (s32)func_009B32D0(direction, player->heading + (TURN_SIGN(player) * 0x2a00),
                                  0x1a00);
    case 0x1c1:
        return (s32)func_009B32D0(direction, player->heading - TURN_SIGN(player) * 0x2800, 0x1000);
    case 0xe8:
        return (s32)func_009B32D0(direction, player->heading + (TURN_SIGN(player) * 0x6000),
                                  0x1800);
    case 0xe2:
        return (s32)func_009B32D0(direction, player->heading + (TURN_SIGN(player) * 0x2000),
                                  0x1800);
    case 0x307:
    case 0x30b:
        return (s32)func_009B32D0(direction, player->heading + (TURN_SIGN(player) * 0x2000),
                                  0x1800);
    case 0xd0:
    case 0xfc:
    case 0xd4:
    case 0x199:
    case 0x116:
        return (s32)func_009B32D0(direction, player->heading + (TURN_SIGN(player) * 0x2800),
                                  0x2000);
    case 0xe9:
    case 0x25:
        return (s32)func_009B32D0(direction, player->heading + (TURN_SIGN(player) * 0x3800),
                                  0x2000);
    case 0xe6:
    case 0x106:
    case 0xf8:
        return (s32)func_009B32D0(direction, player->heading + (TURN_SIGN(player) * 0x1800),
                                  0x2000);
    case 0xcc:
        return (s32)func_009B32D0(direction, player->heading + (TURN_SIGN(player) * 0x800), 0x1c00);
    case 0x343:
    case 0xeb:
    case 0x102:
    case 0xf0:
    case 0xfa:
    case 0xf9:
    case 0xee:
    case 0xd8:
    case 0xe4:
    case 0xe0:
    case 0x24a:
    case 0xe7:
    case 0xdc:
    case 0xda:
    case 0xce:
    case 0xd2:
    case 0xc9:
    case 0xf:
        return (s32)func_009B32D0(direction, player->heading + (TURN_SIGN(player) * 0x800), 0x1800);
    case 0x389:
    case 0x1ca:
    case 0xd1:
        return (s32)func_009B32D0(direction, player->heading + (TURN_SIGN(player) * 0x800), 0x2800);
    case 0xf4:
        return (s32)func_009B32D0(direction, player->heading - TURN_SIGN(player) * 0x800, 0x2000);
    case 0xd6:
    case 0xf5:
    case 0xd5:
    case 0xf6:
    case 0xe3:
    case 0xd7:
        return (s32)func_009B32D0(direction, player->heading - TURN_SIGN(player) * 0x1800, 0x1800);
    case 0x30a:
        return (s32)func_009B32D0(direction, player->heading + (TURN_SIGN(player) * 0x800), 0xc00);
    case 0x308:
    case 0x305:
    case 0x233:
    case 0x306:
    case 0x366:
        return (s32)func_009B32D0(direction, player->heading, 0x1400);
    case 0x203:
    case 399:
        return (s32)func_009B32D0(direction, player->heading, 0x2800);
    case 0xca:
    case 0xf1:
    case 0xde:
    case 0xfb:
    case 0xe1:
    case 0xd9:
    case 0xf3:
    case 0xcf:
    case 0xd3:
        return (s32)func_009B32D0(direction, player->heading + (TURN_SIGN(player) * 0x1800),
                                  0x1800);
    case 0xb3:
    case 0xb4:
        return (s32)func_009B32D0(direction, player->heading + 0x8000, 0x1800);
    case 0x18d:
        return (s32)func_009B32D0(direction, player->heading + (TURN_SIGN(player) * 0x7000),
                                  0x1800);
    default:
        switch (func_00BC03A0(player->motion->clip)) {
        case 0x1c:
            return (s32)func_009B32D0(direction, player->heading + TURN_SIGN(player) * 0x800,
                                      0x1800);
        case 0:
        case 6:
            if (D_00591F24[0] != 1) {
                return (s32)func_009B32D0(direction, player->heading + TURN_SIGN(player) * 0x800,
                                          0x1800);
            }
            return direction;
        case 0x19:
            return direction;
        }

        return direction;
    }
reflect_heading:
    adjusted = func_009B32D0(direction, player->heading, 0x4c00);
    mirrorSign = TURN_SIGN(player);
    adjusted = func_009B3070(player->heading, adjusted);
    mirrorSign *= adjusted;
    direction = (u16)(player->heading + mirrorSign);
    return direction;
}
