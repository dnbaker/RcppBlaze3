// [[Rcpp::depends(RcppBlaze3)]]
#include <RcppBlaze3.h>

// [[Rcpp::export]]
blaze::StaticVector<double, 3UL> test_StaticVector_dbl_len3( blaze::StaticVector<double, 3UL> x ) {
  return x;
}

// [[Rcpp::export]]
blaze::StaticVector< std::complex<double>, 3UL > test_StaticVector_cpl_len3( blaze::StaticVector< std::complex<double>, 3UL > x) {
  return x;
}

// [[Rcpp::export]]
blaze::HybridVector<double, 3UL> test_HybridVector_dbl_len3( blaze::HybridVector<double, 3UL> x ) {
  return x;
}

// [[Rcpp::export]]
blaze::HybridVector< std::complex<double>, 3UL > test_HybridVector_cpl_len3( blaze::HybridVector< std::complex<double>, 3UL > x) {
  return x;
}

// [[Rcpp::export]]
blaze::DynamicVector<double> test_DynamicVector_dbl( blaze::DynamicVector<double> x) {
  return x;
}

// [[Rcpp::export]]
blaze::DynamicVector< std::complex<double> > test_DynamicVector_cpl( blaze::DynamicVector< std::complex<double> > x) {
    return x;
}


// [[Rcpp::export]]
blaze::CompressedVector<double> test_CompressedVector_dbl_col( blaze::CompressedVector<double> x ) {
  return x;
}

// [[Rcpp::export]]
blaze::CompressedVector<double,blaze::rowVector>
  test_CompressedVector_dbl_row( blaze::CompressedVector<double,blaze::rowVector> x ) {
  return x;
}
