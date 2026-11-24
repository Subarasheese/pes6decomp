/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_goalkeeper.h"

extern void func_00C1B320(KeeperActor *);
extern void func_009D5560(KeeperActor *);
extern void func_009C6A80(KeeperActor *);
extern void func_009CAD90(KeeperActor *);
extern void func_009C57A0(KeeperActor *);
extern void func_009C8970(KeeperActor *);
extern void func_009C80D0(KeeperActor *);
extern void func_00C53770(KeeperActor *);
extern void func_009D5F20(KeeperActor *);
extern void func_009D2EE0(KeeperActor *);
extern void func_009D6500(KeeperActor *);
extern void func_009CE220(KeeperActor *);
extern void func_009C9E40(KeeperActor *);
extern void func_009D34E0(KeeperActor *);
extern void func_009CC0B0(KeeperActor *);
extern void func_009CB6B0(KeeperActor *);
extern void func_009CCAE0(KeeperActor *);
extern void func_00C1B9B0(KeeperActor *);
extern void func_00C1E010(KeeperActor *);
extern void func_00C1B370(KeeperActor *);
extern void func_009C6BC0(KeeperActor *);

void func_009CD440(KeeperActor *actor) {
    u8 role = actor->player.role;
    switch (role) {
    case 0x81:
        func_009C6BC0(actor);
        break;
    case 0xa3:
        func_00C1B370(actor);
        break;
    case 0x82:
        func_00C1E010(actor);
        break;
    case 0x9d:
        func_00C1B9B0(actor);
        break;
    case 0x83:
        func_009CCAE0(actor);
        break;
    case 0x84:
        func_009CB6B0(actor);
        break;
    case 0x9e:
        func_009CC0B0(actor);
        break;
    case 0x87:
        func_009D34E0(actor);
        break;
    case 0x88:
        func_009C9E40(actor);
        break;
    case 0x89:
        func_009CE220(actor);
        break;
    case 0xad:
    case 0x90:
    case 0x8c:
        func_009D6500(actor);
        break;
    case 0x8a:
        func_009D2EE0(actor);
        break;
    case 0x8f:
        func_009D5F20(actor);
        break;
    case 0x91:
        func_00C53770(actor);
        break;
    case 0x92:
        func_009C80D0(actor);
        break;
    case 0x94:
        func_009C8970(actor);
        break;
    case 0x95:
        func_009C57A0(actor);
        break;
    case 0x96:
        func_009CAD90(actor);
        break;
    case 0x97:
        func_009C6A80(actor);
        break;
    case 0x93:
        func_009D5560(actor);
        break;
    case 0x99:
        func_00C1B320(actor);
        break;
    }
    if (actor->decision.countdown)
        --actor->decision.countdown;
}
