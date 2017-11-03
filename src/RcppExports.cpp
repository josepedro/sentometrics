// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// compute_df
Rcpp::NumericVector compute_df(double alpha, Rcpp::NumericVector lambda, Rcpp::List xA);
RcppExport SEXP _sentometrics_compute_df(SEXP alphaSEXP, SEXP lambdaSEXP, SEXP xASEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type xA(xASEXP);
    rcpp_result_gen = Rcpp::wrap(compute_df(alpha, lambda, xA));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_sentometrics_compute_df", (DL_FUNC) &_sentometrics_compute_df, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_sentometrics(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}