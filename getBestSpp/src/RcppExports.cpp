// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// getBestSpp
IntegerVector getBestSpp(NumericMatrix exp_profit);
RcppExport SEXP _getBestSpp_getBestSpp(SEXP exp_profitSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type exp_profit(exp_profitSEXP);
    rcpp_result_gen = Rcpp::wrap(getBestSpp(exp_profit));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_getBestSpp_getBestSpp", (DL_FUNC) &_getBestSpp_getBestSpp, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_getBestSpp(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}