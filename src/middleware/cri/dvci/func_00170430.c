/* compiler: ee-gcc-2.96-G0 */
struct Port {
    signed char state;
    unsigned char pad1;
    signed char mode;
    unsigned char pad3[0x2D];
};

extern struct Port D_00387460[];

int func_00170430(void) {
    struct Port *port = D_00387460;
    int i;

    for (i = 0; i < 13; i++, port++) {
        if (port->state == 1 && port->mode == 2) {
            return 1;
        }
    }
    return 0;
}
