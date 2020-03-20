// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "../inst/include/RcppBlaze3.h"
#include <Rcpp.h>
#include "../extern/fgc/code/include/fgc/jsd.h"

using namespace Rcpp;

// Blaze3_version
Rcpp::IntegerVector Blaze3_version(bool single);
RcppExport SEXP _RcppBlaze3_Blaze3_version(SEXP singleSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< bool >::type single(singleSEXP);
    rcpp_result_gen = Rcpp::wrap(Blaze3_version(single));
    return rcpp_result_gen;
END_RCPP
}
// Blaze3_SSE
bool Blaze3_SSE();
RcppExport SEXP _RcppBlaze3_Blaze3_SSE() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(Blaze3_SSE());
    return rcpp_result_gen;
END_RCPP
}
// Blaze3_AVX
bool Blaze3_AVX();
RcppExport SEXP _RcppBlaze3_Blaze3_AVX() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(Blaze3_AVX());
    return rcpp_result_gen;
END_RCPP
}
// Blaze3_AVX2
bool Blaze3_AVX2();
RcppExport SEXP _RcppBlaze3_Blaze3_AVX2() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(Blaze3_AVX2());
    return rcpp_result_gen;
END_RCPP
}
// Blaze3_MIC
bool Blaze3_MIC();
RcppExport SEXP _RcppBlaze3_Blaze3_MIC() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(Blaze3_MIC());
    return rcpp_result_gen;
END_RCPP
}
// Blaze3_FMA
bool Blaze3_FMA();
RcppExport SEXP _RcppBlaze3_Blaze3_FMA() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(Blaze3_FMA());
    return rcpp_result_gen;
END_RCPP
}
// fastLmPure
List fastLmPure(blaze::DynamicMatrix<double> X, blaze::DynamicVector<double> y, int type);
RcppExport SEXP _RcppBlaze3_fastLmPure(SEXP XSEXP, SEXP ySEXP, SEXP typeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< blaze::DynamicMatrix<double> >::type X(XSEXP);
    Rcpp::traits::input_parameter< blaze::DynamicVector<double> >::type y(ySEXP);
    Rcpp::traits::input_parameter< int >::type type(typeSEXP);
    rcpp_result_gen = Rcpp::wrap(fastLmPure(X, y, type));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_RcppBlaze3_Blaze3_version", (DL_FUNC) &_RcppBlaze3_Blaze3_version, 1},
    {"_RcppBlaze3_Blaze3_SSE", (DL_FUNC) &_RcppBlaze3_Blaze3_SSE, 0},
    {"_RcppBlaze3_Blaze3_AVX", (DL_FUNC) &_RcppBlaze3_Blaze3_AVX, 0},
    {"_RcppBlaze3_Blaze3_AVX2", (DL_FUNC) &_RcppBlaze3_Blaze3_AVX2, 0},
    {"_RcppBlaze3_Blaze3_MIC", (DL_FUNC) &_RcppBlaze3_Blaze3_MIC, 0},
    {"_RcppBlaze3_Blaze3_FMA", (DL_FUNC) &_RcppBlaze3_Blaze3_FMA, 0},
    {"_RcppBlaze3_fastLmPure", (DL_FUNC) &_RcppBlaze3_fastLmPure, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_RcppBlaze3(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
