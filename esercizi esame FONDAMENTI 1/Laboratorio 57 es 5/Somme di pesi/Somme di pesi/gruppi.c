#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>

int *read_gruppi(const char *filename, size_t *ngruppi) {
    FILE *fp = fopen(filename, "r");
    if (!fp) {
        return NULL;
    }

    int *gruppi = NULL;
    *ngruppi = 0;
    int sum = 0;
    int val;
    char c;
    while (fscanf(fp, "%d%c", &val, &c) == 2) {
        sum += val;
        if (c == '\n') {
            char next = fgetc(fp);
            if (next == '\n' || next == EOF) {
                gruppi = realloc(gruppi, sizeof(int) * (*ngruppi + 1));
                gruppi[*ngruppi] = sum;
                sum = 0;
                (*ngruppi)++;
                if (next == EOF) {
                    break;
                }
            }
            else ungetc(next, fp);
        }
    }

    fclose(fp);
    return gruppi;
}

int main(void) {
    size_t n =0;
    int *ret = read_gruppi("file0.txt", &n);
    free(ret);
    return 0;
}
