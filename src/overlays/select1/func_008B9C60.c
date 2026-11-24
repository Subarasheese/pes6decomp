/* compiler: mwcc-3.0.1b210 */

#include "pes6/controller_layout.h"

void func_008B9C60(void) {
    s32 slot;
    s32 button, choice;
    for (slot = 0; slot < MATCH_OPTION_SLOTS; slot++) {
        MatchOptionPreset *preset = func_00245190(slot);
        MatchOptionBindings *bindings = &preset->fields.bindings;
        {
            u8 buttons[8] = {0};
            buttons[0] = bindings->bank[0][5];
            buttons[1] = bindings->bank[0][6];
            buttons[2] = bindings->bank[0][4];
            buttons[3] = bindings->bank[0][7];
            buttons[4] = bindings->bank[0][2];
            buttons[5] = bindings->bank[0][3];
            buttons[6] = bindings->bank[0][0];
            buttons[7] = bindings->bank[0][1];
            {
                s32 allowedButtons[8] = {13, 14, 12, 15, 10, 11, 8, 9};
                for (button = 0; button <= 7; button++) {
                    for (choice = 0; choice <= 7; choice++) {
                        if (buttons[button] == allowedButtons[choice])
                            D_0053C840[slot][button] = allowedButtons[choice];
                    }
                }
            }
        }
        {
            u8 buttons[8] = {0};
            buttons[0] = bindings->bank[1][5];
            buttons[1] = bindings->bank[1][6];
            buttons[2] = bindings->bank[1][4];
            buttons[3] = bindings->bank[1][7];
            buttons[4] = bindings->bank[1][2];
            buttons[5] = bindings->bank[1][3];
            buttons[6] = bindings->bank[1][0];
            buttons[7] = bindings->bank[1][1];
            {
                s32 allowedButtons[8] = {17, 18, 16, 19, 10, 11, 8, 9};
                for (button = 0; button <= 7; button++) {
                    for (choice = 0; choice <= 7; choice++) {
                        if (buttons[button] == allowedButtons[choice])
                            D_0053C740[slot][button] = allowedButtons[choice];
                    }
                }
            }
        }
        D_0053C940.options[slot][0] = preset->fields.options[0];
        D_0053C940.options[slot][7] = preset->fields.options[1];
        D_0053C940.options[slot][2] = preset->fields.mode;
        D_0053C940.options[slot][4] = preset->fields.options[3];
        D_0053C940.options[slot][1] = preset->fields.options[2];
        D_0053C940.options[slot][3] = D_0053C940.options[slot][4] + 2 * D_0053C940.options[slot][7];
        D_008DEFE0[slot] = func_008B9070(slot);
    }
}
