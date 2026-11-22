/* compiler: mwcc-3.0.1b210 */
#include "pes6/formation_panel.h"

typedef struct {
    u8 value : 7;
    u8 enabled : 1;
} FormationRating;

typedef struct {
    u8 side : 1;
    u8 : 7;
    u8 : 4;
    u8 position : 4;
    FormationRating ratings[26];
    u8 : 3;
    u8 variant : 3;
    u8 style : 2;
    u8 level : 3;
    u8 strength : 3;
    u8 sideMode : 2;
    struct { u8 bit0:1, bit1:1, bit2:1, bit3:1, bit4:1, bit5:1, bit6:1, bit7:1; } traits;
    u8 pad1F;
    u8 : 7;
    u8 extraTrait : 1;
    u8 pad21[3];
    u8 : 2;
    u8 height : 6;
    u8 pad25[5];
    u8 age : 5;
    u8 : 3;
} FormationPlayer;

#define SHOW_RATING(field) \
    func_008DC850(&rows[next++], 3, players[0]->field, players[1] ? players[1]->field : 255)

/* The formation screen shows a packed player record alongside an optional comparison. */
void func_008DA4B0(FormationPanelRow *rows, const FormationPlayer **players, const u8 **otherRatings, s32 page) {
    s32 i;
    s32 next;

    for (i = 0; i < 25; i++) {
        rows[i].kind = 12;
        rows[i].value = 0;
        rows[i].difference = 0;
    }
    next = 0;
    switch (page) {
    case 0:
        if (players[0]) {
            func_008DC850(&rows[0], 5, players[0]->height + 148, 255);
            func_008DC850(&rows[1], 6, players[0]->age + 15, 255);
            func_008DC850(&rows[2], 9, players[0]->side, 255);
        }
        break;
    case 1:
        func_008DC850(&rows[next++], 1, (players[0] ? players[0]->ratings[0].enabled << 7 : 0), 255);
        func_008DC850(&rows[next++], 1, (players[0] ? players[0]->ratings[1].enabled << 7 : 0) + 2, 255);
        func_008DC850(&rows[next++], 1, (players[0] ? players[0]->ratings[2].enabled << 7 : 0) + 3, 255);
        func_008DC850(&rows[next++], 1, (players[0] ? players[0]->ratings[3].enabled << 7 : 0) + 4, 255);
        func_008DC850(&rows[next++], 1, (players[0] ? players[0]->ratings[4].enabled << 7 : 0) + 5, 255);
        func_008DC850(&rows[next++], 1, (players[0] ? players[0]->ratings[5].enabled << 7 : 0) + 6, 255);
        func_008DC850(&rows[next++], 1, (players[0] ? players[0]->ratings[6].enabled << 7 : 0) + 7, 255);
        func_008DC850(&rows[next++], 1, (players[0] ? players[0]->ratings[7].enabled << 7 : 0) + 8, 255);
        func_008DC850(&rows[next++], 1, (players[0] ? players[0]->ratings[8].enabled << 7 : 0) + 9, 255);
        func_008DC850(&rows[next++], 1, (players[0] ? players[0]->ratings[9].enabled << 7 : 0) + 10, 255);
        func_008DC850(&rows[next++], 1, (players[0] ? players[0]->ratings[10].enabled << 7 : 0) + 11, 255);
        func_008DC850(&rows[next++], 1, (players[0] ? players[0]->ratings[11].enabled << 7 : 0) + 12, 255);
        if (players[0]) {
            switch (players[0]->sideMode) {
            case 0:
                if (players[0]->side) {
                    func_008DC850(&rows[next++], 2, 1, 255);
                } else {
                    func_008DC850(&rows[next++], 2, 0, 255);
                }
                break;
            case 1:
                if (players[0]->side) {
                    func_008DC850(&rows[next++], 2, 0, 255);
                } else {
                    func_008DC850(&rows[next++], 2, 1, 255);
                }
                break;
            case 2:
                func_008DC850(&rows[next++], 2, 2, 255);
                break;
            }
        }
        break;
    case 2:
        if (players[0]) {
            func_008DC850(&rows[next++], 0, players[0]->position, 255);
            SHOW_RATING(ratings[0].value);
            SHOW_RATING(ratings[1].value);
            SHOW_RATING(ratings[2].value);
            SHOW_RATING(ratings[3].value);
            SHOW_RATING(ratings[4].value);
            SHOW_RATING(ratings[5].value);
            SHOW_RATING(ratings[6].value);
            SHOW_RATING(ratings[7].value);
            SHOW_RATING(ratings[8].value);
            SHOW_RATING(ratings[9].value);
        } else {
            for (i = 0; i < 11; i++)
                func_008DC850(&rows[next++], 11, 0, 255);
        }
        break;
    case 3:
        if (players[0]) {
            SHOW_RATING(ratings[10].value);
            SHOW_RATING(ratings[11].value);
            SHOW_RATING(ratings[12].value);
            SHOW_RATING(ratings[13].value);
            SHOW_RATING(ratings[14].value);
            SHOW_RATING(ratings[15].value);
            SHOW_RATING(ratings[16].value);
            SHOW_RATING(ratings[17].value);
            SHOW_RATING(ratings[18].value);
            SHOW_RATING(ratings[19].value);
            SHOW_RATING(ratings[20].value);
        } else {
            for (i = 0; i < 11; i++)
                func_008DC850(&rows[next++], 11, 0, 255);
        }
        break;
    case 4:
        if (players[0]) {
            SHOW_RATING(ratings[22].value);
            SHOW_RATING(ratings[23].value);
            SHOW_RATING(ratings[24].value);
            SHOW_RATING(ratings[25].value);
            SHOW_RATING(ratings[21].value);
            func_008DC850(&rows[next++], 4, players[0]->level, players[1] ? players[1]->level : 255);
            func_008DC850(&rows[next++], 4, players[0]->strength, players[1] ? players[1]->strength : 255);
            func_008DC850(&rows[next++], 4, players[0]->variant, players[1] ? players[1]->variant : 255);
            func_008DC850(&rows[next++], 8, players[0]->style, 255);
            func_008DC850(&rows[next++], 7, players[0]->ratings[14].enabled, 255);
            func_008DC850(&rows[next++], 7, players[0]->ratings[15].enabled, 255);
        } else {
            for (i = 0; i < 11; i++)
                func_008DC850(&rows[next++], 11, 0, 255);
        }
        break;
    case 5:
        if (players[0]) {
            func_008DC850(&rows[next++], 7, players[0]->ratings[16].enabled, 255);
            func_008DC850(&rows[next++], 7, players[0]->ratings[17].enabled, 255);
            func_008DC850(&rows[next++], 7, players[0]->ratings[18].enabled, 255);
            func_008DC850(&rows[next++], 7, players[0]->ratings[19].enabled, 255);
            func_008DC850(&rows[next++], 7, players[0]->ratings[20].enabled, 255);
            func_008DC850(&rows[next++], 7, players[0]->ratings[21].enabled, 255);
            func_008DC850(&rows[next++], 7, players[0]->ratings[22].enabled, 255);
            func_008DC850(&rows[next++], 7, players[0]->ratings[23].enabled, 255);
            func_008DC850(&rows[next++], 7, players[0]->ratings[24].enabled, 255);
            func_008DC850(&rows[next++], 7, players[0]->ratings[25].enabled, 255);
            func_008DC850(&rows[next++], 7, players[0]->ratings[13].enabled, 255);
        } else {
            for (i = 0; i < 11; i++)
                func_008DC850(&rows[next++], 11, 0, 255);
        }
        break;
    case 6:
        if (players[0]) {
            func_008DC850(&rows[next++], 7, players[0]->ratings[12].enabled, 255);
            func_008DC850(&rows[next++], 7, players[0]->traits.bit0, 255);
            func_008DC850(&rows[next++], 7, players[0]->traits.bit1, 255);
            func_008DC850(&rows[next++], 7, players[0]->traits.bit2, 255);
            func_008DC850(&rows[next++], 7, players[0]->traits.bit3, 255);
            func_008DC850(&rows[next++], 7, players[0]->traits.bit4, 255);
            func_008DC850(&rows[next++], 7, players[0]->traits.bit5, 255);
            func_008DC850(&rows[next++], 7, players[0]->traits.bit6, 255);
            func_008DC850(&rows[next++], 7, players[0]->traits.bit7, 255);
            func_008DC850(&rows[next++], 7, players[0]->extraTrait, 255);
        } else {
            for (i = 0; i < 10; i++)
                func_008DC850(&rows[next++], 11, 0, 255);
        }
        break;
    case 7:
        if (players[0]) {
            SHOW_RATING(ratings[17].value);
            SHOW_RATING(ratings[18].value);
            SHOW_RATING(ratings[12].value);
            SHOW_RATING(ratings[13].value);
            SHOW_RATING(ratings[14].value);
            SHOW_RATING(ratings[15].value);
            func_008DC850(&rows[next++], 10, players[0]->side, 255);
            func_008DC850(&rows[next++], 7, players[0]->ratings[12].enabled, 255);
        } else {
            for (i = 0; i < 8; i++)
                func_008DC850(&rows[next++], 11, 0, 255);
        }
        break;
    case 8:
        if (players[0]) {
            func_008DC850(&rows[next++], 0, players[0]->position, players[1] ? players[1]->position : 255);
            SHOW_RATING(ratings[0].value);
            SHOW_RATING(ratings[1].value);
            SHOW_RATING(ratings[2].value);
            SHOW_RATING(ratings[3].value);
            SHOW_RATING(ratings[4].value);
            SHOW_RATING(ratings[5].value);
            SHOW_RATING(ratings[6].value);
            SHOW_RATING(ratings[7].value);
            SHOW_RATING(ratings[8].value);
            SHOW_RATING(ratings[9].value);
            SHOW_RATING(ratings[10].value);
            SHOW_RATING(ratings[11].value);
            SHOW_RATING(ratings[12].value);
            SHOW_RATING(ratings[13].value);
            SHOW_RATING(ratings[14].value);
            SHOW_RATING(ratings[15].value);
            SHOW_RATING(ratings[16].value);
            SHOW_RATING(ratings[17].value);
            SHOW_RATING(ratings[18].value);
            SHOW_RATING(ratings[19].value);
            SHOW_RATING(ratings[20].value);
            SHOW_RATING(ratings[22].value);
            SHOW_RATING(ratings[23].value);
        } else {
            for (i = 0; i < 24; i++)
                func_008DC850(&rows[next++], 11, 0, 255);
        }
        break;
    case 9:
        if (players[0]) {
            SHOW_RATING(ratings[24].value);
            SHOW_RATING(ratings[25].value);
            SHOW_RATING(ratings[21].value);
            func_008DC850(&rows[next++], 4, players[0]->level, players[1] ? players[1]->level : 255);
            func_008DC850(&rows[next++], 4, players[0]->strength, players[1] ? players[1]->strength : 255);
            func_008DC850(&rows[next++], 4, players[0]->variant, players[1] ? players[1]->variant : 255);
            func_008DC850(&rows[next++], 8, players[0]->style, 255);
        } else {
            for (i = 0; i < 7; i++)
                func_008DC850(&rows[next++], 11, 0, 255);
        }
        break;
    case 10:
        if (players[0]) {
            func_008DC850(&rows[next++], 7, players[0]->ratings[14].enabled, 255);
            func_008DC850(&rows[next++], 7, players[0]->ratings[15].enabled, 255);
            func_008DC850(&rows[next++], 7, players[0]->ratings[16].enabled, 255);
            func_008DC850(&rows[next++], 7, players[0]->ratings[17].enabled, 255);
            func_008DC850(&rows[next++], 7, players[0]->ratings[18].enabled, 255);
            func_008DC850(&rows[next++], 7, players[0]->ratings[19].enabled, 255);
            func_008DC850(&rows[next++], 7, players[0]->ratings[20].enabled, 255);
            func_008DC850(&rows[next++], 7, players[0]->ratings[21].enabled, 255);
            func_008DC850(&rows[next++], 7, players[0]->ratings[22].enabled, 255);
            func_008DC850(&rows[next++], 7, players[0]->ratings[23].enabled, 255);
            func_008DC850(&rows[next++], 7, players[0]->ratings[24].enabled, 255);
            func_008DC850(&rows[next++], 7, players[0]->ratings[25].enabled, 255);
            func_008DC850(&rows[next++], 7, players[0]->ratings[13].enabled, 255);
            func_008DC850(&rows[next++], 7, players[0]->ratings[12].enabled, 255);
            func_008DC850(&rows[next++], 7, players[0]->traits.bit0, 255);
            func_008DC850(&rows[next++], 7, players[0]->traits.bit1, 255);
            func_008DC850(&rows[next++], 7, players[0]->traits.bit2, 255);
            func_008DC850(&rows[next++], 7, players[0]->traits.bit3, 255);
            func_008DC850(&rows[next++], 7, players[0]->traits.bit4, 255);
            func_008DC850(&rows[next++], 7, players[0]->traits.bit5, 255);
            func_008DC850(&rows[next++], 7, players[0]->traits.bit6, 255);
            func_008DC850(&rows[next++], 7, players[0]->traits.bit7, 255);
            func_008DC850(&rows[next++], 7, players[0]->extraTrait, 255);
        } else {
            for (i = 0; i < 23; i++)
                func_008DC850(&rows[next++], 11, 0, 255);
        }
        break;
    case 11:
        if (otherRatings[0]) {
            func_008DC850(&rows[next++], 3, otherRatings[0][2], otherRatings[1] ? otherRatings[1][2] : 255);
            func_008DC850(&rows[next++], 3, otherRatings[0][3], otherRatings[1] ? otherRatings[1][3] : 255);
            func_008DC850(&rows[next++], 3, otherRatings[0][4], otherRatings[1] ? otherRatings[1][4] : 255);
            func_008DC850(&rows[next++], 3, otherRatings[0][5], otherRatings[1] ? otherRatings[1][5] : 255);
            func_008DC850(&rows[next++], 3, otherRatings[0][6], otherRatings[1] ? otherRatings[1][6] : 255);
            func_008DC850(&rows[next++], 3, otherRatings[0][7], otherRatings[1] ? otherRatings[1][7] : 255);
            func_008DC850(&rows[next++], 3, otherRatings[0][8], otherRatings[1] ? otherRatings[1][8] : 255);
            func_008DC850(&rows[next++], 3, otherRatings[0][9], otherRatings[1] ? otherRatings[1][9] : 255);
            func_008DC850(&rows[next++], 3, otherRatings[0][10], otherRatings[1] ? otherRatings[1][10] : 255);
            func_008DC850(&rows[next++], 3, otherRatings[0][11], otherRatings[1] ? otherRatings[1][11] : 255);
            func_008DC850(&rows[next++], 3, otherRatings[0][12], otherRatings[1] ? otherRatings[1][12] : 255);
        } else {
            for (i = 0; i < 11; i++)
                func_008DC850(&rows[next++], 11, 0, 255);
        }
        break;
    }
}
