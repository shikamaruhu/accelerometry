// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// artifacts
NumericVector artifacts(NumericVector counts, int thresh);
RcppExport SEXP accelerometry_artifacts(SEXP countsSEXP, SEXP threshSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        NumericVector counts = Rcpp::as<NumericVector >(countsSEXP);
        int thresh = Rcpp::as<int >(threshSEXP);
        NumericVector __result = artifacts(counts, thresh);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// bouts
IntegerVector bouts(NumericVector counts, IntegerVector weartime, int bout_length, int thresh_lower, int thresh_upper, int tol, int tol_lower, int tol_upper, int nci, int days_distinct);
RcppExport SEXP accelerometry_bouts(SEXP countsSEXP, SEXP weartimeSEXP, SEXP bout_lengthSEXP, SEXP thresh_lowerSEXP, SEXP thresh_upperSEXP, SEXP tolSEXP, SEXP tol_lowerSEXP, SEXP tol_upperSEXP, SEXP nciSEXP, SEXP days_distinctSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        NumericVector counts = Rcpp::as<NumericVector >(countsSEXP);
        IntegerVector weartime = Rcpp::as<IntegerVector >(weartimeSEXP);
        int bout_length = Rcpp::as<int >(bout_lengthSEXP);
        int thresh_lower = Rcpp::as<int >(thresh_lowerSEXP);
        int thresh_upper = Rcpp::as<int >(thresh_upperSEXP);
        int tol = Rcpp::as<int >(tolSEXP);
        int tol_lower = Rcpp::as<int >(tol_lowerSEXP);
        int tol_upper = Rcpp::as<int >(tol_upperSEXP);
        int nci = Rcpp::as<int >(nciSEXP);
        int days_distinct = Rcpp::as<int >(days_distinctSEXP);
        IntegerVector __result = bouts(counts, weartime, bout_length, thresh_lower, thresh_upper, tol, tol_lower, tol_upper, nci, days_distinct);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// intensities
NumericVector intensities(NumericVector counts, NumericVector thresh);
RcppExport SEXP accelerometry_intensities(SEXP countsSEXP, SEXP threshSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        NumericVector counts = Rcpp::as<NumericVector >(countsSEXP);
        NumericVector thresh = Rcpp::as<NumericVector >(threshSEXP);
        NumericVector __result = intensities(counts, thresh);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// movingaves
NumericVector movingaves(NumericVector x, int window);
RcppExport SEXP accelerometry_movingaves(SEXP xSEXP, SEXP windowSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        NumericVector x = Rcpp::as<NumericVector >(xSEXP);
        int window = Rcpp::as<int >(windowSEXP);
        NumericVector __result = movingaves(x, window);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// movingaves_max
double movingaves_max(NumericVector x, int window);
RcppExport SEXP accelerometry_movingaves_max(SEXP xSEXP, SEXP windowSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        NumericVector x = Rcpp::as<NumericVector >(xSEXP);
        int window = Rcpp::as<int >(windowSEXP);
        double __result = movingaves_max(x, window);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// blockaves
NumericVector blockaves(NumericVector x, int window);
RcppExport SEXP accelerometry_blockaves(SEXP xSEXP, SEXP windowSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        NumericVector x = Rcpp::as<NumericVector >(xSEXP);
        int window = Rcpp::as<int >(windowSEXP);
        NumericVector __result = blockaves(x, window);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// personvars
NumericMatrix personvars(NumericMatrix dayvars, int rows, int days, int wk, int we);
RcppExport SEXP accelerometry_personvars(SEXP dayvarsSEXP, SEXP rowsSEXP, SEXP daysSEXP, SEXP wkSEXP, SEXP weSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        NumericMatrix dayvars = Rcpp::as<NumericMatrix >(dayvarsSEXP);
        int rows = Rcpp::as<int >(rowsSEXP);
        int days = Rcpp::as<int >(daysSEXP);
        int wk = Rcpp::as<int >(wkSEXP);
        int we = Rcpp::as<int >(weSEXP);
        NumericMatrix __result = personvars(dayvars, rows, days, wk, we);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// rle2_num
NumericMatrix rle2_num(NumericVector x, int n, int nmax, int indices);
RcppExport SEXP accelerometry_rle2_num(SEXP xSEXP, SEXP nSEXP, SEXP nmaxSEXP, SEXP indicesSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        NumericVector x = Rcpp::as<NumericVector >(xSEXP);
        int n = Rcpp::as<int >(nSEXP);
        int nmax = Rcpp::as<int >(nmaxSEXP);
        int indices = Rcpp::as<int >(indicesSEXP);
        NumericMatrix __result = rle2_num(x, n, nmax, indices);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// rle2_char
CharacterMatrix rle2_char(CharacterVector x, int n, int nmax, int indices);
RcppExport SEXP accelerometry_rle2_char(SEXP xSEXP, SEXP nSEXP, SEXP nmaxSEXP, SEXP indicesSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        CharacterVector x = Rcpp::as<CharacterVector >(xSEXP);
        int n = Rcpp::as<int >(nSEXP);
        int nmax = Rcpp::as<int >(nmaxSEXP);
        int indices = Rcpp::as<int >(indicesSEXP);
        CharacterMatrix __result = rle2_char(x, n, nmax, indices);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// sedbreaks
int sedbreaks(NumericVector counts, IntegerVector weartime, int thresh);
RcppExport SEXP accelerometry_sedbreaks(SEXP countsSEXP, SEXP weartimeSEXP, SEXP threshSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        NumericVector counts = Rcpp::as<NumericVector >(countsSEXP);
        IntegerVector weartime = Rcpp::as<IntegerVector >(weartimeSEXP);
        int thresh = Rcpp::as<int >(threshSEXP);
        int __result = sedbreaks(counts, weartime, thresh);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// sedbreaks_flags
IntegerVector sedbreaks_flags(NumericVector counts, IntegerVector weartime, int thresh);
RcppExport SEXP accelerometry_sedbreaks_flags(SEXP countsSEXP, SEXP weartimeSEXP, SEXP threshSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        NumericVector counts = Rcpp::as<NumericVector >(countsSEXP);
        IntegerVector weartime = Rcpp::as<IntegerVector >(weartimeSEXP);
        int thresh = Rcpp::as<int >(threshSEXP);
        IntegerVector __result = sedbreaks_flags(counts, weartime, thresh);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// weartime
IntegerVector weartime(NumericVector counts, int window, int tol, int tol_upper, int nci, int days_distinct);
RcppExport SEXP accelerometry_weartime(SEXP countsSEXP, SEXP windowSEXP, SEXP tolSEXP, SEXP tol_upperSEXP, SEXP nciSEXP, SEXP days_distinctSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        NumericVector counts = Rcpp::as<NumericVector >(countsSEXP);
        int window = Rcpp::as<int >(windowSEXP);
        int tol = Rcpp::as<int >(tolSEXP);
        int tol_upper = Rcpp::as<int >(tol_upperSEXP);
        int nci = Rcpp::as<int >(nciSEXP);
        int days_distinct = Rcpp::as<int >(days_distinctSEXP);
        IntegerVector __result = weartime(counts, window, tol, tol_upper, nci, days_distinct);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
