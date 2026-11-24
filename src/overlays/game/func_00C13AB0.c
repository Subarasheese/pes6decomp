/* compiler: mwcc-3.0.1b210 */
#include "pes6/match_lineup_statistics.h"
void func_00C13AB0(StatListeners *listeners, s32 event, const void *data) {
    StatListenerNode *node;
    if (listeners) {
        node = listeners->head;
        if (node) {
            do {
                node->notify(event, data);
                node = node->next;
            } while (node);
        }
    }
}