// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// GBAT
DataFrame GBAT(DataFrame x, std::string id_col, std::string add_col, std::string boro_col);
RcppExport SEXP rGBAT16A_GBAT(SEXP xSEXP, SEXP id_colSEXP, SEXP add_colSEXP, SEXP boro_colSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< DataFrame >::type x(xSEXP);
    Rcpp::traits::input_parameter< std::string >::type id_col(id_colSEXP);
    Rcpp::traits::input_parameter< std::string >::type add_col(add_colSEXP);
    Rcpp::traits::input_parameter< std::string >::type boro_col(boro_colSEXP);
    __result = Rcpp::wrap(GBAT(x, id_col, add_col, boro_col));
    return __result;
END_RCPP
}
