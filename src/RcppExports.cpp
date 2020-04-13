// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// cortMonteCarlo
Rcpp::NumericVector cortMonteCarlo(const NumericMatrix z, const NumericMatrix min, const NumericMatrix max, const int N);
RcppExport SEXP _cort_cortMonteCarlo(SEXP zSEXP, SEXP minSEXP, SEXP maxSEXP, SEXP NSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericMatrix >::type z(zSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix >::type min(minSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix >::type max(maxSEXP);
    Rcpp::traits::input_parameter< const int >::type N(NSEXP);
    rcpp_result_gen = Rcpp::wrap(cortMonteCarlo(z, min, max, N));
    return rcpp_result_gen;
END_RCPP
}
// quadProd
double quadProd(const NumericMatrix a, const NumericMatrix b, const NumericVector kern, const NumericMatrix other_a, const NumericMatrix other_b, const NumericVector other_kern);
RcppExport SEXP _cort_quadProd(SEXP aSEXP, SEXP bSEXP, SEXP kernSEXP, SEXP other_aSEXP, SEXP other_bSEXP, SEXP other_kernSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericMatrix >::type a(aSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix >::type b(bSEXP);
    Rcpp::traits::input_parameter< const NumericVector >::type kern(kernSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix >::type other_a(other_aSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix >::type other_b(other_bSEXP);
    Rcpp::traits::input_parameter< const NumericVector >::type other_kern(other_kernSEXP);
    rcpp_result_gen = Rcpp::wrap(quadProd(a, b, kern, other_a, other_b, other_kern));
    return rcpp_result_gen;
END_RCPP
}
// lossFunc
double lossFunc(const NumericVector bp, const NumericMatrix bin_repr, const NumericMatrix z);
RcppExport SEXP _cort_lossFunc(SEXP bpSEXP, SEXP bin_reprSEXP, SEXP zSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericVector >::type bp(bpSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix >::type bin_repr(bin_reprSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix >::type z(zSEXP);
    rcpp_result_gen = Rcpp::wrap(lossFunc(bp, bin_repr, z));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_cort_cortMonteCarlo", (DL_FUNC) &_cort_cortMonteCarlo, 4},
    {"_cort_quadProd", (DL_FUNC) &_cort_quadProd, 6},
    {"_cort_lossFunc", (DL_FUNC) &_cort_lossFunc, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_cort(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
