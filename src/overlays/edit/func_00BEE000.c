/* compiler: mwcc-3.0.1b198 */
#include "pes6/edit_player_sort.h"

typedef struct {
    u8 pad00[4];
    u16 *players;
    u8 attribute;
    u8 direction;
} EditSortRequest;

typedef s32 EditPlayerComparator(const u16 *, const u16 *);
extern void func_001C6158(void *, u32, u32, EditPlayerComparator *);
extern EditPlayerComparator func_00BEDFC0, func_00BEDF80;
extern EditPlayerComparator func_00BEDE90, func_00BEDDA0;
extern EditPlayerComparator func_00BED850, func_00BED830;
extern EditPlayerComparator func_00BED810, func_00BED7F0;
extern EditPlayerComparator func_00BED7D0, func_00BED7B0;
extern EditPlayerComparator func_00BED790, func_00BED770;
extern EditPlayerComparator func_00BED750, func_00BED730;
extern EditPlayerComparator func_00BED710, func_00BED6F0;
extern EditPlayerComparator func_00BED6D0, func_00BED6B0;
extern EditPlayerComparator func_00BED690, func_00BED670;
extern EditPlayerComparator func_00BED650, func_00BED630;
extern EditPlayerComparator func_00BED610, func_00BED5F0;
extern EditPlayerComparator func_00BED5D0, func_00BED5B0;
extern EditPlayerComparator func_00BED590, func_00BED570;
extern EditPlayerComparator func_00BED550, func_00BED530;
extern EditPlayerComparator func_00BED510, func_00BED4F0;
extern EditPlayerComparator func_00BED4D0, func_00BED4B0;
extern EditPlayerComparator func_00BED490, func_00BED470;
extern EditPlayerComparator func_00BED450, func_00BED430;
extern EditPlayerComparator func_00BED410, func_00BED3F0;
extern EditPlayerComparator func_00BED3D0, func_00BED3B0;
extern EditPlayerComparator func_00BED390, func_00BED370;
extern EditPlayerComparator func_00BED350, func_00BED330;
extern EditPlayerComparator func_00BED310, func_00BED2F0;
extern EditPlayerComparator func_00BED2D0, func_00BED2B0;
extern EditPlayerComparator func_00BED290, func_00BED270;
extern EditPlayerComparator func_00BED250, func_00BED230;
extern EditPlayerComparator func_00BED210, func_00BED1F0;
extern EditPlayerComparator func_00BED1D0, func_00BED1B0;
extern EditPlayerComparator func_00BED190, func_00BED170;
extern EditPlayerComparator func_00BED150, func_00BED130;
extern EditPlayerComparator func_00BED110, func_00BED0F0;
extern EditPlayerComparator func_00BED0D0, func_00BED0B0;
extern EditPlayerComparator func_00BED090, func_00BED070;
extern EditPlayerComparator func_00BED050, func_00BED030;
extern EditPlayerComparator func_00BED010, func_00BECFF0;

#define SORT_WITH(comparator) func_001C6158(players, count, sizeof(*players), comparator)

void func_00BEE000(EditSortRequest *request) {
    u16 *players = request->players;
    s32 count = 0;
    while (request->players[count])
        count++;

    switch (request->attribute) {
    case 0:
        if (!request->direction) {
            SORT_WITH(func_00BEDFC0);
            return;
        }
        SORT_WITH(func_00BEDF80);
        break;
    case 1:
        if (!request->direction) {
            SORT_WITH(func_00BEDE90);
            return;
        }
        SORT_WITH(func_00BEDDA0);
        break;
    case 2:
        if (!request->direction) {
            SORT_WITH(func_00BED850);
            return;
        }
        SORT_WITH(func_00BED830);
        break;
    case 3:
        if (!request->direction) {
            SORT_WITH(func_00BED810);
            return;
        }
        SORT_WITH(func_00BED7F0);
        break;
    case 4:
        if (!request->direction) {
            SORT_WITH(func_00BED7D0);
            return;
        }
        SORT_WITH(func_00BED7B0);
        break;
    case 5:
        if (!request->direction) {
            SORT_WITH(func_00BED790);
            return;
        }
        SORT_WITH(func_00BED770);
        break;
    case 6:
        if (!request->direction) {
            SORT_WITH(func_00BED750);
            return;
        }
        SORT_WITH(func_00BED730);
        break;
    case 7:
        if (!request->direction) {
            SORT_WITH(func_00BED710);
            return;
        }
        SORT_WITH(func_00BED6F0);
        break;
    case 8:
        if (!request->direction) {
            SORT_WITH(func_00BED6D0);
            return;
        }
        SORT_WITH(func_00BED6B0);
        break;
    case 9:
        if (!request->direction) {
            SORT_WITH(func_00BED690);
            return;
        }
        SORT_WITH(func_00BED670);
        break;
    case 10:
        if (!request->direction) {
            SORT_WITH(func_00BED650);
            return;
        }
        SORT_WITH(func_00BED630);
        break;
    case 11:
        if (!request->direction) {
            SORT_WITH(func_00BED610);
            return;
        }
        SORT_WITH(func_00BED5F0);
        break;
    case 12:
        if (!request->direction) {
            SORT_WITH(func_00BED5D0);
            return;
        }
        SORT_WITH(func_00BED5B0);
        break;
    case 13:
        if (!request->direction) {
            SORT_WITH(func_00BED590);
            return;
        }
        SORT_WITH(func_00BED570);
        break;
    case 14:
        if (!request->direction) {
            SORT_WITH(func_00BED550);
            return;
        }
        SORT_WITH(func_00BED530);
        break;
    case 15:
        if (!request->direction) {
            SORT_WITH(func_00BED510);
            return;
        }
        SORT_WITH(func_00BED4F0);
        break;
    case 16:
        if (!request->direction) {
            SORT_WITH(func_00BED4D0);
            return;
        }
        SORT_WITH(func_00BED4B0);
        break;
    case 17:
        if (!request->direction) {
            SORT_WITH(func_00BED490);
            return;
        }
        SORT_WITH(func_00BED470);
        break;
    case 18:
        if (!request->direction) {
            SORT_WITH(func_00BED450);
            return;
        }
        SORT_WITH(func_00BED430);
        break;
    case 19:
        if (!request->direction) {
            SORT_WITH(func_00BED410);
            return;
        }
        SORT_WITH(func_00BED3F0);
        break;
    case 20:
        if (!request->direction) {
            SORT_WITH(func_00BED3D0);
            return;
        }
        SORT_WITH(func_00BED3B0);
        break;
    case 21:
        if (!request->direction) {
            SORT_WITH(func_00BED390);
            return;
        }
        SORT_WITH(func_00BED370);
        break;
    case 22:
        if (!request->direction) {
            SORT_WITH(func_00BED350);
            return;
        }
        SORT_WITH(func_00BED330);
        break;
    case 23:
        if (!request->direction) {
            SORT_WITH(func_00BED310);
            return;
        }
        SORT_WITH(func_00BED2F0);
        break;
    case 24:
        if (!request->direction) {
            SORT_WITH(func_00BED2D0);
            return;
        }
        SORT_WITH(func_00BED2B0);
        break;
    case 25:
        if (!request->direction) {
            SORT_WITH(func_00BED290);
            return;
        }
        SORT_WITH(func_00BED270);
        break;
    case 26:
        if (!request->direction) {
            SORT_WITH(func_00BED250);
            return;
        }
        SORT_WITH(func_00BED230);
        break;
    case 27:
        if (!request->direction) {
            SORT_WITH(func_00BED210);
            return;
        }
        SORT_WITH(func_00BED1F0);
        break;
    case 28:
        if (!request->direction) {
            SORT_WITH(func_00BED1D0);
            return;
        }
        SORT_WITH(func_00BED1B0);
        break;
    case 29:
        if (!request->direction) {
            SORT_WITH(func_00BED190);
            return;
        }
        SORT_WITH(func_00BED170);
        break;
    case 30:
        if (!request->direction) {
            SORT_WITH(func_00BED150);
            return;
        }
        SORT_WITH(func_00BED130);
        break;
    case 31:
        if (!request->direction) {
            SORT_WITH(func_00BED110);
            return;
        }
        SORT_WITH(func_00BED0F0);
        break;
    case 32:
        if (!request->direction) {
            SORT_WITH(func_00BED0D0);
            return;
        }
        SORT_WITH(func_00BED0B0);
        break;
    case 33:
        if (!request->direction) {
            SORT_WITH(func_00BED090);
            return;
        }
        SORT_WITH(func_00BED070);
        break;
    case 34:
        if (!request->direction) {
            SORT_WITH(func_00BED050);
            return;
        }
        SORT_WITH(func_00BED030);
        break;
    case 35:
        if (!request->direction) {
            SORT_WITH(func_00BED010);
            return;
        }
        SORT_WITH(func_00BECFF0);
        break;
    default: break;
    }
}
