/* compiler: mwcc-3.0.3 */
extern int func_002C21B0(int, int, int, int);

int func_0030D5B0(int *result, unsigned char first, unsigned char second,
                  unsigned char third, int fourth) {
    *result = func_002C21B0(first & 0x7F, second & 0x7F, third, fourth);
    return 1;
}
