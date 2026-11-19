/* compiler: ee-gcc-2.9-G0 */
/* Sony SDK / C runtime code shared with GT4 (same SDK release); source ported
 * from the GT4 decompilation (MIT, see THIRD_PARTY.md). */
typedef struct Node {
    struct Node *next;
    int data[3];
} Node;

extern Node D_01206FC0[64];
extern Node *D_012073C0;

int func_001A6308(void) {
    int i;
    D_012073C0 = D_01206FC0;
    for (i = 63; i >= 0; i--)
        D_01206FC0[i].next = &D_01206FC0[i + 1];
    D_01206FC0[63].next = 0;
    return 0;
}
