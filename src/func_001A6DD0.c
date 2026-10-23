/* compiler: mwcc-3.0.1b151 */
extern void func_001CDAD0(void *);

struct StateLink {
    void **destination;
    unsigned char unknown04[0x40];
    unsigned char *state;
};

void func_001A6DD0(struct StateLink *link) {
    unsigned char *state = link->state;
    func_001CDAD0(state + 0x20);
    if (link != 0) {
        void **destination = link->destination;
        if (destination != 0) {
            *destination = state;
        }
    }
}
