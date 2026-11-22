/* compiler: mwcc-3.0.1b198 */
#include "pes6/player_rating.h"

typedef struct {
    u8 bit_0 : 1;
    u8 bits_1_4 : 4;
    u8 bits_5_7 : 3;
} Flags00;

typedef struct {
    u8 bits_0_1 : 2;
    u8 bits_2_3 : 2;
    u8 : 4;
} Flags01;

typedef struct {
    u8 bits_0_2 : 3;
    u8 bits_3_5 : 3;
    u8 bits_6_7 : 2;
} Flags1C;

typedef struct {
    u8 bit_0 : 1;
    u8 bit_1 : 1;
    u8 bit_2 : 1;
    u8 bit_3 : 1;
    u8 bit_4 : 1;
    u8 bit_5 : 1;
    u8 bit_6 : 1;
    u8 bit_7 : 1;
} Flags1E;

typedef struct {
    u8 : 7;
    u8 bit_7 : 1;
} Flags1F;

typedef struct {
    u8 bit_0 : 1;
    u8 bit_1 : 1;
    u8 bit_2 : 1;
    u8 : 5;
} Flags23;

typedef struct {
    u8 : 5;
    u8 bit_5 : 1;
    u8 bits_6_7 : 2;
} Flags21;
typedef struct {
    Flags00 flags00;
    Flags01 flags01;
    Pes6PlayerRating ratings[26];
    Flags1C flags1C;
    Flags1C flags1D;
    Flags1E flags1E;
    Flags1F flags1F;
    Flags1F flags20;
    Flags21 flags21;
    u8 pad22;
    Flags23 flags23;
    u8 unknown[8];
} PlayerAttributes;

typedef struct {
    u8 unknown[0x68];
    PlayerAttributes attrs[2];
    u8 remainder[0x288];
} SquadPresetPlayer;

extern SquadPresetPlayer Pes6MatchSquads[2][32];
extern s32 func_002631D0(void);

#define SET_ATTRIBUTES(attrs, rating, enabled)                                                     \
    do {                                                                                           \
        (attrs).flags00.bit_0 = 0;                                                                 \
        (attrs).flags00.bits_1_4 = 0;                                                              \
        (attrs).flags00.bits_5_7 = 0;                                                              \
        (attrs).flags01.bits_0_1 = 0;                                                              \
        (attrs).flags01.bits_2_3 = 0;                                                              \
        (attrs).ratings[0].value = rating;                                                         \
        (attrs).ratings[1].value = rating;                                                         \
        (attrs).ratings[0].flag = enabled;                                                         \
        (attrs).ratings[1].flag = enabled;                                                         \
        (attrs).ratings[2].value = rating;                                                         \
        (attrs).ratings[3].value = rating;                                                         \
        (attrs).ratings[4].value = rating;                                                         \
        (attrs).ratings[5].value = rating;                                                         \
        (attrs).ratings[2].flag = enabled;                                                         \
        (attrs).ratings[3].flag = enabled;                                                         \
        (attrs).ratings[4].flag = enabled;                                                         \
        (attrs).ratings[5].flag = enabled;                                                         \
        (attrs).ratings[6].value = rating;                                                         \
        (attrs).ratings[7].value = rating;                                                         \
        (attrs).ratings[8].value = rating;                                                         \
        (attrs).ratings[9].value = rating;                                                         \
        (attrs).ratings[6].flag = enabled;                                                         \
        (attrs).ratings[7].flag = enabled;                                                         \
        (attrs).ratings[8].flag = enabled;                                                         \
        (attrs).ratings[9].flag = enabled;                                                         \
        (attrs).ratings[10].value = rating;                                                        \
        (attrs).ratings[11].value = rating;                                                        \
        (attrs).ratings[12].value = rating;                                                        \
        (attrs).ratings[13].value = rating;                                                        \
        (attrs).ratings[10].flag = enabled;                                                        \
        (attrs).ratings[11].flag = enabled;                                                        \
        (attrs).flags1D.bits_6_7 = 0;                                                              \
        (attrs).ratings[14].value = rating;                                                        \
        (attrs).ratings[15].value = rating;                                                        \
        (attrs).ratings[16].value = rating;                                                        \
        (attrs).ratings[17].value = rating;                                                        \
        (attrs).ratings[14].flag = enabled;                                                        \
        (attrs).ratings[15].flag = enabled;                                                        \
        (attrs).ratings[16].flag = enabled;                                                        \
        (attrs).ratings[17].flag = enabled;                                                        \
        (attrs).ratings[18].value = rating;                                                        \
        (attrs).ratings[19].value = rating;                                                        \
        (attrs).ratings[20].value = rating;                                                        \
        (attrs).flags1C.bits_0_2 = 7;                                                              \
        (attrs).ratings[18].flag = enabled;                                                        \
        (attrs).ratings[19].flag = enabled;                                                        \
        (attrs).ratings[20].flag = enabled;                                                        \
        (attrs).ratings[21].flag = enabled;                                                        \
        (attrs).ratings[22].value = rating;                                                        \
        (attrs).ratings[23].value = rating;                                                        \
        (attrs).ratings[24].value = rating;                                                        \
        (attrs).ratings[25].value = rating;                                                        \
        (attrs).ratings[22].flag = enabled;                                                        \
        (attrs).ratings[23].flag = enabled;                                                        \
        (attrs).ratings[24].flag = enabled;                                                        \
        (attrs).ratings[25].flag = enabled;                                                        \
        (attrs).ratings[21].value = rating;                                                        \
        (attrs).flags1D.bits_0_2 = 7;                                                              \
        (attrs).flags1D.bits_3_5 = 7;                                                              \
        (attrs).flags1C.bits_3_5 = 7;                                                              \
        (attrs).flags1C.bits_6_7 = 0;                                                              \
        (attrs).ratings[13].flag = enabled;                                                        \
        (attrs).ratings[12].flag = enabled;                                                        \
        (attrs).flags1E.bit_0 = enabled;                                                           \
        (attrs).flags1E.bit_1 = enabled;                                                           \
        (attrs).flags1E.bit_2 = enabled;                                                           \
        (attrs).flags1E.bit_3 = enabled;                                                           \
        (attrs).flags1E.bit_4 = enabled;                                                           \
        (attrs).flags1E.bit_5 = enabled;                                                           \
        (attrs).flags1E.bit_6 = enabled;                                                           \
        (attrs).flags1E.bit_7 = enabled;                                                           \
        (attrs).flags20.bit_7 = enabled;                                                           \
        (attrs).flags1F.bit_7 = enabled;                                                           \
        (attrs).flags23.bit_0 = enabled;                                                           \
        (attrs).flags21.bit_5 = enabled;                                                           \
        (attrs).flags23.bit_1 = enabled;                                                           \
        (attrs).flags23.bit_2 = enabled;                                                           \
        (attrs).flags21.bits_6_7 = enabled;                                                        \
    } while (0)

void func_00366830(void) {
    s32 i;
    s32 mode = func_002631D0();
    switch (mode) {
    default:
        return;
    case 5:
    case 6:
    case 9: {
        for (i = 0; i < 32; ++i) {
            SET_ATTRIBUTES(Pes6MatchSquads[0][i].attrs[0], 99, 1);
            SET_ATTRIBUTES(Pes6MatchSquads[0][i].attrs[1], 99, 1);
            SET_ATTRIBUTES(Pes6MatchSquads[1][i].attrs[0], 50, 0);
            SET_ATTRIBUTES(Pes6MatchSquads[1][i].attrs[1], 50, 0);
        }
        break;
    }
    }
}
