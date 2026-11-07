/* compiler: ee-gcc-2.9-G0 */
/* Sony SDK / C runtime code shared with GT4 (same SDK release); source ported
 * from the GT4 decompilation (MIT, see THIRD_PARTY.md). */
typedef unsigned long u64;
typedef struct Node {
    struct Node *next;
    struct Node *prev;
    int pad[2];
    u64 m10;
    u64 m18;
    u64 m20;
} Node;
struct List { char pad[0x18]; Node *head; };
extern struct List D_00372998;

void func_00110210(Node *n)
{
    u64 key = n->m20 + n->m10 - n->m18;
    Node *prev = 0;
    Node *cur;
    for (cur = D_00372998.head; cur != 0; cur = cur->next) {
        if (key < cur->m20 + cur->m10 - cur->m18) break;
        prev = cur;
    }
    n->prev = prev;
    n->next = cur;
    if (cur) cur->prev = n;
    if (prev) prev->next = n;
    else D_00372998.head = n;
}
