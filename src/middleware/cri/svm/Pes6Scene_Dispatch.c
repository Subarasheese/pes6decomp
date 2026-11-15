/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

M2C_UNK Pes6Scene_Title(s32);                         /* extern */
M2C_UNK Pes6Scene_Boot(s32);                         /* extern */
M2C_UNK Pes6Scene_DebugMenu(s32);                         /* extern */
M2C_UNK Pes6Scene_User(s32);                         /* extern */
s32 func_001B4850(s32);                             /* extern */
M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK Pes6Scene_Match(s32);                         /* extern */
M2C_UNK func_0020B4D0(s32);                         /* extern */
M2C_UNK Pes6Scene_Competition(s32);                         /* extern */
M2C_UNK Pes6Scene_Enter(s32);                         /* extern */
M2C_UNK Pes6Scene_Ending(s32);                         /* extern */
M2C_UNK Pes6Scene_Menu(s32);                         /* extern */
M2C_UNK func_00262BD0(s32);                         /* extern */
M2C_UNK func_002684E0(s32);                         /* extern */
s32 func_002CBE20(s32);                             /* extern */
M2C_UNK func_002D4D00(s32);                         /* extern */
M2C_UNK Pes6Scene_MatchSelect(s32);                         /* extern */
M2C_UNK func_00308410(s32);                         /* extern */
M2C_UNK Pes6Scene_Demo(s32);                         /* extern */
extern char Pes6SceneStack[];
extern char D_00510FD4[];
extern char D_00510FD8[];
extern char D_00510FDC[];
extern char D_00510FE4[];

void Pes6Scene_Dispatch(void) {
    switch ((*(s32 *)Pes6SceneStack)) {                           /* irregular */
    case 0x0:
        if (func_001B4850((*(s32 *)Pes6SceneStack)) != 0) {
            (*(s32 *)Pes6SceneStack) = 1;
            (*(s32 *)D_00510FD4) = 0;
            func_001C48E8(((void *)D_00510FD8), 0, 0x10);
        }
        break;
    case 0x1:
        if (func_002CBE20((*(s32 *)Pes6SceneStack)) == 1) {
            (*(s32 *)Pes6SceneStack) = 2;
            (*(s32 *)D_00510FD4) = 0;
            func_001C48E8(((void *)D_00510FD8), 0, 0x10);
        }
        break;
    case 0x2:
        Pes6Scene_Boot((*(s32 *)Pes6SceneStack));
        break;
    case 0x3:
        Pes6Scene_Title((*(s32 *)Pes6SceneStack));
        break;
    case 0x4:
        Pes6Scene_Menu((*(s32 *)Pes6SceneStack));
        break;
    case 0xA:
        func_0020B4D0((*(s32 *)Pes6SceneStack));
        break;
    case 0xB:
        func_002684E0((*(s32 *)Pes6SceneStack));
        break;
    case 0x8:
        Pes6Scene_Match((*(s32 *)Pes6SceneStack));
        break;
    case 0x5:
        Pes6Scene_MatchSelect((*(s32 *)Pes6SceneStack));
        break;
    case 0x9:
        Pes6Scene_Enter((*(s32 *)Pes6SceneStack));
        break;
    case 0xD:
        Pes6Scene_Ending((*(s32 *)Pes6SceneStack));
        break;
    case 0xC:
        Pes6Scene_Demo((*(s32 *)Pes6SceneStack));
        break;
    case 0x6:
        func_002D4D00((*(s32 *)Pes6SceneStack));
        break;
    case 0x7:
        Pes6Scene_Competition((*(s32 *)Pes6SceneStack));
        break;
    case 0xE:
        func_00262BD0((*(s32 *)Pes6SceneStack));
        break;
    case 0x64:
        Pes6Scene_DebugMenu((*(s32 *)Pes6SceneStack));
        break;
    case 0x65:
        Pes6Scene_User((*(s32 *)Pes6SceneStack));
        break;
    case 0xF:
        func_00308410((*(s32 *)Pes6SceneStack));
        break;
    }
    (*(s32 *)D_00510FD4) += 1;
    (*(s32 *)D_00510FDC) += 1;
    (*(s32 *)D_00510FE4) += 1;
}
