#ifndef COMMON_H
#define COMMON_H

#include <time.h>

typedef struct {
    double amount;
    time_t date;
} CashFlow;

double npv(double rate, CashFlow *cashflows, int count, time_t min_date);

int find_bracketing_interval(CashFlow *cashflows, int count, double *low, double *high);

#endif
