/* compiler: mwcc-3.0.1b198 */
#include "types.h"
typedef struct {
    u8 reserved00[0x74];
    u8 stage;
    u8 reserved75[0x13];
    u32 message;
    u8 reserved8C[2];
    u16 choices[3];
} LobbyChoiceMenu;
extern s32 func_0093D650(const u16 choices[3]), func_0093D680(void), func_0093D690(void),
    func_0098CAD0(void), func_0098CAE0(void);
extern s32 SD_call(s32 sound);
s32 func_009A9D50(LobbyChoiceMenu *menu) {
    s32 action = func_0093D650(menu->choices);
    if (action)
        func_0098CAD0();
    if (action == 4) {
        if (func_0093D690() == 0) {
            SD_call(0x8C008004);
            return 1;
        }
        func_0093D680();
        menu->stage = 8;
        func_0098CAE0();
    } else if (action == 1) {
        SD_call(0x8C008005);
        menu->message = 0x01FB003E;
        menu->stage = 9;
    } else if (action == 2)
        return 4;
    else if (action == 3)
        return 3;
    return 0;
}
