/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

/* Inserts node into the list kept sorted by the float at +0x58 (head D_00CCCD98, tail D_00CCCD9C;
 * +0x70 links toward the head, +0x74 toward the tail). */

extern char D_00CCCD98[];   /* list head (void *) */
extern char D_00CCCD9C[];   /* list tail (void *) */

void func_00C85E10(void *node) {
    void *head;
    void *tail;
    void *cur;
    void *prev;
    f32 key;

    M2C_FIELD(node, void **, 0x70) = NULL;
    M2C_FIELD(node, void **, 0x74) = NULL;
    head = *(void **)D_00CCCD98;
    if (head == NULL) {
        *(void **)D_00CCCD98 = node;
        *(void **)D_00CCCD9C = node;
        return;
    }
    tail = *(void **)D_00CCCD9C;
    key = M2C_FIELD(node, f32 *, 0x58);
    cur = head;
    do {
        if (M2C_FIELD(cur, f32 *, 0x58) <= key) {
            if (cur == head) {
                M2C_FIELD(cur, void **, 0x70) = node;
                M2C_FIELD(node, void **, 0x74) = cur;
                *(void **)D_00CCCD98 = node;
                return;
            }
            prev = M2C_FIELD(cur, void **, 0x70);
            M2C_FIELD(prev, void **, 0x74) = node;
            M2C_FIELD(node, void **, 0x70) = M2C_FIELD(cur, void **, 0x70);
            M2C_FIELD(node, void **, 0x74) = cur;
            M2C_FIELD(cur, void **, 0x70) = node;
            return;
        }
        if (cur == tail) {
            M2C_FIELD(cur, void **, 0x74) = node;
            M2C_FIELD(node, void **, 0x70) = cur;
            *(void **)D_00CCCD9C = node;
            return;
        }
        cur = M2C_FIELD(cur, void **, 0x74);
    } while (cur != NULL);
}
