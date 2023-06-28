#include "imperial.h"
#include <string.h>
double to_meter(const char *imperial_length){
    double pollice = 0.0254;
    double piede = pollice * 12;
    double iarda = piede * 3;
    double miglio = iarda * 1760;
    
    char *inch = "inch"; char *inch1 = "inches"; char *inch2 = "in"; char *inch3 = "in."; char *inch4 = "\"";
    char *foot = "foot"; char *foot1 = "feet"; char *foot2 = "ft"; char *foot3 = "ft."; char *foot4 = "'";
    char *yard = "yard"; char *yard1 = "yards";char *yard2 = "yd";char *yard3 = "yd.";
    char *mile = "mile"; char *mile1 = "miles"; char *mile2 = "mi"; char *mile3 = "mi.";
    
    double num = 0., metri = 0.;
    size_t num_num = 0;
    
    
    for (size_t g = 0; g != strlen(imperial_length); ++g) {
        if(imperial_length[g] == inch[1] || imperial_length[g] == inch4[0] || imperial_length[g] == foot[0] || imperial_length[g] == foot4[0] || imperial_length[g] == yard[0] || imperial_length[g] == mile[0]){
            ++num_num;
        }
    }
    size_t i1 = 0, i = 0;
    for (size_t c = 0; c != num_num; ++c) {
        
        sscanf(&imperial_length[i1], "%lf", &num);
        for (size_t t = 0; i != strlen(imperial_length); ++i) {
            if(imperial_length[i] == inch[t] || imperial_length[i] == inch1[t] || imperial_length[i] == inch2[t] || imperial_length[i] == inch3[t] || imperial_length[i] == inch4[t]){
                metri += num * pollice;
                break;
            }
            if(imperial_length[i] == foot[t] || imperial_length[i] == foot1[t] || imperial_length[i] == foot2[t] || imperial_length[i] == foot3[t] || imperial_length[i] == foot4[t]){
                metri += num * piede;
                break;
            }
            if(imperial_length[i] == yard[t] || imperial_length[i] == yard1[t] || imperial_length[i] == yard2[t] || imperial_length[i] == yard3[t]){
                metri += num * iarda;
                break;
            }
            if(imperial_length[i] == mile[t] || imperial_length[i] == mile1[t] || imperial_length[i] == mile2[t] || imperial_length[i] == mile3[t]){
                metri += num * miglio;
                break;
            }
        }
        if (c+1 == num_num) {
            break;
        }
        while (imperial_length[i] != 0x20) {
            ++i;
        }
        i1 = i;
    }
    
    return metri;
}
