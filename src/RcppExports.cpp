// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// bcgv
Rcpp::List bcgv(std::vector<std::vector<std::vector<double>>> individual, std::vector<std::vector<double>> positions, std::vector<std::vector<double>> effects, const int n_gam, const double se_level, const int min_rep, const int max_rep, const int m, const double p, Rcpp::Nullable<Rcpp::IntegerVector> seed);
RcppExport SEXP bcgvr_bcgv(SEXP individualSEXP, SEXP positionsSEXP, SEXP effectsSEXP, SEXP n_gamSEXP, SEXP se_levelSEXP, SEXP min_repSEXP, SEXP max_repSEXP, SEXP mSEXP, SEXP pSEXP, SEXP seedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<std::vector<std::vector<double>>> >::type individual(individualSEXP);
    Rcpp::traits::input_parameter< std::vector<std::vector<double>> >::type positions(positionsSEXP);
    Rcpp::traits::input_parameter< std::vector<std::vector<double>> >::type effects(effectsSEXP);
    Rcpp::traits::input_parameter< const int >::type n_gam(n_gamSEXP);
    Rcpp::traits::input_parameter< const double >::type se_level(se_levelSEXP);
    Rcpp::traits::input_parameter< const int >::type min_rep(min_repSEXP);
    Rcpp::traits::input_parameter< const int >::type max_rep(max_repSEXP);
    Rcpp::traits::input_parameter< const int >::type m(mSEXP);
    Rcpp::traits::input_parameter< const double >::type p(pSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::IntegerVector> >::type seed(seedSEXP);
    rcpp_result_gen = Rcpp::wrap(bcgv(individual, positions, effects, n_gam, se_level, min_rep, max_rep, m, p, seed));
    return rcpp_result_gen;
END_RCPP
}
