/* compiler: mwcc-3.0.1b210 */
extern int sprintf(char *, const char *, ...);
extern int func_009F6220(int);
extern const char D_00A03490[];

char *func_009EC370(char *output, const char *format, int value) {
    char text[64];

    sprintf(text, D_00A03490, func_009F6220(value));
    sprintf(output, format, text);
    return output;
}
