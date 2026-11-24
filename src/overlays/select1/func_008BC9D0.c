/* compiler: mwcc-3.0.1b198 */

#include "pes6/competition_setup.h"
extern const s8 D_008DA7D0[], D_008DA7D8[];
/* Two menu text IDs for each group size. */
extern const u32 D_008D2E50[][2];
extern const u32 *D_008D5CD4[];
extern s32 func_00246550(s32 feature);

void func_008BC9D0(void) {
    s32 id = D_008DF000.cursor + SETUP_ROWS_PER_PAGE * D_008DF000.page;
    s32 i;
    if (id == 1) {
        D_008DF000.rows[7].value = 1;
        D_008DF000.rows[7].maximum = D_008DF000.rows[6].value = D_008DF000.rows[6].maximum =
            D_008DA7D0[D_008DF000.rows[1].value];
        if (D_008DF000.rows[1].value == 6) {
            D_008DF000.rows[2].locked = 0;
        } else {
            D_008DF000.rows[2].value = 0;
            D_008DF000.rows[2].locked = 1;
        }
        D_008DF000.rows[3].value = D_008DA7D8[D_008DF000.rows[1].value];
        if (D_008DF000.rows[1].value != 6) {
            D_008DF000.rows[3].locked = 1;
            D_008DF000.rows[6].locked = 1;
        } else {
            D_008DF000.rows[3].locked = 0;
            D_008DF000.rows[6].locked = 0;
        }
        if (D_008DF000.rows[1].value == 1) {
            D_008DF000.rows[4].value = 0;
            D_008DF000.rows[4].locked = 1;
        }
        if (D_008DF000.rows[3].value == 1) {
            D_008DF000.rows[4].value = 0;
            D_008DF000.rows[4].locked = 1;
        } else {
            D_008DF000.rows[4].locked = 0;
        }
    }
    /* Group play uses a multiple of four teams. */
    if (id == 6) {
        if (D_008DF000.rows[3].value == 1) {
            s32 remainder = D_008DF000.rows[6].value % 4;
            if (remainder != 0) {
                if (remainder == 1)
                    D_008DF000.rows[6].value += 3;
                else if (remainder == 3)
                    D_008DF000.rows[6].value -= 3;
            }
        }
        D_008DF000.rows[7].maximum = D_008DF000.rows[6].value;
        if (D_008DF000.rows[6].value < D_008DF000.rows[7].value)
            D_008DF000.rows[7].value = D_008DF000.rows[6].value;
        if (D_008DF000.rows[3].value == 0) {
            D_008DF000.rows[4].locked = 0;
            if (D_008DF000.rows[6].value == 2) {
                D_008DF000.rows[4].locked = 1;
                D_008DF000.rows[4].value = 0;
            }
        }
    }
    if (id == 3) {
        if (D_008DF000.rows[3].value == 0) {
            D_008DF000.rows[4].locked = 0;
        } else {
            D_008DF000.rows[4].value = 0;
            D_008DF000.rows[4].locked = 1;
        }
        D_008DF000.rows[6].value = 32;
        D_008DF000.rows[7].value = 1;
        D_008DF000.rows[7].maximum = 32;
        D_008DF000.rows[6].maximum = 32;
        if (D_008DF000.rows[3].value == 1) {
            D_008DF000.rows[5].locked = 0;
            if (D_008DF000.rows[3].value == 1) {
                s32 remainder = D_008DF000.rows[6].value % 4;
                if (remainder != 0) {
                    if (D_008DF000.rows[6].value < 4)
                        D_008DF000.rows[6].value = 4;
                    else if (remainder == 1)
                        D_008DF000.rows[6].value += 3;
                    else if (remainder == 3)
                        D_008DF000.rows[6].value -= 3;
                }
            }
        } else {
            D_008DF000.rows[5].locked = 1;
        }
    }
    if (D_008DF000.rows[3].value == 1) {
        D_008DF000.rows[5].locked = 0;
        D_008DF000.rows[6].minimum = 8;
        D_008D5CD4[0] = D_008D2E50[D_008DF000.rows[6].value / 4 - 1];
    } else {
        D_008DF000.rows[5].locked = 1;
        D_008DF000.rows[6].minimum = 2;
    }
    if (D_008DF000.rows[1].value == 0) {
        D_008DF000.rows[2].locked = 1;
        D_008DF000.rows[2].value = 2;
        D_008DF000.rows[3].locked = 1;
        D_008DF000.rows[3].value = 0;
        D_008DF000.rows[4].locked = 1;
        D_008DF000.rows[4].value = 0;
        D_008DF000.rows[5].locked = 1;
        D_008DF000.rows[5].value = 0;
        D_008DF000.rows[6].locked = 1;
        D_008DF000.rows[6].value = 16;
        D_008DF000.rows[7].maximum = 16;
        D_008DF000.rows[11].locked = 1;
        D_008DF000.rows[11].value = 1;
        D_008DF000.rows[12].locked = 1;
        D_008DF000.rows[12].value = 1;
        D_008DF000.rows[15].locked = 1;
        D_008DF000.rows[15].value = 0;
        D_008DF000.rows[17].locked = 1;
        D_008DF000.rows[17].value = 0;
        D_008DF000.rows[18].locked = 1;
        D_008DF000.rows[18].value = 0;
        D_008DF000.rows[19].locked = 1;
        D_008DF000.rows[19].value = 0;
        D_008DF000.rows[20].locked = 1;
        D_008DF000.rows[20].value = 1;
        if (D_008DF000.rows[16].value >= 5)
            D_008DF000.rows[16].value = 0;
        for (i = 5; i <= 18; i++)
            D_008DF000.rows[16].disabledValues[i] = 1;
        D_008DF000.tournamentPreset = 1;
    } else if (Pes6SceneStack[0] == 4) {
        D_008DF000.rows[11].locked = 0;
        D_008DF000.rows[12].locked = 0;
        D_008DF000.rows[15].locked = 0;
        D_008DF000.rows[16].locked = 0;
        D_008DF000.rows[18].locked = 0;
        D_008DF000.rows[19].locked = 0;
        D_008DF000.rows[20].locked = 0;
        if (!func_00246550(164)) {
            D_008DF000.rows[17].locked = 1;
        } else {
            D_008DF000.rows[17].locked = 0;
        }
        for (i = 0; i <= 18; i++)
            D_008DF000.rows[16].disabledValues[i] = 0;
        for (i = 172; i < 177; i++) {
            if (!func_00246550(i))
                D_008DF000.rows[16].disabledValues[13 + (i - 172)] = 1;
        }
        D_008DF000.rows[16].disabledValues[12] = 1;
        D_008DF000.tournamentPreset = 0;
    }
}
