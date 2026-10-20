/* compiler: ee-gcc-2.9-G0 */
/* Sony SDK / C runtime code shared with GT4 (same SDK release); source ported
 * from the GT4 decompilation (MIT, see THIRD_PARTY.md). */
struct Node { char pad[0x38]; struct Node *next; };
struct Queue { int a, b; struct Node *head; };
int func_0010F420(void);
void func_0010F470(void);

struct Node *func_00109650(struct Node *n, struct Queue *q)
{
    struct Node *p;
    func_0010F420();
    p = q->head;
    if (p == n) {
        q->head = p->next;
    } else {
        while (p != 0) {
            if (p->next == n) {
                p->next = n->next;
                break;
            }
            p = p->next;
        }
    }
    func_0010F470();
    return p;
}
