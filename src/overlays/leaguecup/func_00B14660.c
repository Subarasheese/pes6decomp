/* compiler: mwcc-3.0.1b210 */
#include "pes6/fixture_display.h"

extern CupFixturePage *D_003EAD70;
extern u8 func_00226710(void);
void func_00B14660(void) {
    CupFixturePage *p = D_003EAD70;
    if (p) {
        u8 competition = func_00226710();
        switch (competition) {
        case 0:
            p->mode = 0;
            break;
        case 1:
            p->mode = 2;
            break;
        case 2:
            p->mode = 4;
            break;
        case 3:
            p->mode = 5;
            break;
        case 4:
            p->mode = 6;
            break;
        case 5:
            p->mode = 9;
            break;
        case 7:
            p->mode = 7;
            break;
        case 8:
            p->mode = 8;
            break;
        case 9:
            p->mode = 1;
            break;
        case 10:
            p->mode = 3;
            break;
        case 58:
            p->mode = 10;
            break;
        default:
            p->mode = 9;
            break;
        }
    }
}
