/* compiler: mwcc-3.0.1b210 */
#include "pes6/league_result_rows.h"

typedef struct {
    u8 kind;
} CompetitionInfo;
extern CompetitionInfo *func_00229380(void);
extern s32 func_00230410(void);

void func_009BC480(void) {
    CompetitionInfo *competition = func_00229380();
    LeagueFixturePage *page = D_003EA9C0;
    if (!page)
        return;
    if (func_00230410() == 1) {
        switch (D_003E7B0C->view) {
        default:
        case 0:
        case 1:
        case 2:
        case 3:
        case 5:
            page->mode = 0;
            break;
        case 4:
            page->mode = 2;
            break;
        case 6:
            page->mode = 5;
            break;
        case 7:
            page->mode = 6;
            break;
        case 8:
        case 9:
        case 10:
        case 11:
            page->mode = 1;
            break;
        case 12:
            page->mode = 3;
            break;
        case 13:
            page->mode = 4;
            break;
        case 14:
            page->mode = 7;
            break;
        }
    } else {
        switch (competition->kind) {
        case 11:
        case 13:
            if (D_003E7B0C->view == 0)
                page->mode = 22;
            else
                page->mode = 23;
            break;
        case 15:
            if (D_003E7B0C->view == 0)
                page->mode = 9;
            else if (D_003E7B0C->view == 1)
                page->mode = 10;
            else
                page->mode = 11;
            break;
        case 18:
            if (D_003E7B0C->view == 0)
                page->mode = 18;
            else
                page->mode = 19;
            break;
        case 20:
            if (D_003E7B0C->view == 0)
                page->mode = 14;
            else
                page->mode = 15;
            break;
        case 22:
            if (D_003E7B0C->view == 0)
                page->mode = 16;
            else
                page->mode = 17;
            break;
        case 24:
            if (D_003E7B0C->view == 0)
                page->mode = 20;
            else
                page->mode = 21;
            break;
        case 26:
            if (D_003E7B0C->view == 0)
                page->mode = 12;
            else
                page->mode = 13;
            break;
        }
    }
}
