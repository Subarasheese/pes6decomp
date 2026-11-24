/* compiler: mwcc-3.0.1b210 */

#include "pes6/competition_setup.h"
extern const SettingsRow D_008D2F30[];
extern void *memset(void *, s32, u32);

void func_008BCFE0(void) {
    s32 i;
    memset(&D_008DF000, 0, sizeof(D_008DF000));
    D_008DF000.cursor = 0;
    D_008DF000.lastPage = 1;
    for (i = 0; i < SETUP_ROW_COUNT; i++)
        D_008DF000.rows[i].locked = 1;
    for (i = 0; i < 21; i++) {
        D_008DF000.rows[i].savedValue = D_008D2F30[i].savedValue;
        D_008DF000.rows[i].value = D_008D2F30[i].savedValue;
        D_008DF000.rows[i].savedMinimum = D_008D2F30[i].savedMinimum;
        D_008DF000.rows[i].minimum = D_008D2F30[i].savedMinimum;
        D_008DF000.rows[i].savedMaximum = D_008D2F30[i].savedMaximum;
        D_008DF000.rows[i].maximum = D_008D2F30[i].savedMaximum;
        D_008DF000.rows[i].locked = D_008D2F30[i].locked;
        D_008DF000.rows[i].wrap = D_008D2F30[i].wrap;
        D_008DF000.rows[i].selectable = D_008D2F30[i].selectable;
    }
    if (Pes6SceneStack[0] == 4)
        D_008DF000.rows[0].savedValue = 0;
    else
        D_008DF000.rows[0].savedValue = 1;
}
