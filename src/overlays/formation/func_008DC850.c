/* compiler: mwcc-3.0.1b210 */
#include "pes6/formation_panel.h"

void func_008DC850(FormationPanelRow *row, u8 kind, u8 value, u8 comparison) {
    row->kind = kind;
    row->value = value;
    row->difference = 0;
    if (comparison != 255) {
        switch (kind) {
        case 3:
        case 4:
            row->difference = value - comparison;
            break;
        }
    }
}
