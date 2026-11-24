/* compiler: mwcc-3.0.1b198 */

#include "pes6/competition_setup.h"

void func_008BDC90(void) {
    s32 previous = D_008E1CE0.rows[6].value;
    s32 id = D_008E1CE0.cursor + SETUP_ROWS_PER_PAGE * D_008E1CE0.page;
    if (id == 1) {
        switch (D_008E1CE0.rows[1].value) {
        case 5:
            D_008E1CE0.rows[5].maximum = 20;
            D_008E1CE0.rows[5].value = 20;
            break;
        case 0:
        case 2:
        case 3:
        case 4:
            D_008E1CE0.rows[5].maximum = 20;
            D_008E1CE0.rows[5].value = 20;
            D_008E1CE0.rows[6].value = 1;
            D_008E1CE0.rows[2].value = 1;
            break;
        case 1:
            D_008E1CE0.rows[5].maximum = 18;
            D_008E1CE0.rows[5].value = 18;
            D_008E1CE0.rows[6].value = 1;
            D_008E1CE0.rows[2].value = 1;
            break;
        }
        D_008E1CE0.rows[6].maximum = D_008E1CE0.rows[5].maximum;
        if (D_008E1CE0.rows[6].maximum < D_008E1CE0.rows[6].value)
            D_008E1CE0.rows[6].value = D_008E1CE0.rows[6].maximum;
    }
    if (D_008E1CE0.rows[1].value == 2) {
        D_008E1CE0.rows[15].locked = 1;
        D_008E1CE0.rows[15].disabledValues[12] = 0;
        D_008E1CE0.rows[15].value = 12;
    } else {
        D_008E1CE0.rows[15].locked = 0;
        if (id == 1) {
            if (D_008E1CE0.rows[15].value == 12)
                D_008E1CE0.rows[15].value = 0;
            D_008E1CE0.rows[15].disabledValues[12] = 1;
        }
    }
    if (id == 5) {
        D_008E1CE0.rows[6].maximum = D_008E1CE0.rows[5].value;
        if (D_008E1CE0.rows[6].maximum < D_008E1CE0.rows[6].value)
            D_008E1CE0.rows[6].value = D_008E1CE0.rows[6].maximum;
    }
    if (previous != D_008E1CE0.rows[6].value || id == 6) {
        if (D_008E1CE0.rows[6].value > 1) {
            D_008E1CE0.rows[4].locked = 1;
            D_008E1CE0.rows[4].value = 0;
        } else
            D_008E1CE0.rows[4].locked = 0;
    }
    if (Pes6SceneStack[0] == 4) {
        if (D_008E1CE0.rows[1].value == 5) {
            D_008E1CE0.rows[5].locked = 0;
            D_008E1CE0.rows[3].locked = 0;
            D_008E1CE0.rows[2].locked = 0;
        } else {
            D_008E1CE0.rows[5].locked = 1;
            D_008E1CE0.rows[3].locked = 1;
            D_008E1CE0.rows[3].value = 1;
            D_008E1CE0.rows[2].locked = 1;
        }
        if (D_008E1CE0.rows[6].value > 1) {
            D_008E1CE0.rows[4].locked = 1;
            D_008E1CE0.rows[4].value = 0;
        }
    }
}
