/* compiler: mwcc-3.0.1b151 */

#include "pes6/competition_setup.h"
extern s32 D_003EAA0C;

void func_008BC8A0(void) {
    if (D_008DF000.rows[1].value == 6) {
        D_008DF000.rows[2].locked = 0;
    } else {
        D_008DF000.rows[2].locked = 1;
        D_008DF000.rows[2].value = 0;
    }
    if (D_003EAA0C != 2) {
        if (D_008DF000.rows[1].value != 6) {
            D_008DF000.rows[3].locked = 1;
            D_008DF000.rows[6].locked = 1;
        } else {
            D_008DF000.rows[3].locked = 0;
            D_008DF000.rows[6].locked = 0;
        }
    }
    if (D_008DF000.rows[3].value == 0) {
        D_008DF000.rows[4].locked = 0;
        if (D_008DF000.rows[6].value == 2) {
            D_008DF000.rows[4].locked = 1;
            D_008DF000.rows[4].value = 0;
        }
    } else {
        D_008DF000.rows[4].locked = 1;
        D_008DF000.rows[4].value = 0;
    }
    if (D_008DF000.rows[3].value == 1) {
        D_008DF000.rows[5].locked = 0;
    } else {
        D_008DF000.rows[5].locked = 1;
    }
    if (D_008DF000.rows[3].value == 1) {
        D_008DF000.rows[5].locked = 0;
    } else {
        D_008DF000.rows[5].locked = 1;
    }
}
