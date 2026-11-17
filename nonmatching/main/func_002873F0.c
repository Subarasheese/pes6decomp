/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern void func_001A58F0(void *, int);
extern void func_001A5A20(s32);
extern char Pes6MatchPlayers[];


void func_002873F0(void) {
    char *rec;
    char *obj;
    int i;

    rec = *(char **)(Pes6MatchPlayers + 4);
    obj = *(char **)rec;
    func_001A58F0(obj, 2);
    if (*(u8 *)(rec + 0x2C) != 0 && *(u8 *)(obj + 1) == 0) {
        *(u8 *)(obj + 1) = 1;
    }
    func_001A5A20(**(s32 **)(Pes6MatchPlayers + 4));
    rec = *(char **)(Pes6MatchPlayers + 0x244);
    obj = *(char **)rec;
    func_001A58F0(obj, 0);
    if (*(u8 *)(rec + 0x2C) != 0 && *(u8 *)(obj + 1) == 0) {
        *(u8 *)(obj + 1) = 1;
    }
    rec = *(char **)(Pes6MatchPlayers + 0x1B04);
    obj = *(char **)rec;
    func_001A58F0(obj, 0);
    if (*(u8 *)(rec + 0x2C) != 0 && *(u8 *)(obj + 1) == 0) {
        *(u8 *)(obj + 1) = 1;
    }
    for (i = 2; i < 12; i++) {
        rec = *(char **)(Pes6MatchPlayers + i * 0x240 + 4);
        obj = *(char **)rec;
        func_001A58F0(obj, 1);
        if (*(u8 *)(rec + 0x2C) != 0 && *(u8 *)(obj + 1) == 0) {
            *(u8 *)(obj + 1) = 1;
        }
    }
    for (i = 13; i < 23; i++) {
        rec = *(char **)(Pes6MatchPlayers + i * 0x240 + 4);
        obj = *(char **)rec;
        func_001A58F0(obj, 1);
        if (*(u8 *)(rec + 0x2C) != 0 && *(u8 *)(obj + 1) == 0) {
            *(u8 *)(obj + 1) = 1;
        }
    }
}
