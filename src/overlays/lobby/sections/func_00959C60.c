/* compiler: mwcc-3.0.1b198-O3 */
#pragma inline_depth(16)
#include "pes6/lobby_result_entries.h"
typedef struct {
    u8 value[8];
} LobbyResultValue;
typedef struct {
    LobbyResultValue slots[5][3];
} LobbyResultTable;
typedef struct {
    u8 reserved00[0x486c];
    LobbyResultEntry entries[3];
    u8 reserved4998[0x1f4];
    LobbyResultValue values[5];
} LobbyResultConnection;
typedef struct {
    u8 reserved00[0x534];
    s32 ids[3];
    s8 finished[3];
} LobbyResultState;
extern u8 *func_00936B90(void);
extern s32 func_00867EA0(void *channel);
extern s32 func_00958060(s32 value);
extern s32 func_0082C730(s32 event);
extern void *func_001C48E8(void *dest, s32 value, u32 length);
extern void *func_001C4730(void *dest, const void *src, u32 length);
extern s32 D_008A64A4[3];
extern s8 D_008A64B0[];
extern u8 D_008A5F70[];
static inline void clear_results(LobbyResultTable *table) {
    func_001C48E8(table, 0, sizeof(*table));
    func_001C48E8(D_008A64A4, 0, sizeof(D_008A64A4));
    func_001C48E8(D_008A64B0, 0, 3 * sizeof(D_008A64B0[0]));
}
static inline void fail_results(void) {
    func_0082C920(14);
    func_0082C920(18);
    func_0082C840(14);
    func_0082C690(14, 0);
    func_0082C690(10, 0);
    func_0082C800(10, -150);
}
s32 func_00959C60(void) {
    s32 pending = 0, i;
    LobbyChannel *connection = func_0082C2A0();
    LobbyResultTable *table = (LobbyResultTable *)func_00936B90();
    if (!table)
        func_0082CA50(14, -1);
    if (func_0082B4C0(2) == 1)
        pending = 1;
    if (!connection)
        func_0082CA50(14, -1);
    switch (func_0082CA10(14)) {
    case 0:
        if (func_00862110(connection, 2) == 1) {
            if (func_00867EA0(&connection[2]) == 0) {
                func_0082C840(10);
                func_0082C690(10, 0);
                func_0082C980(14);
            } else
                func_0082CA50(14, -1);
            if (pending == 1)
                func_0082CA50(14, -1);
        } else
            func_0082CA50(14, -1);
        break;
    case 1:
        if (func_0082C8A0(10) == 1) {
            if (func_0082C7C0(10) == 0)
                func_0082C980(14);
            else
                func_0082CA50(14, 3);
        } else {
            if (func_00862110(connection, 2) == 0)
                func_0082CA50(14, -1);
            if (func_0082C5B0(10) > 7200)
                func_0082CA50(14, 3);
            if (pending == 1)
                func_0082CA50(14, -1);
        }
        break;
    case 2:
        clear_results(table);
        for (i = 0; i < 3; i++) {
            ((LobbyResultState *)D_008A5F70)->ids[i] =
                ((LobbyResultConnection *)connection)->entries[i].id;
            ((LobbyResultState *)D_008A5F70)->finished[i] = 0;
        }
        func_0082C800(10, 0);
        func_0082CA50(14, 4);
        break;
    case 3:
        clear_results(table);
        fail_results();
        return 1;
    case 4:
        if (func_0082C7C0(10) >= 0 && func_0082C7C0(10) < 3) {
            if (D_008A64B0[func_0082C7C0(10)] == 0) {
                if (D_008A64A4[func_0082C7C0(10)] == 0) {
                    D_008A64B0[func_0082C7C0(10)] = 1;
                    func_0082C730(10);
                } else
                    func_0082CA50(14, 5);
            } else {
                D_008A64B0[func_0082C7C0(10)] = 1;
                func_0082C730(10);
            }
        } else if (D_008A64B0[0] == 1 && D_008A64B0[1] == 1 && D_008A64B0[2] == 1)
            func_0082CA50(14, 100);
        else
            func_0082C6D0(10);
        break;
    case 5:
        if (func_0082C7C0(10) >= 0 && func_0082C7C0(10) < 3) {
            switch (func_00958060(D_008A64A4[func_0082C7C0(10)])) {
            case 0:
                break;
            case 4:
                for (i = 0; i < 5; i++) {
                    func_001C4730(&table->slots[i][func_0082C7C0(10)],
                                  &((LobbyResultConnection *)connection)->values[i],
                                  sizeof(LobbyResultValue));
                }
                D_008A64B0[func_0082C7C0(10)] = 1;
                func_0082CA50(14, 4);
                break;
            case 1:
                func_0082CA50(14, 3);
                break;
            case 3:
            case 2:
            default:
                func_0082CA50(14, -1);
                break;
            }
        } else
            func_0082CA50(14, 4);
        break;
    case 100:
        func_0082C920(18);
        func_0082C840(14);
        func_0082C690(14, 0);
        func_0082C920(14);
        func_0082C690(10, 0);
        func_0082C800(10, 0);
        return 4;
    default:
        if (table)
            func_001C48E8(table, 0, sizeof(*table));
        func_001C48E8(D_008A64A4, 0, sizeof(D_008A64A4));
        func_001C48E8(D_008A64B0, 0, 3 * sizeof(D_008A64B0[0]));
        fail_results();
        return 2;
    }
    return 0;
}
